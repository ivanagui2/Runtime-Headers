/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSTouchBarView : NSView <NSCoding> {
    double  _animationDuration;
    CAMediaTimingFunction * _animationTimingFunction;
    NSMutableArray * _centerViews;
    NSTouchBarItemContainerView * _changingContainerView;
    double  _defaultItemPadding;
    NSMutableArray * _detachedViews;
    NSMutableSet * _dirtyCompressionItems;
    unsigned int  _gainingOrLosingActiveState;
    unsigned int  _isInCustomizationPalette;
    NSTouchBarItemTree * _itemTree;
    NSMapTable * _itemsToAttributes;
    NSMapTable * _itemsToViews;
    unsigned int  _layingOut;
    NSTouchBarLayout * _layoutManager;
    NSMapTable * _newBarsToIdentifiers;
    NSMapTable * _oldBarsToIdentifiers;
    unsigned int  _runningTransitionAnimations;
    unsigned int  _shouldAnimateNextLayoutPass;
    unsigned int  _shouldLayout;
    unsigned int  _suppressesTransitionAnimations;
    unsigned int  _treeNeedsUpdate;
    NSArray * _views;
    NSSet * _visibleBars;
    NSLayoutXAxisAnchor * _visualCenterAnchor;
}

@property (atomic, readwrite) BOOL allowsTransitionAnimations;
@property (atomic, readwrite) double animationDuration;
@property (atomic, readwrite, retain) CAMediaTimingFunction *animationTimingFunction;
@property (atomic, readwrite) double defaultItemPadding;
@property (atomic, readwrite) BOOL isInCustomizationPalette;
@property (atomic, readwrite, copy) NSTouchBarItemTree *itemTree;
@property (getter=isLayingOut, atomic, readonly) BOOL layingOut;
@property (atomic, readwrite) BOOL shouldAnimateNextLayoutPass;
@property (atomic, readwrite, retain) NSArray *touchBars;
@property (atomic, readonly) NSLayoutXAxisAnchor *visualCenterXAnchor;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

- (void)_appStateWillChange;
- (void)_attachContainerView:(id)arg1;
- (BOOL)_barsAllowTransitionAnimation;
- (void)_commonInit;
- (void)_detachViews:(id)arg1;
- (void)_itemPositionChangingForContainerView:(id)arg1;
- (void)_layout;
- (void)_noteTreeNeedsUpdate;
- (void)_notifyCompressionGroupsFrameChangesEnded;
- (void)_reattachViews:(id)arg1;
- (void)_refreshSubviews;
- (void)_removeContainerView:(id)arg1;
- (BOOL)_shouldDoLayerPerformanceUpdates;
- (void)_updateTree;
- (void)dealloc;

// Image: /Applications/Xcode.app/Contents/Developer/usr/lib/libMainThreadChecker.dylib

- (id)adjustFromFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 afterDelay:(double)arg3 withDuration:(double)arg4;
- (id)adjustFromSize:(struct CGSize { double x1; double x2; })arg1 toSize:(struct CGSize { double x1; double x2; })arg2 afterDelay:(double)arg3 withDuration:(double)arg4;
- (BOOL)allowsTransitionAnimations;
- (double)animationDuration;
- (id)animationTimingFunction;
- (double)defaultItemPadding;
- (id)fadeFromAlpha:(double)arg1 toAlpha:(double)arg2 afterDelay:(double)arg3 withDuration:(double)arg4;
- (id)functionBars;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)isInCustomizationPalette;
- (BOOL)isLayingOut;
- (id)itemTree;
- (void)layout;
- (id)moveFromOrigin:(struct CGPoint { double x1; double x2; })arg1 ToOrigin:(struct CGPoint { double x1; double x2; })arg2 afterDelay:(double)arg3 withDuration:(double)arg4;
- (id)newContainerViewForItem:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForItem:(id)arg1;
- (void)setAllowsTransitionAnimations:(BOOL)arg1;
- (void)setAnimationDuration:(double)arg1;
- (void)setAnimationTimingFunction:(id)arg1;
- (void)setDefaultItemPadding:(double)arg1;
- (void)setFunctionBars:(id)arg1;
- (void)setIsInCustomizationPalette:(BOOL)arg1;
- (void)setItemTree:(id)arg1;
- (void)setShouldAnimateNextLayoutPass:(BOOL)arg1;
- (void)setTouchBars:(id)arg1;
- (BOOL)shouldAnimateNextLayoutPass;
- (id)touchBars;
- (id)visualCenterXAnchor;
- (void)withAnimationsSuppressed:(id)arg1;

@end
