/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOMapRequest : NSObject {
    id  _cancellationHandler;
    id  _completionHandler;
    BOOL  _isFinished;
    GEOMapRequestManager * _requestManager;
}

@property (nonatomic, readwrite, copy) id cancellationHandler;
@property (nonatomic, readwrite, copy) id completionHandler;
@property (nonatomic, readonly) BOOL isFinished;

- (void).cxx_destruct;
- (void)_finishAndCallHandler:(id)arg1;
- (void)cancel;
- (id)cancellationHandler;
- (void)complete;
- (id)completionHandler;
- (void)dealloc;
- (id)initWithManager:(id)arg1;
- (BOOL)isFinished;
- (void)setCancellationHandler:(id)arg1;
- (void)setCompletionHandler:(id)arg1;

@end