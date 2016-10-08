/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSPulseGestureRecognizer : NSGestureRecognizer <NSCoding> {
    long long  _flags;
    struct CGPoint { 
        double x; 
        double y; 
    }  _location;
    double  _pressure;
    long long  _stage;
    double  _stageTransition;
}

@property (atomic, readonly) double pressure;
@property (atomic, readwrite) BOOL recognizesOnMouseDown;
@property (atomic, readonly) long long stage;
@property (atomic, readonly) double stageTransition;

- (id)_desiredPressureBehavior;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (struct CGPoint { double x1; double x2; })locationInView:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)otherMouseDown:(id)arg1;
- (double)pressure;
- (void)pressureChangeWithEvent:(id)arg1;
- (BOOL)recognizesOnMouseDown;
- (void)reset;
- (void)rightMouseDown:(id)arg1;
- (void)setRecognizesOnMouseDown:(BOOL)arg1;
- (long long)stage;
- (double)stageTransition;

@end