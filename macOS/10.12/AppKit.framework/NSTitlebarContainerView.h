/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSTitlebarContainerView : NSView {
    NSThemeFrame * _associatedThemeFrame;
    BOOL  _maskSet;
    BOOL  _shouldRoundCorners;
    BOOL  _transparent;
}

@property (atomic, readwrite) NSThemeFrame *associatedThemeFrame;
@property (atomic, readwrite) double buttonRevealAmount;
@property (atomic, readwrite) BOOL shouldRoundCorners;
@property (atomic, readonly) double titleHeightToHideInFullScreen;
@property (atomic, readwrite) BOOL transparent;

- (void)_clearCornerMaskIfNeeded;
- (id)_nextResponderForEvent:(id)arg1;
- (struct CGSRegionObject { }*)_regionForOpaqueDescendants:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forMove:(BOOL)arg2 forUnderTitlebar:(BOOL)arg3;
- (void)_setCornerMaskIfNeeded;
- (id)_themeFrame;
- (id)associatedThemeFrame;
- (double)buttonRevealAmount;
- (void)dealloc;
- (BOOL)layer:(id)arg1 shouldInheritContentsScale:(double)arg2 fromWindow:(id)arg3;
- (id)menuForEvent:(id)arg1;
- (BOOL)mouseDownCanMoveWindow;
- (void)setAssociatedThemeFrame:(id)arg1;
- (void)setButtonRevealAmount:(double)arg1;
- (void)setShouldRoundCorners:(BOOL)arg1;
- (void)setTransparent:(BOOL)arg1;
- (BOOL)shouldRoundCorners;
- (double)titleHeightToHideInFullScreen;
- (BOOL)transparent;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;

@end
