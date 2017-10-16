/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
 */

@interface AVMediaDataRequester : NSObject {
    <AVMediaDataRequesterConsumer> * _mediaDataConsumer;
    id  _requestBlock;
    NSObject<OS_dispatch_queue> * _requestQueue;
}

@property (nonatomic, readonly) id requestBlock;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *requestQueue;

- (void)_requestMediaDataIfReady;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (id)initWithMediaDataConsumer:(id)arg1 requestQueue:(id)arg2 requestBlock:(id)arg3;
- (void)invalidate;
- (id)requestBlock;
- (id)requestQueue;
- (void)startRequestingMediaData;

@end