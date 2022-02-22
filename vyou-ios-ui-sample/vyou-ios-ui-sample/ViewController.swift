//
//  ViewController.swift
//  vyou-ios-ui-sample
//
//  Created by Ruben on 7/2/22.
//

import UIKit
import AuthenticationServices
import VYouApple

class ViewController: UIViewController {
    
    private let upperView: UIView = {
        let view = UIView()
        view.backgroundColor = .blue
        return view
    }()
    
    private let bottomView: UIView = {
       let view = UIView()
        view.backgroundColor = .white
        return view
    }()
    
    private let stackView: UIStackView = {
        let stackView = UIStackView(frame: .zero)
        stackView.axis = .vertical
        stackView.distribution = .fill
        stackView.alignment = .fill
        stackView.spacing = 15
        return stackView
    }()
    
    private let signInButton: ASAuthorizationAppleIDButton = {
        let btn = ASAuthorizationAppleIDButton()
        btn.addTarget(self, action: #selector(signInWithApple), for: .touchUpInside)
        return btn
    }()

    override func viewDidLoad() {
        super.viewDidLoad()
        view.backgroundColor = .white
        
        upperView.translatesAutoresizingMaskIntoConstraints = false
        view.addSubview(upperView)
        
        bottomView.translatesAutoresizingMaskIntoConstraints = false
        view.addSubview(bottomView)
        
        stackView.translatesAutoresizingMaskIntoConstraints = false
        view.addSubview(stackView)
        
        NSLayoutConstraint.activate([
            upperView.leftAnchor.constraint(equalTo: view.leftAnchor),
            upperView.rightAnchor.constraint(equalTo: view.rightAnchor),
            upperView.topAnchor.constraint(equalTo: view.topAnchor),
            upperView.heightAnchor.constraint(equalTo: view.heightAnchor, multiplier: 0.3)
            ])
        
        NSLayoutConstraint.activate([
            bottomView.leftAnchor.constraint(equalTo: view.leftAnchor),
            bottomView.rightAnchor.constraint(equalTo: view.rightAnchor),
            bottomView.topAnchor.constraint(equalTo: upperView.bottomAnchor),
            ])
        
        NSLayoutConstraint.activate([
            stackView.widthAnchor.constraint(equalTo: view.widthAnchor, multiplier: 0.64),
            stackView.centerYAnchor.constraint(equalTo: bottomView.centerYAnchor),
            stackView.centerXAnchor.constraint(equalTo: bottomView.centerXAnchor)
        ])
        
        stackView.addArrangedSubview(signInButton)
        signInButton.heightAnchor.constraint(equalToConstant: 56).isActive = true
    }
    
    @objc func signInWithApple() {
        try? VYouApple.instance().signIn(presenting: self) { credentials in
            debugPrint("Credentials ID Token: \(credentials.idToken)")
        }
    }
}

