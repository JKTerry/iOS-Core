//
//  VideoToGIF.h
//  CCCamera
//
//  Created by Jake on 18/09/2017.
//  Copyright © 2017 cyd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface VideoToGIF : NSObject

+ (void)createGIFfromURL:(NSURL*)videoURL loopCount:(int)loopCount completion:(void(^)(NSURL *GifURL))completionBlock;

+ (void)createGIFfromURL:(NSURL*)videoURL frameCount:(int)frameCount delayTime:(float)delayTime loopCount:(int)loopCount completion:(void(^)(NSURL *GifURL))completionBlock;

@end
