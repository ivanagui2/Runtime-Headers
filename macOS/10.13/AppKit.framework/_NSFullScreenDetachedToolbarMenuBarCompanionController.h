/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSFullScreenDetachedToolbarMenuBarCompanionController : _NSFullScreenMenuBarCompanionController {
    BOOL  _animatingToCorrectPosition;
    unsigned int  _autohideDisabledCounter;
    double  _autohideHeight;
    NSTitlebarAccessoryViewController * _auxiliaryViewController;
    unsigned int  _forceWindowVisibleCounter;
    BOOL  _hasAutohideToolbar;
    BOOL  _inLayout;
    BOOL  _isForcingToolbarVisibleForSheet;
    BOOL  _isHandlingHotKeyEvent;
    unsigned long long  _lastMenuBarCompanionSpaceID;
    double  _lastSetAutohideHeight;
    BOOL  _registeredForNotes;
    BOOL  _resizeContentWindowAfterToolbarAnimation;
    BOOL  _shouldAutomaticallyAutohideToolbar;
    NSTitlebarContainerView * _titlebarContainerView;
    NSTitlebarView * _titlebarView;
    NSToolbar * _toolbar;
    BOOL  _toolbarWantsToAttachToMenubar;
    NSToolbarFullScreenWindow * _toolbarWindow;
    BOOL  _toolbarWindowIsInheritingAppearanceFromParentWindow;
    BOOL  _windowIsInFullScreen;
    NSToolbarFullScreenResetableAnimation * _windowSlideOutAnimation;
}

@property (nonatomic, readwrite, retain) NSTitlebarAccessoryViewController *auxiliaryViewController;
@property (nonatomic, readwrite) BOOL isHandlingHotKeyEvent;
@property (nonatomic, readwrite) NSTitlebarContainerView *titlebarContainerView;
@property (nonatomic, readwrite) NSTitlebarView *titlebarView;
@property (nonatomic, readwrite, retain) NSToolbar *toolbar;
@property (nonatomic, readwrite) BOOL toolbarWindowIsInheritingAppearanceFromParentWindow;

- (void)_addViewControllerToWindow;
- (BOOL)_calcAttachesToMenuBar;
- (struct CGPoint { double x1; double x2; })_calcWindowTopLeft;
- (long long)_currentChildWindowOrderingPriority;
- (long long)_currentToolbarSubLevel;
- (void)_disableFullScreenAutohidingForToolbar:(id)arg1;
- (void)_disableFullScreenForceVisibleForToolbar:(id)arg1;
- (void)_doDidEnterFullScreen;
- (void)_enableFullScreenAutohidingForToolbar:(id)arg1;
- (void)_enableFullScreenForceVisibleForToolbar:(id)arg1;
- (void)_forceUpdateSpaceAndMenubarCompanionWindowAutohideHeight;
- (BOOL)_isTiledUnderMenuBar;
- (void)_makeWindowIfNecessary;
- (BOOL)_originalWindowHasAutohideToolbarSet;
- (BOOL)_originalWindowShouldAutomaticallyAutohide;
- (void)_relinquishTitlebar;
- (BOOL)_shouldDrawBaselineForEffectiveReveal:(double)arg1;
- (BOOL)_shouldRoundCorners;
- (BOOL)_shouldToolbarFloatAboveSiblings;
- (void)_updateMenubarCompanionWindowAutohideHeight;
- (void)_updateSpaceAndMenubarCompanionWindowAutohideHeight;
- (void)_updateSpaceIfNecessary;
- (double)_visibleWindowHeight;
- (void)addAsChildOfContentWindow;
- (void)animateWindowToCorrectPositionIfNecessary;
- (BOOL)autohideDisabled;
- (void)autohideHeightChanged;
- (id)auxiliaryViewController;
- (id)contentController;
- (double)correctWindowTopTarget;
- (void)dealloc;
- (double)desiredWindowHeight;
- (void)didChangeAuxiliaryViewControllers;
- (void)dispose;
- (double)effectiveAutohideHeight;
- (double)effectiveClampedAutohideHeight;
- (void)finishAnimationIfSynchronous;
- (double)getMenuBarTransitionDuration;
- (struct NSToolbarFullScreenContentViewLayout_t { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_4_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_4_1_2; } x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_6_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_6_1_2; } x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_8_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_8_1_2; } x8; })getToolbarLayout;
- (BOOL)isHandlingHotKeyEvent;
- (void)layout;
- (id)mainLayoutView;
- (void)registerForWindowNotifications:(BOOL)arg1;
- (void)removeAsChildOfContentWindow;
- (void)reshapeToolbarForSpaceShapeChange;
- (void)resizeContentWindow;
- (void)setAuxiliaryViewController:(id)arg1;
- (void)setContentController:(id)arg1;
- (void)setIsHandlingHotKeyEvent:(BOOL)arg1;
- (void)setMenuBarReveal:(double)arg1;
- (void)setTitlebarContainerView:(id)arg1;
- (void)setTitlebarView:(id)arg1;
- (void)setToolbar:(id)arg1;
- (void)setToolbarWindowIsInheritingAppearanceFromParentWindow:(BOOL)arg1;
- (void)tile;
- (id)titlebarContainerView;
- (id)titlebarView;
- (id)toolbar;
- (void)toolbar:(id)arg1 didChangeFrameSizeFromOldSize:(struct CGSize { double x1; double x2; })arg2;
- (void)toolbarDidChangeAttachesToMenuBar:(id)arg1;
- (id)toolbarWindow;
- (BOOL)toolbarWindowIsInheritingAppearanceFromParentWindow;
- (struct CGSize { double x1; double x2; })toolbarWindowSize;
- (struct CGPoint { double x1; double x2; })topCenterForSheet:(id)arg1;
- (void)updateContentViewForMenuBarReveal;
- (void)updateForTabbedWindowOrderFront;
- (void)updateMenuBarScreenRevealHeight;
- (void)updateTitlebarViewBlendingMode;
- (void)updateWindowAlpha;
- (void)updateWindowAndContentView;
- (void)updateWindowCorners;
- (void)updateWindowHeight;
- (void)updateWindowLayout;
- (void)updateWindowPositionAnimation:(double)arg1 startTop:(double)arg2;
- (void)updateWindowVisibility;
- (double)windowAnimationDuration;
- (void)windowDidChangeFullScreenStatus:(id)arg1;
- (void)windowDidChangeSheetNotification:(id)arg1;
- (unsigned long long)windowStyleMask;

@end