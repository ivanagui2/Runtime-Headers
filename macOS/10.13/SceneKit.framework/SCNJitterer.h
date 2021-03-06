/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/Versions/A/SceneKit
 */

@interface SCNJitterer : NSObject {
    <SCNJittererDelegate> * _delegate;
    BOOL  _enabled;
    unsigned long long  _iteration;
    NSObject<OS_dispatch_source> * _restartSource;
    BOOL  _restartSourceIsSuspended;
    unsigned long long  _state;
}

@property (getter=isEnabled, nonatomic, readwrite) BOOL enabled;

+ (void)initialize;

- (void)dealloc;
- (void)delegateWillDie;
- (id)initWithDelegate:(id)arg1;
- (BOOL)isAborting;
- (BOOL)isEnabled;
- (void)jitter;
- (void)restart;
- (void)setEnabled:(BOOL)arg1;
- (void)stopIfNeeded;
- (void)update;

@end
