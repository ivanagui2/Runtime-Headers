/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
 */

@interface QLFullscreenControlsPanel : QLControlsPanel {
    QLFullscreenController * _fullscreenController;
}

@property (atomic, readwrite) QLFullscreenController *fullscreenController;

- (id)_qlControllerCandidateForPreviewPanel:(id)arg1;
- (BOOL)_qlIgnoreWindowForPreviewPanel:(id)arg1;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityParentAttribute;
- (double)animationResizeTime:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)backingScaleFactor;
- (id)fullscreenController;
- (void)setFullscreenController:(id)arg1;
- (BOOL)worksWhenModal;

@end