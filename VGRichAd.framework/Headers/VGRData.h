//
//  VGRData.h
//  meteor
//
//  Created by   on 2016/04/20.
//  Copyright © 2016年 GoldSpot Media Inc. All rights reserved.
//

/**
 * 扱いやすい型に成型されたVASTデータ
 */

#import <Foundation/Foundation.h>
#import "VGRAVView.h"
#import "VGRConsts.h"

@interface VGRData : NSObject {
}

@property(nonatomic, copy) VGRAVView *avView;
@property(nonatomic, copy) UIWebView *wvCompanion;

@property (nonatomic, weak) id delegate;
@property(nonatomic, copy, readonly)  NSString *vgrKey;
@property(nonatomic, copy, readonly) NSDictionary *vastData;
@property(nonatomic, copy, readonly) NSMutableDictionary *trackingDatas;

// From VAST Data
@property (nonatomic, readonly) NSString *adSystem;
@property (nonatomic, readonly) NSString *adID;
@property (nonatomic, readonly) int adSequence;
@property (nonatomic, readonly) NSString *adTitle;
@property (nonatomic, readonly) NSString *adDescription;
@property (nonatomic, readonly) float skipoffset;
@property (nonatomic, readonly) NSString *duration;
@property (nonatomic, readonly) NSString *creativeID;
@property (nonatomic, readonly) NSString *creativeAdID;
@property (nonatomic, readonly) NSString *clickThrough;
@property (nonatomic, readonly) NSArray *mediaFiles;
@property (nonatomic, readonly) NSString *mp4fileName;
@property (nonatomic, readonly) NSMutableDictionary *extensions;
@property (nonatomic, readonly) BOOL skipabble;
@property (nonatomic, readonly) float width;
@property (nonatomic, readonly) float height;



- (VGRData *)setVastData:(NSDictionary *)dictionary adID:(NSString*)adID adSequence:(NSString*)adSequence;
- (VGRData *)setTrackingData:(NSDictionary *)datas;

- (void) sendTrackingCreativeView;
- (void) sendTrackingFullscreen;
- (void) sendTrackingExitFullscreen;
- (void) sendTrackingExpand;
- (void) sendTrackingCollapse;
- (void) sendTrackingCloseLinear;
- (void) sendTrackingViewable;
- (void) sendTrackingError:(VGR_VAST_ERROR_CODE)errorCode;

/**
 * cacheMediaFile
 *
 * @param DirectoryPath(ChacheFile's root Directory)
 */
- (VGRData *)cacheMediaFile:(NSString *)dirPath useCache:(BOOL)useCache;

@end
