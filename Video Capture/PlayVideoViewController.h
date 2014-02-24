//
//  PlayVideoViewController.h
//  Video Capture
//
//  Created by Sitanshu Joshi on 2/24/14.
//  Copyright (c) 2014 Sitanshu Joshi. All rights reserved.
//

#import "ViewController.h"
#import <MobileCoreServices/UTCoreTypes.h>
#import <MediaPlayer/MediaPlayer.h>

@interface PlayVideoViewController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>

@property (nonatomic, weak) IBOutlet UIButton *btnPlayVideo;


-(IBAction)playVideo:(id)sender;
-(BOOL)startMediaBrowserFromViewController:(UIViewController*)controller usingDelegate:(id )delegate ;
@end
