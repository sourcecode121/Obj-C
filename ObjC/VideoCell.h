//
//  VideoCell.h
//  DevslopesTutorials
//
//  Created by Mark Price on 2/1/16.
//  Copyright © 2016 Devslopes. All rights reserved.
//

#import <UIKit/UIKit.h>
@class Video;

@interface VideoCell : UITableViewCell
-(void)updateUI:(nonnull Video*)video;
@end
