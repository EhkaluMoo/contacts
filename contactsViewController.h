//
//  contactsViewController.h
//  contacts
//
//  Created by Ehkalu Moo on 9/15/14.
//  Copyright (c) 2014 Ehkalu Moo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface contactsViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *txtFirstName;
@property (weak, nonatomic) IBOutlet UITextField *txtLastName;
@property (weak, nonatomic) IBOutlet UITextField *txtAddress;
@property (weak, nonatomic) IBOutlet UITextField *txtCity;
@property (weak, nonatomic) IBOutlet UITextField *txtState;
@property (weak, nonatomic) IBOutlet UITextField *txtZipcode;
@property (weak, nonatomic) IBOutlet UITextField *txtPhoneNumber;
@property (weak, nonatomic) IBOutlet UITextField *txtEmail;
@property (weak, nonatomic) IBOutlet UIScrollView *Scrollview;

//hide keyboard
-(IBAction)doneEditing:(id)sender;

@end
