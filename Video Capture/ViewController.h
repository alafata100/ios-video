//
//  ViewController.h
//  Video Capture
//
//  Created by Sitanshu Joshi on 2/24/14.
//  Copyright (c) 2014 Sitanshu Joshi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UIImagePickerControllerDelegate>

@property (nonatomic, weak) IBOutlet UIButton *btnStartPlay;
@property (nonatomic, weak) IBOutlet UIButton *btnStartCapture;
@property (nonatomic, weak) IBOutlet UIButton *btnStartMerge;

-(IBAction)btnStratPlayEvent:(id)sender;
-(IBAction)btnStratCaptureEvent:(id)sender;
-(IBAction)btnStratMergeEvent:(id)sender;

@end
