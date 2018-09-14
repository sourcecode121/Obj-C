//
//  HTTPService.h
//  DevslopesTutorials
//
//  Created by Mark Price on 2/1/16.
//  Copyright © 2016 Devslopes. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void (^onComplete)(NSArray * __nullable dataArray, NSString * __nullable errMessage);

@interface HTTPService : NSObject

+ (id) instance;
- (void) getTutorials:(nullable onComplete)completionHandler;


@end
