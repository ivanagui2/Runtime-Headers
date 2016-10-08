/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSAnimationManager : NSObject {
    NSMapTable * _enqueuedAnimationsByObject;
    int  _lock;
    unsigned int  _signaled;
}

+ (id)currentAnimationManager;
+ (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
+ (void)performAnimations:(id)arg1;

- (id)animationForObject:(id)arg1 keyPath:(id)arg2;
- (BOOL)hasAnimationForObject:(id)arg1 keyPath:(id)arg2;
- (void)removeAllAnimationsForObject:(id)arg1;
- (void)removeAnimationsForObject:(id)arg1 keyPath:(id)arg2;
- (void)setTargetValue:(id)arg1 forObject:(id)arg2 keyPath:(id)arg3 animation:(id)arg4;
- (id)targetValueForObject:(id)arg1 keyPath:(id)arg2;

@end