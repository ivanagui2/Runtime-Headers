/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
 */

@interface QLControlsCenteringView : NSView {
    NSMutableArray * _controlsCenteringViewConstraints;
    QLControlsController * _controlsController;
}

@property (atomic, readwrite, retain) NSMutableArray *controlsCenteringViewConstraints;
@property (atomic, readwrite) QLControlsController *controlsController;

- (id)controlsCenteringViewConstraints;
- (id)controlsController;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1;
- (void)setControlsCenteringViewConstraints:(id)arg1;
- (void)setControlsController:(id)arg1;
- (void)updateConstraints;

@end