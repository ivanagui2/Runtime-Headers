/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
 */

@interface QTHUDBackgroundView : NSView {
    struct QTHUDBackgroundViewInternal { unsigned long long x1; double x2; } * _QTHUDBackgroundViewInternal;
}

+ (id)defaultAnimationForKey:(id)arg1;
+ (void)initialize;

- (unsigned long long)QTHUD_backgroundTintForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_QTUIDrawingOptions;
- (unsigned long long)backgroundStyle;
- (double)contentBorderPosition;
- (unsigned long long)controlSize;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)mouseDownCanMoveWindow;
- (void)setBackgroundStyle:(unsigned long long)arg1;
- (void)setContentBorderPosition:(double)arg1;
- (void)setControlSize:(unsigned long long)arg1;

@end
