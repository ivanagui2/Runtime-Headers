/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSTabBarDelayedPopUpButtonCell : NSButtonCell {
    BOOL  _didPopUpMenu;
    NSTimer * _menuTimer;
}

- (void).cxx_destruct;
- (void)_displayDelayedMenu;
- (void)_invalidateMenuTimer;
- (double)_menuDelayTime;
- (BOOL)continueTracking:(struct CGPoint { double x1; double x2; })arg1 at:(struct CGPoint { double x1; double x2; })arg2 inView:(id)arg3;
- (void)displayOffsetContextualMenu;
- (BOOL)startTrackingAt:(struct CGPoint { double x1; double x2; })arg1 inView:(id)arg2;
- (void)stopTracking:(struct CGPoint { double x1; double x2; })arg1 at:(struct CGPoint { double x1; double x2; })arg2 inView:(id)arg3 mouseIsUp:(BOOL)arg4;

@end