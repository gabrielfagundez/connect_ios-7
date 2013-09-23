//
//  LoginViewController.h
//  Connect
//
//  Created by TopTier labs on 9/21/13.
//  Copyright (c) 2013 PIS. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LoginViewController : UIViewController <UITextFieldDelegate, UITableViewDelegate,UITableViewDataSource>
{
    IBOutlet UIButton *btnLogin;
    IBOutlet UIButton *btnRegister;

    IBOutlet UITextField *txtMail;
    IBOutlet UITextField *txtPassword;
    IBOutlet UITableView *table;
    
    NSString *mail;
    NSString *password;
    
}

@property(nonatomic,retain) UIButton *btnLogin;
@property(nonatomic,retain) UIButton *btnRegister;

@property(nonatomic,retain) UITextField *txtMail;
@property(nonatomic,retain) UITextField *txtPassword;
@property(nonatomic,retain) UITableView *table;

-(IBAction)registration:(id)sender;
-(IBAction)login:(id)sender;


@end
