//
//  MasterViewController.h
//  ReproExample
//
//  Created by Masahiro Hayashi on 10/15/14.
//  Copyright (c) 2014 Repro Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;


@end

