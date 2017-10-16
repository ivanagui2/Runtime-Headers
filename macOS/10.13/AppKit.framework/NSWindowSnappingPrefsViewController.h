/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSWindowSnappingPrefsViewController : NSViewController

@property (atomic, readwrite) BOOL allowWindowDocking;
@property (atomic, readwrite) BOOL enableSnapping;
@property (atomic, readwrite) BOOL flashSnappedToWindow;
@property (atomic, readwrite) double gapBetweenWindows;
@property (atomic, readwrite) BOOL instantUnsnap;
@property (atomic, readwrite) double magneticSnapDistance;
@property (atomic, readwrite) BOOL onlySmoothAnimateWhenNotInTheWindow;
@property (atomic, readwrite) BOOL onlySnapWhenApproaching;
@property (atomic, readwrite) double resnapDistance;
@property (atomic, readwrite) BOOL shouldLogSnapVelocity;
@property (atomic, readwrite) BOOL shouldLogSnapping;
@property (atomic, readwrite) BOOL shouldProvideHapticFeedback;
@property (atomic, readwrite) BOOL shouldProvideSoundFeedback;
@property (atomic, readwrite) BOOL shouldProvideVisualFeedback;
@property (atomic, readwrite) BOOL showSnapTargets;
@property (atomic, readwrite) BOOL smoothWindowMovement;
@property (atomic, readwrite) BOOL smoothWindowWithAnimation;
@property (atomic, readwrite) double snapDistance;
@property (atomic, readwrite) BOOL snapToObscuredWindowEdges;
@property (atomic, readwrite) double snapVelocity;
@property (atomic, readwrite) double unsnapDistance;
@property (atomic, readwrite) double unsnapDistanceMax;
@property (atomic, readwrite) double unsnapDistanceMaxAnglePoint;
@property (atomic, readwrite) double unsnapDistanceMin;
@property (atomic, readwrite) double unsnapVelocity;

- (void)_prefsChanged:(id)arg1;
- (void)_reloadProperties;
- (BOOL)allowWindowDocking;
- (BOOL)enableSnapping;
- (BOOL)flashSnappedToWindow;
- (double)gapBetweenWindows;
- (BOOL)instantUnsnap;
- (double)magneticSnapDistance;
- (BOOL)onlySmoothAnimateWhenNotInTheWindow;
- (BOOL)onlySnapWhenApproaching;
- (id)propertiesAsDictionary;
- (void)resetToDefaults:(id)arg1;
- (double)resnapDistance;
- (void)setAllowWindowDocking:(BOOL)arg1;
- (void)setEnableSnapping:(BOOL)arg1;
- (void)setFlashSnappedToWindow:(BOOL)arg1;
- (void)setGapBetweenWindows:(double)arg1;
- (void)setInstantUnsnap:(BOOL)arg1;
- (void)setMagneticSnapDistance:(double)arg1;
- (void)setOnlySmoothAnimateWhenNotInTheWindow:(BOOL)arg1;
- (void)setOnlySnapWhenApproaching:(BOOL)arg1;
- (void)setResnapDistance:(double)arg1;
- (void)setShouldLogSnapVelocity:(BOOL)arg1;
- (void)setShouldLogSnapping:(BOOL)arg1;
- (void)setShouldProvideHapticFeedback:(BOOL)arg1;
- (void)setShouldProvideSoundFeedback:(BOOL)arg1;
- (void)setShouldProvideVisualFeedback:(BOOL)arg1;
- (void)setShowSnapTargets:(BOOL)arg1;
- (void)setSmoothWindowMovement:(BOOL)arg1;
- (void)setSmoothWindowWithAnimation:(BOOL)arg1;
- (void)setSnapDistance:(double)arg1;
- (void)setSnapToObscuredWindowEdges:(BOOL)arg1;
- (void)setSnapVelocity:(double)arg1;
- (void)setUnsnapDistance:(double)arg1;
- (void)setUnsnapDistanceMax:(double)arg1;
- (void)setUnsnapDistanceMaxAnglePoint:(double)arg1;
- (void)setUnsnapDistanceMin:(double)arg1;
- (void)setUnsnapVelocity:(double)arg1;
- (BOOL)shouldLogSnapVelocity;
- (BOOL)shouldLogSnapping;
- (BOOL)shouldProvideHapticFeedback;
- (BOOL)shouldProvideSoundFeedback;
- (BOOL)shouldProvideVisualFeedback;
- (BOOL)showSnapTargets;
- (BOOL)smoothWindowMovement;
- (BOOL)smoothWindowWithAnimation;
- (double)snapDistance;
- (BOOL)snapToObscuredWindowEdges;
- (double)snapVelocity;
- (double)unsnapDistance;
- (double)unsnapDistanceMax;
- (double)unsnapDistanceMaxAnglePoint;
- (double)unsnapDistanceMin;
- (double)unsnapVelocity;
- (void)viewDidLoad;

@end