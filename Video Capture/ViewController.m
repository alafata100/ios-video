//
//  ViewController.m
//  Video Capture
//
//  Created by Sitanshu Joshi on 2/24/14.
//  Copyright (c) 2014 Sitanshu Joshi. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

@synthesize btnStartCapture,btnStartMerge,btnStartPlay;

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    [self.navigationItem setTitle:@"Video Home"];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

#pragma mark IBAction
-(IBAction)btnStratCaptureEvent:(id)sender {
    [self performSegueWithIdentifier:@"recordVideo" sender:nil];
}
-(IBAction)btnStratMergeEvent:(id)sender {
    [self performSegueWithIdentifier:@"mergeVideo" sender:nil];
}
-(IBAction)btnStratPlayEvent:(id)sender {
    [self performSegueWithIdentifier:@"playVideo" sender:nil];
}



@end
