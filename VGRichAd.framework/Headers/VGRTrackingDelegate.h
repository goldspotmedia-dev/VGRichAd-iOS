//
//  VGRTrackingDelegate.h
//  meteor
//
//  Created by   on 2016/04/20.
//  Copyright © 2016年 GoldSpot Media Inc. All rights reserved.
//

/**
 * トラッキングイベントのデレゲーター
 * 各デレゲートはトラッキングURL取り込み時にコールされ、
 * ライブラリ使用者側でURLを加工したり追加したりすることを想定。
 */

@protocol VGRTrackingDelegate<NSObject>
@optional

- (NSArray<NSString*>*)vgrCreateUrlError:(NSArray<NSString*>*)urls;
- (NSArray<NSString*>*)vgrCreateUrlImpression:(NSArray<NSString*>*)urls;
- (NSArray<NSString*>*)vgrCreateUrlStart:(NSArray<NSString*>*)urls;
- (NSArray<NSString*>*)vgrCreateUrlViewable:(NSArray<NSString*>*)urls;
- (NSArray<NSString*>*)vgrCreateUrlMidpoint:(NSArray<NSString*>*)urls;
- (NSArray<NSString*>*)vgrCreateUrlFirstQuartile:(NSArray<NSString*>*)urls;
- (NSArray<NSString*>*)vgrCreateUrlThirdQuartile:(NSArray<NSString*>*)urls;
- (NSArray<NSString*>*)vgrCreateUrlComplete:(NSArray<NSString*>*)urls;
- (NSDictionary<NSString*, NSString*>*)vgrCreateUrlProgress:(NSDictionary<NSString*, NSString*>*)urls;
- (NSArray<NSString*>*)vgrCreateUrlMute:(NSArray<NSString*>*)urls;
- (NSArray<NSString*>*)vgrCreateUrlPause:(NSArray<NSString*>*)urls;
- (NSArray<NSString*>*)vgrCreateUrlFullscreen:(NSArray<NSString*>*)urls;
- (NSArray<NSString*>*)vgrCreateUrlUnmute:(NSArray<NSString*>*)urls;
- (NSArray<NSString*>*)vgrCreateUrlResume:(NSArray<NSString*>*)urls;
- (NSArray<NSString*>*)vgrCreateUrlCreativeView:(NSArray<NSString*>*)urls;
- (NSArray<NSString*>*)vgrCreateUrlExitfullscreen:(NSArray<NSString*>*)urls;
- (NSArray<NSString*>*)vgrCreateUrlExpand:(NSArray<NSString*>*)urls;
- (NSArray<NSString*>*)vgrCreateUrlCollapse:(NSArray<NSString*>*)urls;
- (NSArray<NSString*>*)vgrCreateUrlRewind:(NSArray<NSString*>*)urls;
- (NSArray<NSString*>*)vgrCreateUrlSkip:(NSArray<NSString*>*)urls;
- (NSArray<NSString*>*)vgrCreateUrlCloseLinear:(NSArray<NSString*>*)urls;
- (NSArray<NSString*>*)vgrCreateUrlTwitter:(NSArray<NSString*>*)urls;
- (NSArray<NSString*>*)vgrCreateUrlLine:(NSArray<NSString*>*)urls;
- (NSArray<NSString*>*)vgrCreateUrlClickTracking:(NSArray<NSString*>*)urls;

@end
