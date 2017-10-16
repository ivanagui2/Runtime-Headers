/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSDisplayLink : NSDisplayLink {
    id  _displayTiming;
    unsigned int  _firing;
    id  _handler;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    unsigned int  _paused;
    unsigned long long  _scheduleCount;
    struct __CFRunLoopTimer { } * _timer;
}

- (void)_fire;
- (void)_schedule;
- (void)addToRunLoop:(id)arg1 forMode:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithDisplayTiming:(id)arg1 handler:(id)arg2;
- (void)invalidate;
- (BOOL)isPaused;
- (BOOL)isValid;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)setPaused:(BOOL)arg1;

@end