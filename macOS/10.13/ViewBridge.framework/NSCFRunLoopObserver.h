/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ViewBridge.framework/Versions/A/ViewBridge
 */

@interface NSCFRunLoopObserver : NSObject {
    unsigned long long  _activities;
    struct __CFRunLoop { } * _loop;
    NSMutableArray * _modes;
    NSMutableArray * _observers;
}

+ (id)describeActivity:(unsigned long long)arg1;
+ (id)observerWithActivities:(unsigned long long)arg1;

- (void)dealloc;
- (id)initWithActivities:(unsigned long long)arg1;
- (void)observeMode:(struct __CFString { }*)arg1 withBlock:(id)arg2;

@end