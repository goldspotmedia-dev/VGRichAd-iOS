//
//  VGRMovieDelegate.h
//  VGRichAd
//
//  Created by   on 2016/04/29.
//  Copyright © 2016年 GoldSpot Media Inc. All rights reserved.
//

@protocol VGRMovieDelegate<NSObject>
@optional

// アドリクエスト関連
//アドサーバへのリクエストURL生成
- (NSString *)vgrCreateAdServerRequestUrl;
//アドサーバからのレスポンス加工
- (NSData *)vgrResponseFromServer:(NSData *)data;

// 動画再生関連
//動画再生準備完了
- (void)vgrPrepared:(NSString*)vgrKey duration:(float)duration;

//動画の再生開始
- (void)vgrPlayStart:(NSString*)vgrKey;

//動画の一時停止
- (void)vgrPause:(NSString*)vgrKey;

//動画の再開
- (void)vgrResume:(NSString*)vgrKey;

//動画をもう一度再生
- (void)vgrRewind:(NSString*)vgrKey;

//動画再生（プログレス）
- (void)vgrPlayProgress:(NSString*)vgrKey currentTime:(float)currentTime duration:(float)duration;

//動画領域のタップ
- (void)vgrAvViewTapped:(NSString*)vgrKey;

//動画再生25%完了
- (void)vgrPlayFirstQuartile:(NSString*)vgrKey;

//動画再生50%完了
- (void)vgrPlayMidpoint:(NSString*)vgrKey;

//動画再生75%完了
- (void)vgrPlayThirdQuartile:(NSString*)vgrKey;

//動画の再生終了
- (void)vgrPlayEnd:(NSString*)vgrKey;

//スキップ可能になった
- (void)vgrSkippable:(NSString*)vgrKey;

//エラー発生
- (void)vgrErrorOccured:(NSString*)vgrKey error:(NSError *)error;

//有効な広告がなかった
- (void)vgrNoAvailableAd;

@end
