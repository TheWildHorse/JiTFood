import UIKit
import VisualRecognitionV3
import AlgoliaSearch

class PhotoViewController: UIViewController {
    
    override var prefersStatusBarHidden: Bool {
        return true
    }
    
    private var backgroundImage: UIImage
    
    var content: JSONObject?
    
    init(image: UIImage) {
        self.backgroundImage = image
        super.init(nibName: nil, bundle: nil)
    }
    
    required init?(coder aDecoder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
    
    func getDocumentsDirectory() -> URL {
        let paths = FileManager.default.urls(for: .documentDirectory, in: .userDomainMask)
        let documentsDirectory = paths[0]
        return documentsDirectory
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        self.view.backgroundColor = UIColor.gray
        let backgroundImageView = UIImageView(frame: view.frame)
        backgroundImageView.contentMode = UIViewContentMode.scaleAspectFit
        backgroundImageView.image = backgroundImage
        view.addSubview(backgroundImageView)
        let cancelButton = UIButton(frame: CGRect(x: 10.0, y: 10.0, width: 30.0, height: 30.0))
        cancelButton.setImage(UIImage(named: "delete"), for: UIControlState())
        cancelButton.addTarget(self, action: #selector(cancel), for: .touchUpInside)
        view.addSubview(cancelButton)
        
        let failure = { (error: Error) in print(error) }
        let recognition = VisualRecognition(apiKey: "42ac6516c5859a5eacd4a91ab39bc05ff005bf3f", version: "2017-04-30")
        
        
        if let data = UIImageJPEGRepresentation(backgroundImage, 0.5) {
            let filename = getDocumentsDirectory().appendingPathComponent("recognition.png")
            try? data.write(to: filename)
            recognition.classify(imageFile: filename, failure: failure) { classifiedImages in
                let klasa = classifiedImages.images[0].classifiers[0].classes[0].classification
                let client = Client(appID: "00IM43XXE3", apiKey: "90a3a67ab7f538b9dfe27409849ebc1f")
                let index = client.index(withName: "JiT")
                index.search(Query(query: klasa), completionHandler: { (content, error) -> Void in
                    if error == nil && content?["nbHits"] as! Int > 0{
                        let vc = UIStoryboard(name: "Main", bundle: nil).instantiateViewController(withIdentifier: "BuyScreen") as! BuyScreenViewController
                        vc.setProduct(prod: content!)
                        let mbp: MIBlurPopupSegue = MIBlurPopupSegue(identifier: "PopBuyScreen", source: self, destination: vc)
                        mbp.perform()
                    }
                    else {
                        self.view.makeToast("Proizvod nije pronađen. :(")
                    }
                })
                
            }
        }
        
    }
    
    
    func cancel() {
        dismiss(animated: true, completion: nil)
    }
}
