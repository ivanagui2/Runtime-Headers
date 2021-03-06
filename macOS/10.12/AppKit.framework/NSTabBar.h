/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSTabBar : NSView <NSAnimationDelegate, NSDetachedTabDraggingImageToWindowTransitionControllerDelegate, NSDraggingDestination, NSMorphingDragImageControllerDragSource, NSTabBarSyncedButtonDelegate, NSTabButtonDelegate, NSTabDraggingDestination> {
    NSView * _backdropDarkeningView;
    CABackdropLayer * _backdropLayer;
    NSVisualEffectView * _backdropView;
    NSLayoutConstraint * _backdropViewTrailingConstraint;
    NSView * _backgroundView;
    NSView * _bottomBorderView;
    <NSTabBarSyncedButton> * _buttonThatSyncsWithPlaceholderTabInEmptyUnpinnedRegion;
    NSView * _createTabButton;
    <NSTabBarDelegate> * _delegate;
    unsigned int  _didLayOutAfterMovingToWindow;
    unsigned long long  _dragSourceIndex;
    NSTabButton * _draggedTabButton;
    unsigned long long  _dropIndex;
    double  _edgeScrollingFactor;
    NSView * _externalNextKeyView;
    unsigned long long  _fallbackSelectedTabButtonIndex;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _firstButtonFrame;
    unsigned long long  _firstInsertedTabButtonIndex;
    NSView * _firstKeyView;
    BOOL  _forcesActiveWindowState;
    BOOL  _hideWindowAfterDetachingOnlyTab;
    BOOL  _isDisabled;
    unsigned int  _isDraggingInPinningRegion;
    BOOL  _isInteractivelyClosingTabs;
    BOOL  _isScrollingToRevealAddedTab;
    BOOL  _isStackingButtons;
    unsigned long long  _lastHoveredIndexWhileWaitingForReorderingToKickIn;
    NSView * _lastKeyView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _layoutBounds;
    NSView * _maskingContainerView;
    BOOL  _mouseDownCanMoveWindow;
    struct CGPoint { 
        double x; 
        double y; 
    }  _mouseLocationForDraggedTab;
    struct CGPoint { 
        double x; 
        double y; 
    }  _mouseOffsetOnSelectedTab;
    unsigned int  _mustDragExtraDistanceToReorder;
    unsigned int  _needsWindowChangedKeyStateAfterMove;
    long long  _numberOfGroupUpdates;
    unsigned long long  _numberOfPinnedTabs;
    unsigned long long  _numberOfPinnedTabsForLayout;
    unsigned long long  _numberOfTabsForLayout;
    NSView * _pinnedTabsContainer;
    NSTabBarEmptyRegionPlaceholderButton * _placeholderTabForEmptyUnpinnedRegion;
    double  _remainingWidthInTabBarAfterDividingEvenlyAmongButtons;
    NSScrollView * _scrollView;
    double  _scrollViewContentWidth;
    NSView * _scrollViewDocumentView;
    BOOL  _selectedButtonIsDetached;
    double  _selectedButtonSlowingFactor;
    unsigned long long  _selectedTabButtonIndex;
    NSView * _selectedTabContainerView;
    BOOL  _selectionIsChanging;
    unsigned int  _shouldReduceTransparency;
    BOOL  _shouldShowAddButton;
    double  _slowingDistance;
    long long  _springLoadingTargetIndex;
    unsigned long long  _stackingRegions;
    NSMutableArray * _tabBarViewItems;
    NSMapTable * _tabBarViewItemsToTabButtons;
    NSTabButton * _tabButtonUnderMouse;
    NSMutableArray * _tabButtons;
    NSView * _tabContainer;
    double  _timeOfLastHoveredIndexChange;
    double  _titleScrollingFactor;
    CALayer * _topBorderLayer;
    NSTrackingArea * _trackingArea;
}

@property (nonatomic, readwrite) <NSTabBarSyncedButton> *buttonThatSyncsWithPlaceholderTabInEmptyUnpinnedRegion;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readwrite) <NSTabBarDelegate> *delegate;
@property (atomic, readonly, copy) NSString *description;
@property (getter=isEnabled, atomic, readwrite) BOOL enabled;
@property (nonatomic, readwrite) NSView *firstKeyView;
@property (atomic, readwrite) BOOL forcesActiveWindowState;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readwrite) NSView *lastKeyView;
@property (atomic, readwrite) BOOL mouseDownCanMoveWindow;
@property (atomic, readwrite) unsigned long long selectedTabButtonIndex;
@property (atomic, readwrite) BOOL shouldShowAddButton;
@property (atomic, readonly) Class superclass;
@property (atomic, readwrite, copy) NSArray *tabBarViewItems;
@property (atomic, readonly) NSArray *tabButtons;

