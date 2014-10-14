//
//  DetailViewController.h
//  ReproExample
//
//  Created by Masahiro Hayashi on 10/15/14.
//  Copyright (c) 2014 Repro Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

