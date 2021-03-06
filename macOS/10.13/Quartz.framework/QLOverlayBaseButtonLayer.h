/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
 */

@interface QLOverlayBaseButtonLayer : CALayer <QLOverlayClickableButton> {
    QLAccessibilityUIElement * _accessibilityElement;
    SEL  _action;
    CALayer * _backgroundLayer;
    CALayer * _contentLayer;
    BOOL  _firstMouseDownWhenEnabled;
    BOOL  _smallSize;
    id  _target;
}

@property (atomic, readonly) QLAccessibilityUIElement *accessibilityElement;
@property (atomic, readwrite) SEL action;
@property (atomic, readonly) double buttonBorderWidth;
@property (nonatomic, readwrite) BOOL smallSize;
@property (atomic, readwrite) id target;

+ (void)_pushButtonShapeForFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
+ (double)_shadowBlur;
+ (double)_shadowWidth;
+ (struct CGSize { double x1; double x2; })buttonSize;

- (void)_beginMouseDownAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (BOOL)_enableClickAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_endMouseDownAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (BOOL)_mouseDownAtPoint:(struct CGPoint { double x1; double x2; })arg1 clickCount:(long long)arg2 accessibilityPress:(BOOL)arg3;
- (id)accessibilityElement;
- (BOOL)accessibilityPerformPress;
- (SEL)action;
- (double)buttonBorderWidth;
- (void)dealloc;
- (id)init;
- (BOOL)mouseDownAtPoint:(struct CGPoint { double x1; double x2; })arg1 clickCount:(long long)arg2;
- (void)setAction:(SEL)arg1;
- (void)setContentsScale:(double)arg1;
- (void)setSmallSize:(BOOL)arg1;
- (void)setTarget:(id)arg1;
- (BOOL)smallSize;
- (id)target;

@end
