/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
 */

@interface StdMovieUIVolumeSliderPopupView : NSView {
    SEL  _action;
    BOOL  _continuous;
    double  _maxValue;
    double  _minValue;
    id  _target;
    double  _value;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  bgRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  knobRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  oldbounds;
}

+ (void)fadeTimerStep:(id)arg1;
+ (void)initialize;

- (SEL)action;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)fadeAway;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)isContinuous;
- (void)loadImages;
- (double)maxValue;
- (double)minValue;
- (void)popupSliderWithEvent:(id)arg1 forView:(id)arg2 preferredEdge:(unsigned long long)arg3;
- (void)setAction:(SEL)arg1;
- (void)setContinuous:(BOOL)arg1;
- (void)setMaxValue:(double)arg1;
- (void)setMinValue:(double)arg1;
- (void)setTarget:(id)arg1;
- (void)setValue:(double)arg1;
- (id)target;
- (void)trackWithEvent:(id)arg1;
- (double)value;

@end