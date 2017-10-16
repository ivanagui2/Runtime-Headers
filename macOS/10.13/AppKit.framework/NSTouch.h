/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSTouch : NSObject <NSCopying> {
    long long  _contextId;
    id  _device;
    struct CGSize { 
        double width; 
        double height; 
    }  _deviceSize;
    id  _identity;
    long long  _index;
    unsigned long long  _phase;
    struct CGPoint { 
        double x; 
        double y; 
    }  _pos0;
    struct CGPoint { 
        double x; 
        double y; 
    }  _pos1;
    long long  _privateFlags;
    id  _reserved1;
    long long  _reserved4;
    double  _timestamp;
    NSView * _view;
}

@property (atomic, readonly) id device;
@property (atomic, readonly) struct CGSize { double x1; double x2; } deviceSize;
@property (atomic, readonly) <NSObject><NSCopying> *identity;
@property (atomic, readonly) struct CGPoint { double x1; double x2; } normalizedPosition;
@property (atomic, readonly) unsigned long long phase;
@property (atomic, readonly) struct CGPoint { double x1; double x2; } previousNormalizedPosition;
@property (getter=isResting, atomic, readonly) BOOL resting;
@property (atomic, readonly) double timestamp;

- (double)_force;
- (id)_initWithIdentity:(id)arg1 index:(long long)arg2 phase:(unsigned long long)arg3 contextId:(long long)arg4 position:(struct CGPoint { double x1; double x2; })arg5 previousPosition:(struct CGPoint { double x1; double x2; })arg6 touchType:(long long)arg7 timestamp:(double)arg8 isResting:(BOOL)arg9 view:(id)arg10 device:(id)arg11 deviceSize:(struct CGSize { double x1; double x2; })arg12 force:(double)arg13;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)device;
- (struct CGSize { double x1; double x2; })deviceSize;
- (id)identity;
- (BOOL)isResting;
- (struct CGPoint { double x1; double x2; })locationInView:(id)arg1;
- (struct CGPoint { double x1; double x2; })normalizedPosition;
- (unsigned long long)phase;
- (struct CGPoint { double x1; double x2; })previousLocationInView:(id)arg1;
- (struct CGPoint { double x1; double x2; })previousNormalizedPosition;
- (double)timestamp;
- (long long)type;

// NSTouch (InternalExtensions)

- (long long)_contextId;
- (long long)_index;
- (id)_initWithIndex:(long long)arg1 phase:(unsigned long long)arg2 contextId:(long long)arg3 position:(struct CGPoint { double x1; double x2; })arg4 previousPosition:(struct CGPoint { double x1; double x2; })arg5 touchType:(long long)arg6 timestamp:(double)arg7 isResting:(BOOL)arg8 view:(id)arg9 device:(id)arg10 deviceSize:(struct CGSize { double x1; double x2; })arg11 force:(double)arg12;
- (id)_initWithPreviousTouch:(id)arg1 newPhase:(unsigned long long)arg2 position:(struct CGPoint { double x1; double x2; })arg3 timestamp:(double)arg4 isResting:(BOOL)arg5 force:(double)arg6;
- (id)_touchByCancellingTouch;
- (id)_view;

@end