+ (id)accessibilityLabelForNumberOfTabs:(unsigned long long)arg1 andNumberOfPinnedTabs:(unsigned long long)arg2;

- (void).cxx_destruct;
- (void)NSDetachedTabDraggingImageToWindowTransitionController:(id)arg1 didFinishTransitionAnimationForWindow:(id)arg2;
- (void)_accessibilityDisplayOptionsDidChange:(id)arg1;
- (void)_addBackdropDarkeningViewForModernToolbarAppearance;
- (void)_addBackdropViewForModernToolbarAppearance;
- (void)_addBottomBorderViewForModernToolbarAppearance;
- (void)_addNewTabButton;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_adjustedFrameForButtonAtIndex:(unsigned long long)arg1 isHidden:(BOOL*)arg2;
- (void)_animateTabBackgroundOnClickEventIfAppropriate:(id)arg1;
- (void)_autoSelectIndex:(long long)arg1;
- (void)_autoscrollButtonsForStackingRegion:(unsigned long long)arg1;
- (double)_buttonWidthForNumberOfButtons:(unsigned long long)arg1 inWidth:(double)arg2 remainderWidth:(double*)arg3;
- (unsigned long long)_calculateStackingRegions;
- (BOOL)_canDetachTab;
- (void)_cancelReorderingRestrictionsAfterPinning;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_centeringFrameForButtonAtIndex:(unsigned long long)arg1;
- (void)_clipViewBoundsChanged:(id)arg1;
- (void)_commonTabBarViewInit;
- (id)_contextMenuTargetForEvent:(id)arg1;
- (struct CGSize { double x1; double x2; })_currentEventOffsetFromEvent:(id)arg1;
- (id)_destinationWindowForDropOnScreenOperation;
- (void)_detachTabAndPositionUnderCursor:(id)arg1;
- (unsigned long long)_doSpringLoadingSetupForDraggingInfo:(id)arg1;
- (unsigned long long)_dragOperationForDraggingInfo:(id)arg1;
- (BOOL)_dragShouldBeginFromMouseDown:(id)arg1 withExpiration:(id)arg2 xHysteresis:(float)arg3 yHysteresis:(float)arg4;
- (double)_effectiveLeftStackWidthForButtonAtIndex:(unsigned long long)arg1;
- (double)_effectiveRightStackWidthForButtonAtIndex:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForButtonAtIndex:(unsigned long long)arg1 firstButtonOffset:(double)arg2 buttonWidth:(double)arg3 supplementalWidth:(double)arg4;
- (unsigned long long)_frontmostButtonIndex;
- (double)_horizontalOffsetForButtonAtIndex:(unsigned long long)arg1 frontmostButtonIndex:(unsigned long long)arg2 slowingFactor:(double)arg3;
- (BOOL)_insertMissingButtonsFromTabView;
- (void)_insertTabButtonWithTabViewItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_installPlaceholderTabForEmptyUnpinnedRegion;
- (BOOL)_isDark;
- (BOOL)_isInFullscreenToolbarWindow;
- (void)_layOutButtonsAnimated:(BOOL)arg1;
- (void)_layOutDraggedButtonAnimated:(BOOL)arg1;
- (struct NSEdgeInsets { double x1; double x2; double x3; double x4; })_layoutBoundsEdgeInsetsForUnstackedButtons;
- (double)_layoutBoundsWidth;
- (void)_layoutSublayersOfLayer:(id)arg1;
- (id)_miniWindowDragImageForTabButton:(id)arg1;
- (double)_miniWindowDragImageWidth;
- (struct CGPoint { double x1; double x2; })_mouseLocationInDragImageForTabButton:(id)arg1;
- (void)_moveButton:(id)arg1 forTabBarViewItem:(id)arg2 toIndex:(unsigned long long)arg3;
- (void)_moveButtonToExpectedContainerView:(id)arg1;
- (void)_newTabWithinWindow:(id)arg1;
- (unsigned long long)_numberOfPinnedTabsForLayout;
- (unsigned long long)_numberOfTabsForLayout;
- (double)_offsetFromLeftEdge;
- (id)_pinnedTabDragImageForTabButton:(id)arg1;
- (double)_pinnedTabsWidth;
- (double)_pinningRegionWidth;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_placeholderTabForEmptyUnpinnedRegionButtonFrame;
- (void)_reallyUpdateButtonsAndLayOutAnimated:(BOOL)arg1 isSelectingButton:(BOOL)arg2;
- (void)_recalculateLayout;
- (void)_recalculateLayoutAndUpdateContainerViewFrames;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rectWithUnstackedButtons;
- (void)_removeTabButton:(id)arg1;
- (void)_restackButtonViews;
- (void)_scrollAfterClickingOnStackingRegion:(unsigned long long)arg1;
- (struct CGPoint { double x1; double x2; })_scrollTargetPointForStackingRegion:(unsigned long long)arg1;
- (void)_scrollToButtonAtIndex:(unsigned long long)arg1 canScrollSelectedButton:(BOOL)arg2;
- (void)_setIndexOfTabUnderMouse:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)_setIsSpringLoadingFlashing:(BOOL)arg1 index:(long long)arg2;
- (void)_setSpringLoadingTargetIndex:(long long)arg1 draggingInfo:(id)arg2;
- (void)_setTabButtonUnderMouse:(id)arg1 shouldAnimateHighlight:(BOOL)arg2;
- (void)_setUpViewAnimationForLayout;
- (void)_setUsesModernToolbarAppearance;
- (BOOL)_shouldAlignTabButtonTitleWithWindowCenter;
- (BOOL)_shouldCreatePlaceholderTabForEmptyUnpinnedRegion;
- (BOOL)_shouldDetachTabForMouseEvent:(id)arg1;
- (BOOL)_shouldDoLayerPerformanceUpdates;
- (BOOL)_shouldHighlightButtonOnHover;
- (BOOL)_shouldLayOutButtonsNow;
- (BOOL)_shouldLayOutButtonsToAlignWithWindowCenter;
- (BOOL)_shouldShowCloseButtonForTabBarViewItem:(id)arg1;
- (void)_startReorderingRestrictionsAfterPinning;
- (void)_syncedScrollBoundsToOrigin:(struct CGPoint { double x1; double x2; })arg1 animated:(BOOL)arg2;
- (id)_tabDragImageForTabButton:(id)arg1;
- (long long)_tabDragResultForEventTrackingWithStartEvent:(id)arg1;
- (long long)_tabDragResultForInitialDragWithStartEvent:(id)arg1;
- (unsigned long long)_tabIndexAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (unsigned long long)_tabIndexAtPoint:(struct CGPoint { double x1; double x2; })arg1 withButtonWidth:(double)arg2 supplementalWidth:(double)arg3;
- (unsigned long long)_tabIndexAtPointWhenLayingOutButtonsToAlignWithWindowCenter:(struct CGPoint { double x1; double x2; })arg1;
- (double)_titleCenterOffsetForButton:(id)arg1;
- (double)_titleCenterOffsetForButtonAtIndex:(unsigned long long)arg1 frontmostButtonIndex:(unsigned long long)arg2;
- (void)_toggleBackdropLayerVisibilityIfNecessary;
- (void)_toggleTransparencyIfNecessary;
- (void)_trackMouseEventsForEvent:(id)arg1 inStackingRegion:(unsigned long long)arg2;
- (void)_trackMouseEventsForEvent:(id)arg1 onTabAtIndex:(unsigned long long)arg2;
- (id)_trackMouseEventsUntilMouseUp:(id)arg1 withBlock:(id)arg2;
- (void)_trackReorderingEventsWithStartEvent:(id)arg1 forTabButton:(id)arg2;
- (void)_udpateAddButton;
- (void)_uninstallPlaceholderTabForEmptyUnpinnedRegion;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_unstackedFrameForButtonAtIndex:(unsigned long long)arg1;
- (void)_updateBackdropViewConstraints;
- (void)_updateButtonStateAndKeyLoop;
- (void)_updateButtonWidthAndRemainingWidthInTabBarToDivideAmongButtons;
- (void)_updateButtonsAndLayOutAnimated:(BOOL)arg1;
- (void)_updateButtonsAndLayOutAnimated:(BOOL)arg1 isSelectingButton:(BOOL)arg2;
- (void)_updateDropIndexWithDraggingLocation:(struct CGPoint { double x1; double x2; })arg1;
- (unsigned long long)_updateDropIndexWithTabDraggingInfo:(id)arg1;
- (void)_updateIndexOfTabUnderCurrentMouseLocation:(BOOL)arg1;
- (void)_updateNewTabButton;
- (void)_updatePinnedTabs;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_viewFrameForAdjustedButtonFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned long long)_visibleTabIndexAtPoint:(struct CGPoint { double x1; double x2; })arg1 stackingRegion:(unsigned long long*)arg2;
- (unsigned long long)_visibleTabIndexAtPoint:(struct CGPoint { double x1; double x2; })arg1 stackingRegion:(unsigned long long*)arg2 ignorePointsOutsideOfLayoutBounds:(BOOL)arg3;
- (double)_windowCenterX;
- (void)_windowChangedKeyState;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityHitTest:(struct CGPoint { double x1; double x2; })arg1;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityLabel;
- (void)addTabBarViewItem:(id)arg1;
- (BOOL)allowsVibrancy;
- (void)beginGroupUpdates;
- (void)button:(id)arg1 didSetHighlightStateToPressed:(BOOL)arg2 hovered:(BOOL)arg3;
- (id)buttonThatSyncsWithPlaceholderTabInEmptyUnpinnedRegion;
- (void)closeTabButton:(id)arg1;
- (double)currentButtonWidth;
- (void)dealloc;
- (id)delegate;
- (id)destinationWindowForNSDetachedTabDraggingImageToWindowTransitionController:(id)arg1;
- (id)dragDestinationWindowForMorphingDragImage:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (void)endGroupUpdatesAnimated:(BOOL)arg1;
- (id)firstKeyView;
- (BOOL)forcesActiveWindowState;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)insertTabBarViewItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)isAccessibilityElement;
- (BOOL)isEnabled;
- (BOOL)isOpaque;
- (id)lastKeyView;
- (void)layout;
- (id)menuForEvent:(id)arg1;
- (void)morphingDragImage:(id)arg1 wasDroppedAtPointOnScreen:(struct CGPoint { double x1; double x2; })arg2;
- (void)mouseDown:(id)arg1;
- (BOOL)mouseDownCanMoveWindow;
- (void)mouseEntered:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)moveTabBarViewItem:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)otherMouseUp:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)performTabDragOperation:(id)arg1;
- (void)removeTabBarViewItem:(id)arg1;
- (void)removeTabBarViewItemAtIndex:(unsigned long long)arg1;
- (void)scrollWheel:(id)arg1;
- (void)selectTabBarViewItem:(id)arg1;
- (void)selectTabButton:(id)arg1;
- (unsigned long long)selectedTabButtonIndex;
- (void)setButtonThatSyncsWithPlaceholderTabInEmptyUnpinnedRegion:(id)arg1;
- (void)setDefaultKeyLoop;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setFirstKeyView:(id)arg1;
- (void)setForcesActiveWindowState:(BOOL)arg1;
- (void)setLastKeyView:(id)arg1;
- (void)setMouseDownCanMoveWindow:(BOOL)arg1;
- (void)setNeedsLayout:(BOOL)arg1;
- (void)setNextKeyView:(id)arg1;
- (void)setSelectedTabButtonIndex:(unsigned long long)arg1;
- (void)setShouldShowAddButton:(BOOL)arg1;
- (void)setTabBarViewItems:(id)arg1;
- (BOOL)shouldShowAddButton;
- (void)springLoadingActivated:(BOOL)arg1 draggingInfo:(id)arg2;
- (unsigned long long)springLoadingEntered:(id)arg1;
- (void)springLoadingExited:(id)arg1;
- (void)springLoadingHighlightChanged:(id)arg1;
- (unsigned long long)springLoadingUpdated:(id)arg1;
- (id)tabBarViewItems;
- (id)tabButton:(id)arg1 menuForEvent:(id)arg2;
- (void)tabButtonDidBecomeFirstResponder:(id)arg1;
- (id)tabButtons;
- (unsigned long long)tabDraggingEntered:(id)arg1;
- (void)tabDraggingExited:(id)arg1;
- (unsigned long long)tabDraggingUpdated:(id)arg1;
- (void)updateCloseButtonVisibilityForTabBarViewItem:(id)arg1;
- (void)updateLayer;
- (void)updateTrackingAreas;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (BOOL)wantsPeriodicDraggingUpdates;
- (BOOL)wantsPeriodicTabDraggingUpdates;
- (BOOL)wantsUpdateLayer;
- (BOOL)willPinTabForTabDragOperation:(id)arg1;

@end
