/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSSplitViewItem : NSObject <NSAnimatablePropertyContainer, NSAppearanceCustomization, NSCoding> {
    struct { 
        unsigned int _collapsed : 1; 
        unsigned int _canCollapse : 1; 
        unsigned int _isOverlaid : 1; 
        unsigned int _revealsOnEdgeHoverInFullscreen : 1; 
        unsigned int _springLoaded : 1; 
        unsigned int _forceWithinWindowBlending : 1; 
        unsigned int _reserved : 26; 
    }  _flags;
    id  _splitViewItemPrivateData;
}

@property (atomic, readwrite, copy) NSDictionary *animations;
@property (atomic, readwrite, retain) NSAppearance *appearance;
@property (atomic, readwrite) double automaticMaximumThickness;
@property (atomic, readonly) long long behavior;
@property (atomic, readwrite) BOOL canCollapse;
@property (atomic, readwrite) long long collapseBehavior;
@property (getter=isCollapsed, atomic, readwrite) BOOL collapsed;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) NSAppearance *effectiveAppearance;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite) float holdingPriority;
@property (atomic, readwrite) double maximumThickness;
@property (atomic, readwrite) double minimumThickness;
@property (atomic, readwrite) double preferredThicknessFraction;
@property (getter=isSpringLoaded, atomic, readwrite) BOOL springLoaded;
@property (atomic, readonly) Class superclass;
@property (atomic, readwrite, retain) NSViewController *viewController;

+ (BOOL)automaticallyNotifiesObserversOfCollapsed;
+ (id)contentListWithViewController:(id)arg1;
+ (id)defaultAnimationForKey:(id)arg1;
+ (id)keyPathsForValuesAffectingEffectiveCollapseBehavior;
+ (id)keyPathsForValuesAffectingSidebar;
+ (id)sidebarWithViewController:(id)arg1;
+ (id)splitViewItemWithViewController:(id)arg1;

- (Class)_animatorClass;
- (BOOL)_canCollapseFromWindowResize;
- (BOOL)_canLiveCollapse;
- (void)_didChangeCollapsed;
- (float)_effectiveHoldingPriority;
- (BOOL)_forceWithinWindowBlending;
- (BOOL)_hasBaseVibrancyEffect;
- (void)_markAnimationEnd;
- (void)_markAnimationStart;
- (id)_overrideHoldingPriority;
- (void)_setCanCollapseFromWindowResize:(BOOL)arg1;
- (void)_setCollapsed:(BOOL)arg1;
- (void)_setForceWithinWindowBlending:(BOOL)arg1;
- (void)_setHasBaseVibrancyEffect:(BOOL)arg1;
- (void)_setOverrideHoldingPriority:(id)arg1;
- (id)_splitViewController;
- (void)_uncollapsePreferringOverlay;
- (BOOL)_wantsMaterialBackground;
- (void)_willChangeCollapsed;
- (id)animationForKey:(id)arg1;
- (id)animations;
- (id)animator;
- (BOOL)autoHidesWhenFullscreen;
- (double)automaticMaximumSize;
- (double)automaticMaximumThickness;
- (long long)behavior;
- (BOOL)canCollapse;
- (BOOL)canOverlay;
- (long long)collapseBehavior;
- (void)dealloc;
- (long long)effectiveCollapseBehavior;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasUserSetSize;
- (float)holdingPriority;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isAnimating;
- (BOOL)isCollapsed;
- (BOOL)isOverlaid;
- (BOOL)isSidebar;
- (BOOL)isSpringLoaded;
- (double)maximumSize;
- (double)maximumThickness;
- (double)minimumSize;
- (double)minimumThickness;
- (double)preferredSizeRatio;
- (double)preferredThicknessFraction;
- (BOOL)prefersImplicitAnimations;
- (BOOL)prefersPreservingSiblingSizesOnCollapse;
- (BOOL)revealsOnEdgeHoverInFullscreen;
- (void)setAnimations:(id)arg1;
- (void)setAutoHidesWhenFullscreen:(BOOL)arg1;
- (void)setAutomaticMaximumSize:(double)arg1;
- (void)setAutomaticMaximumThickness:(double)arg1;
- (void)setBehavior:(long long)arg1;
- (void)setCanCollapse:(BOOL)arg1;
- (void)setCollapseBehavior:(long long)arg1;
- (void)setCollapsed:(BOOL)arg1;
- (void)setHasUserSetSize:(BOOL)arg1;
- (void)setHoldingPriority:(float)arg1;
- (void)setMaximumSize:(double)arg1;
- (void)setMaximumThickness:(double)arg1;
- (void)setMinimumSize:(double)arg1;
- (void)setMinimumThickness:(double)arg1;
- (void)setOverlaid:(BOOL)arg1;
- (void)setPreferredSizeRatio:(double)arg1;
- (void)setPreferredThicknessFraction:(double)arg1;
- (void)setPrefersImplicitAnimations:(BOOL)arg1;
- (void)setPrefersPreservingSiblingSizesOnCollapse:(BOOL)arg1;
- (void)setRevealsOnEdgeHoverInFullscreen:(BOOL)arg1;
- (void)setSidebar:(BOOL)arg1;
- (void)setSpringLoaded:(BOOL)arg1;
- (void)setViewController:(id)arg1;
- (id)viewController;

// NSSplitViewItem (AppearanceCustomization)

- (id)appearance;
- (id)effectiveAppearance;
- (void)setAppearance:(id)arg1;

@end