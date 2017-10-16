/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
 */

@interface AVMutableMovieInternal : NSObject {
    NSURL * URL;
    NSData * data;
    struct OpaqueFigAsset { } * figAsset;
    struct OpaqueFigMutableMovie { } * figMutableMovie;
    struct OpaqueFigFormatReader { } * formatReader;
    NSDictionary * initializationOptions;
    long long  makeTracksArrayOnce;
    NSMutableArray * tracks;
    NSObject<OS_dispatch_semaphore> * waitingSemaphore;
}

- (void).cxx_destruct;

@end