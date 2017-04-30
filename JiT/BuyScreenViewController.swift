//
//  BuyScreenViewController.swift
//  JiT
//
//  Created by Igor Rinkovec on 30/04/2017.
//  Copyright © 2017 Igor Rinkovec. All rights reserved.
//

import UIKit
import AlgoliaSearch
import SwiftyJSON

class BuyScreenViewController: UIViewController, MIBlurPopupDelegate {
    
    @IBOutlet var popupView: UIView!
    
    var blurEffectStyle: UIBlurEffectStyle = .light
    var initialScaleAmmount: CGFloat = 0.8
    var animationDuration: TimeInterval = 1.0
    
    var product: JSON?
    
    @IBOutlet weak var nameLabel: UILabel!
    @IBOutlet weak var priceLabel: UILabel!
    @IBOutlet weak var productImageView: UIImageView!
    
    @IBOutlet weak var qtyTextBox: UITextField!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        let tap: UITapGestureRecognizer = UITapGestureRecognizer(target: self, action: "dismissKeyboard")
        
        view.addGestureRecognizer(tap)

        loadData()
    }
    
    func dismissKeyboard() {
        //Causes the view (or one of its embedded text fields) to resign the first responder status.
        view.endEditing(true)
    }
    
    @IBAction func closeButtonTap(_ sender: UIButton) {
        self.dismiss(animated: true, completion: nil)
        self.presentingViewController?.dismiss(animated: false, completion: nil)
    }
    
    @IBAction func qtyChanged(_ sender: UITextField) {
        let qty = Int(sender.text!)
        if(qty != nil && qty! > 0) {
            priceLabel.text = "$" + String(Float(qty!)*self.product!["prices"]["USD"].floatValue)
        }
        else {
            priceLabel.text = "$" + String(self.product!["prices"]["USD"].floatValue)
        }
    }
    
    @IBAction func buyTap(_ sender: UIButton) {
        self.dismiss(animated: true, completion: nil)
        self.presentingViewController?.dismiss(animated: false, completion: nil)
        self.presentingViewController?.presentingViewController?.view.makeToast("Uspješna narudžba!")
    }
    
    func setProduct(prod: JSONObject) {
        self.product = JSON(parseString: prod)["hits"].first?.1
    }
    
    func loadData() {
        nameLabel.text = self.product!["name"][0].stringValue
        
        let url = URL(string: self.product!["image"].stringValue)
        let data = try? Data(contentsOf: url!)
        productImageView.image = UIImage(data: data!)
        
        qtyTextBox.text = "1"
        
        priceLabel.text = "$" + String(self.product!["prices"]["USD"].floatValue)
        
        
    }
    
}
