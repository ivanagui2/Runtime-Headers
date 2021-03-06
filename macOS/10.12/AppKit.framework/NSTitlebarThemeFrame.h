/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSTitlebarThemeFrame : NSThemeFrame {
    double  _shadowAlpha;
    NSImage * _shadowImage;
}

@property (atomic, readwrite) double shadowAlpha;

- (void)_ensureShadowImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_shadowRect;
- (BOOL)alwaysShowTitlebar;
- (BOOL)bottomCornerRounded;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)isOpaque;
- (void)setShadowAlpha:(double)arg1;
- (double)shadowAlpha;

@end
