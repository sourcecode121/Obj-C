//
//  Video.h
//  DevslopesTutorials
//
//  Created by Mark Price on 2/1/16.
//  Copyright © 2016 Devslopes. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Video : NSObject
@property(nonatomic,strong) NSString *videoTitle;
@property(nonatomic,strong) NSString *videoDescription;
@property(nonatomic,strong) NSString *videoIframe;
@property(nonatomic,strong) NSString *thumbnailUrl;
@end
