//
//  MTManager.h
//  meteor
//
//  Created by   on 2016/04/20.
//  Copyright © 2016年 GoldSpot Media Inc. All rights reserved.
//

/**
 * 本ライブラリ全体の管理
 *
 */

#import <Foundation/Foundation.h>

@interface VGRManager : NSObject {
}

/** delegate */
@property(nonatomic, assign) id delegate;

@property(nonatomic, copy, readonly) NSMutableDictionary *vgrDatas;

// Configファイル(plist)のパスを指定して初期化
- (id)initWith:(NSString *)configPath;

// Configの設定内容を指定して初期化
- (id)initWith:(NSString *)cacheDirectory
cacheDataCountMax:(int)cacheDataCountMax
resuestRetryMax:(int)resuestRetryMax
 movieRetryMax:(int)movieRetryMax
cacheExpireMinutes:(int)cacheExpireMinutes;

- (void)setConfig:(NSString *)cacheDirectory
 cacheDataCountMax:(int)cacheDataCountMax
   resuestRetryMax:(int)resuestRetryMax
    movieRetryMax:(int)movieRetryMax
cacheExpireMinutes:(int)cacheExpireMinutes;

//指定サーバへリクエストしVASTをコンバート
- (BOOL)request;

// JSON形式(VAST)のデータからコンバート
- (NSError*)createAdFromJSONData:(NSData *)jsonData;

// XML形式(VAST)のデータからコンバート
- (NSError*)createAdFromXmlData:(NSData *)xmlData;

// String形式(XML:VAST)のデータからコンバート
- (NSError*)createAdFromXMLString:(NSString *)xmlString;

- (NSDictionary*) cacheAll;
- (void) deleteExpiredCacheAll;

- (NSArray*) getSortVGRDatas;

- (void) clearVgrData:(NSString*)vgrKey;

@end

