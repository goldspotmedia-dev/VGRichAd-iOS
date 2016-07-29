//
//  VGRAVView.h
//  meteor
//
//  Created by   on 2016/04/20.
//  Copyright © 2016年 GoldSpot Media Inc. All rights reserved.
//

#import <AVFoundation/AVFoundation.h>
#import <UIKit/UIKit.h>
#import "VGRConsts.h"

/**
 * VGRAVView
 */
@interface VGRAVView : UIView {
}
//@property(nonatomic, weak) id delegate;
@property(nonatomic, assign) BOOL readyComplete;

/**
 * Prepare with AVPlayer & AVPlayerItem
 *
 * @param player AVPlayer
 * @param playerItem AVPlayerItem
 */
- (void)prepareWithPlayer:(AVPlayer *)player
               playerItem:(AVPlayerItem *)playerItem;

/**
 * Replace with AVPlayer & AVPlayerItem
 *
 * @param player AVPlayer
 * @param playerItem AVPlayerItem
 */
- (void)replaceWithPlayer:(AVPlayer *)player
               playerItem:(AVPlayerItem *)playerItem;

/**
 * Play
 */
- (void)play;

/**
 * Rewind
 */
- (void)rewind;

/**
 * Pause
 */
- (void)pause;

/**
 * Set current time
 *
 * @param time currentTime
 */
- (void)setCurrentTime:(float)time;

/**
 * Get current time
 *
 * @return currentTime
 */
- (float)getCurrentTime;

/**
 * Get AssetFileViewSize
 *
 * @return AssetFile's OriginalSize
 */
- (CGSize)getSourceSize;

/**
 * Set volume
 *
 * @param volume 0.0-1.0
 */
- (void)setVolume:(float)volume;

/**
 * Get volume
 *
 * @return volume 0.0-1.0
 */
- (float)getVolume;

/**
 * Get status
 *
 * @return status
 */
- (VGR_CONTROLL_MODE)getStatus;

/**
 * Clear player
 */
- (void)clearPlayer;

/**
 * Enter background
 */
- (void)enterBackground;

/**
 * Resume foreground
 */
- (void)resumeForeground;

@end

