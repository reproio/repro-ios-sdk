//
//  DetailViewController.m
//  ReproInsight
//
//  Created by akira on 5/11/14.
//  Copyright (c) 2014 akira. All rights reserved.
//

#import "DetailViewController.h"
#import <Repro/ReproInsight.h>

@interface DetailViewController ()
- (void)configureView;
@property (strong, nonatomic) IBOutlet UILabel *detailLabel;
@end

@implementation DetailViewController

#pragma mark - Managing the detail item

- (void)setDetailItem:(id)newDetailItem
{
    if (_detailItem != newDetailItem) {
        _detailItem = newDetailItem;

        // Update the view.
        [self configureView];
    }
}

- (void)configureView
{
    // Update the user interface for the detail item.

    if (self.detailItem) {
        self.detailDescriptionLabel.text = [self.detailItem description];
    }
}

- (IBAction)crash:(id)sender {
    // Raise Exception to test crash reporting
    NSException *anException;
    NSDictionary *aUserInfo;
    NSString *aLabel;
    NSNumber *anOutput;
    aLabel = @"The last output value:";
    anOutput = [NSNumber numberWithLong:987654321];
    aUserInfo = @{@"state": aLabel,
                  @"output": anOutput
                  };
    anException = [NSException exceptionWithName:@"anException"
                                          reason:@"A test exception with more data"
                                        userInfo:aUserInfo];
    [anException raise];
}

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    [self configureView];

    [self.detailLabel rpris_masking];
    [ReproInsight track:@"Detail" properties:nil];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
