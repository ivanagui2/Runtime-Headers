/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSRotationGestureRecognizer : NSGestureRecognizer {
    struct CGPoint { 
        double x; 
        double y; 
    }  _location;
    struct CGPoint { 
        double x; 
        double y; 
    }  _reserved1;
    long long  _rflags;
    double  _rotation;
}

@property (atomic, readwrite) double rotation;
@property (atomic, readwrite) double rotationInDegrees;

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;

- (void)_appendSubclassDescription:(id)arg1;
- (BOOL)canPreventGestureRecognizer:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (struct CGPoint { double x1; double x2; })locationInView:(id)arg1;
- (void)reset;
- (void)rotateWithEvent:(id)arg1;
- (double)rotation;
- (double)rotationInDegrees;
- (void)setRotation:(double)arg1;
- (void)setRotationInDegrees:(double)arg1;
- (void)setTranslation:(struct CGPoint { double x1; double x2; })arg1 inView:(id)arg2;
- (void)translateWithEvent:(id)arg1;
- (struct CGPoint { double x1; double x2; })translationInView:(id)arg1;

@end