/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
 */

@interface MKUserLocationView : MKAnnotationView <VKPuckAnimatorTarget> {
    CALayer * _accuracyContainerLayer;
    CALayer * _accuracyLayer;
    BOOL  _allowsAccuracyRing;
    BOOL  _allowsHeadingIndicator;
    BOOL  _allowsPulse;
    BOOL  _effectsEnabled;
    double  _heading;
    double  _headingAccuracy;
    CLLocation * _lastLocation;
    double  _locationAccuracy;
    double  _maxRadiusToShowAccuracyRing;
    VKNavigationPuck * _navigationPuckMarker;
    double  _presentationCourse;
    CALayer * _puckLayer;
    CALayer * _pulseLayer;
    BOOL  _shouldDisplayHeading;
    BOOL  _shouldDisplayInaccurateHeading;
    BOOL  _shouldPulse;
    BOOL  _stale;
    long long  _zoomDirection;
}

@property (nonatomic, readwrite) double accuracyRingAlpha;
@property (nonatomic, readwrite) BOOL allowsAccuracyRing;
@property (nonatomic, readwrite) BOOL allowsHeadingIndicator;
@property (nonatomic, readwrite) BOOL allowsPulse;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (getter=isEffectsEnabled, nonatomic, readwrite) BOOL effectsEnabled;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readwrite) double heading;
@property (nonatomic, readwrite) double headingAccuracy;
@property (nonatomic, readonly) CLLocation *lastLocation;
@property (nonatomic, readonly) double locationAccuracy;
@property (nonatomic, readwrite) double maxRadiusToShowAccuracyRing;
@property (nonatomic, readwrite) float opacity;
@property (nonatomic, readwrite) double presentationCourse;
@property (nonatomic, readwrite) double puckAlpha;
@property (nonatomic, readwrite) BOOL shouldDisplayHeading;
@property (nonatomic, readwrite) BOOL shouldDisplayInaccurateHeading;
@property (getter=isStale, setter=setStale:, nonatomic, readwrite) BOOL stale;
@property (atomic, readonly) Class superclass;
@property (nonatomic, readwrite) long long zoomDirection;

+ (unsigned long long)_selectedZIndex;
+ (unsigned long long)_zIndex;
+ (double)accuracyDiameter:(double)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void).cxx_destruct;
- (id)_accuracyAnimation:(double)arg1;
- (id)_animationToSynchronizePulse:(id*)arg1;
- (id)_baseLayer;
- (id)_headingImageForAccuracy:(double)arg1 anchorPoint:(struct CGPoint { double x1; double x2; }*)arg2;
- (BOOL)_hideLargeAccuracyRing;
- (BOOL)_isLocationStale:(id)arg1;
- (id)_layerToMatchAccuracyRing;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_mapkit_visibleRect;
- (void)_pausePulse;
- (id)_pulseAnimation;
- (id)_pulseLayer;
- (void)_removePulse;
- (void)_resetLayerToMatchAccuracyRing;
- (void)_resumePulse;
- (void)_setAnimatingToCoordinate:(BOOL)arg1;
- (void)_setMapPitchRadians:(double)arg1;
- (void)_setPresentationCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (void)_setTracking:(BOOL)arg1;
- (void)_setVKNavigationPuckMarker:(id)arg1;
- (BOOL)_shouldPulseForLocation:(id)arg1;
- (BOOL)_shouldShowAccuracyRing;
- (BOOL)_tracking;
- (void)_updateFromMap;
- (void)_updateHideLargeAccuracyRing;
- (void)_updateLayers;
- (void)_updatePulse;
- (void)_updateShowHeadingLayer;
- (id)_vkNavigationPuckMarker;
- (double)accuracyRingAlpha;
- (BOOL)allowsAccuracyRing;
- (BOOL)allowsHeadingIndicator;
- (BOOL)allowsPulse;
- (double)heading;
- (double)headingAccuracy;
- (id)init;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (BOOL)isEffectsEnabled;
- (BOOL)isStale;
- (id)lastLocation;
- (double)locationAccuracy;
- (void)locationManagerFailedToUpdateLocation;
- (double)maxRadiusToShowAccuracyRing;
- (float)opacity;
- (double)presentationCourse;
- (double)puckAlpha;
- (void)setAccuracyRingAlpha:(double)arg1;
- (void)setAllowsAccuracyRing:(BOOL)arg1;
- (void)setAllowsHeadingIndicator:(BOOL)arg1;
- (void)setAllowsPulse:(BOOL)arg1;
- (void)setAnimatingToCoordinate:(BOOL)arg1;
- (void)setEffectsEnabled:(BOOL)arg1;
- (void)setFrameSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setHeading:(double)arg1;
- (void)setHeadingAccuracy:(double)arg1;
- (void)setLocationAccuracy:(double)arg1 duration:(double)arg2;
- (void)setMaxRadiusToShowAccuracyRing:(double)arg1;
- (void)setOpacity:(float)arg1;
- (void)setPresentationCoordinate:(struct { double x1; double x2; })arg1;
- (void)setPresentationCourse:(double)arg1;
- (void)setPuckAlpha:(double)arg1;
- (void)setPuckScale:(double)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setShouldDisplayHeading:(BOOL)arg1;
- (void)setShouldDisplayInaccurateHeading:(BOOL)arg1;
- (void)setStale:(BOOL)arg1;
- (void)setZoomDirection:(long long)arg1;
- (void)setZoomDirection:(long long)arg1 deltaScale:(double)arg2;
- (BOOL)shouldDisplayHeading;
- (BOOL)shouldDisplayInaccurateHeading;
- (void)updateStateFromLocation:(id)arg1 duration:(double)arg2;
- (void)viewDidMoveToWindow;
- (long long)zoomDirection;

@end