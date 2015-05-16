//
//  FirstViewController.m
//  ReproExample
//
//  Created by Masahiro Hayashi on 10/15/14.
//  Copyright (c) 2014 Repro Inc. All rights reserved.
//

#import "FirstViewController.h"
#import <Repro/Repro.h>

@interface FirstViewController ()
@property (weak, nonatomic) IBOutlet UITextField *idField;
@property (weak, nonatomic) IBOutlet UITextField *passwordField;
@end

@implementation FirstViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.

    _idField.delegate = self;
    _passwordField.delegate = self;
    
    [Repro mask:_passwordField];
    [Repro mask:_idField];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (BOOL)textFieldShouldReturn:(UITextField *)textField
{
    [textField resignFirstResponder];
    return YES;
}

@end
