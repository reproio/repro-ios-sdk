//
//  SecondViewController.m
//  ReproExample
//
//  Created by Masahiro Hayashi on 10/15/14.
//  Copyright (c) 2014 Repro Inc. All rights reserved.
//

#import "SecondViewController.h"
#import <Repro/Repro.h>

@interface SecondViewController ()
@property (weak, nonatomic) IBOutlet UIWebView *webView;
@property (weak, nonatomic) IBOutlet UIActivityIndicatorView *indicator;

@end

@implementation SecondViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    _indicator.hidesWhenStopped = YES;
    
    _webView.delegate = self;
    
    NSURL *url = [NSURL URLWithString:@"http://cdn.repro.io.s3.amazonaws.com/index.html"];
    [_webView loadRequest:[NSURLRequest requestWithURL:url]];
    
    [Repro startWebViewTracking:self];
}

- (void)webViewDidStartLoad:(UIWebView*)webView {
    [_indicator startAnimating];
    [UIApplication sharedApplication].networkActivityIndicatorVisible = YES;
}

- (void)webViewDidFinishLoad:(UIWebView*)webView {
    [_indicator stopAnimating];
    [UIApplication sharedApplication].networkActivityIndicatorVisible = NO;
}

- (void)webView:(UIWebView*)webView
didFailLoadWithError:(NSError*)error {
    [_indicator stopAnimating];
    [UIApplication sharedApplication].networkActivityIndicatorVisible = NO;
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
