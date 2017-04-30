//
//  ViewController.swift
//  JiT
//
//  Created by Igor Rinkovec on 30/04/2017.
//  Copyright © 2017 Igor Rinkovec. All rights reserved.
//

import UIKit
import SwiftyCam

class ViewController: SwiftyCamViewController, SwiftyCamViewControllerDelegate {
    
    var flipCameraButton: UIButton!
    var flashButton: UIButton!
    var captureButton: SwiftyCamButton!


    override func viewDidLoad() {
        super.viewDidLoad()
        cameraDelegate = self
        
        captureButton = SwiftyRecordButton(frame: CGRect(x: view.frame.midX - 37.5, y: view.frame.height - 100.0, width: 75.0, height: 75.0))
        self.view.addSubview(captureButton)
        captureButton.delegate = self
        
        flipCameraButton = UIButton(frame: CGRect(x: (((view.frame.width / 2 - 37.5) / 2) - 15.0), y: view.frame.height - 74.0, width: 30.0, height: 23.0))
        flipCameraButton.setImage(UIImage(named: "camera-switch"), for: UIControlState())
        
        flipCameraButton.addTarget(self, action: #selector(self.toggleCamera), for: .touchUpInside)
        self.view.addSubview(flipCameraButton)
        
        /*flashButton = UIButton(frame: CGRect(x: test, y: view.frame.height - 77.5, width: 25.0, height: 25.0))
        flashButton.setImage(UIImage(named: "flash"), for: UIControlState())
        
        flashButton.addTarget(self, action: #selector(self.toggleFlash), for: .touchUpInside)
        self.view.addSubview(flashButton)*/
        
    }
    
    func toggleCamera() {
        self.switchCamera()
    }
    
    func toggleFlash() {
        self.flashEnabled = true
    }
    
    func swiftyCam(_ swiftyCam: SwiftyCamViewController, didTake photo: UIImage) {
        let newVC = PhotoViewController(image: photo)
        self.present(newVC, animated: true, completion: nil)
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }

}

