//
//  VideoMergeViewController.h
//  Video Capture
//
//  Created by Sitanshu Joshi on 2/24/14.
//  Copyright (c) 2014 Sitanshu Joshi. All rights reserved.
//

#import "ViewController.h"
#import <AVFoundation/AVFoundation.h>
#import <CoreMedia/CoreMedia.h>
#import <MobileCoreServices/UTCoreTypes.h>
#import <AssetsLibrary/AssetsLibrary.h>
#import <MediaPlayer/MediaPlayer.h>

@interface VideoMergeViewController : UIViewController<MPMediaPickerControllerDelegate> {
    BOOL isSelectingAssetOne;
}

@property(nonatomic, strong) AVAsset *firstAsset;
@property(nonatomic, strong) AVAsset *secondAsset;
@property(nonatomic, strong) AVAsset *audioAsset;
@property (weak, nonatomic) IBOutlet UIActivityIndicatorView *activityView;

-(IBAction)loadAsset1:(id)sender;
-(IBAction)loadAsset2:(id)sender;
-(IBAction)loadAudio:(id)sender;
-(IBAction)mergeVideo:(id)sender;

-(BOOL)startMediaBrowserFromViewController:(UIViewController*)controller usingDelegate:(id)delegate;
-(void)exportDidFinish:(AVAssetExportSession*)session;

@end
