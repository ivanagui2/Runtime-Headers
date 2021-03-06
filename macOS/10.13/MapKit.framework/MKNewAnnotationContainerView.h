/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
 */

@interface MKNewAnnotationContainerView : MKAnnotationContainerView {
    NSMutableDictionary * _clusterableAnnotationViews;
    NSMutableSet * _collidableAnnotationViews;
    NSMutableDictionary * _collidingAnnotationViews;
    NSMutableDictionary * _existingClusterAnnotationViews;
    BOOL  _isUpdating;
    double  _lastUpdate;
    BOOL  _suppress;
}

- (void).cxx_destruct;
- (id)_existingClusterViewsForClusterID:(id)arg1;
- (void)_performStateUpdatesIfNeeded;
- (void)_updateAddedAnnotationRotation:(id)arg1;
- (void)_updateAnnotationView:(id)arg1;
- (void)_updateAnnotationViewPositions;
- (void)_updateAnnotationViews:(id)arg1;
- (void)_updateClusterableAnnotationViews:(id)arg1 withID:(id)arg2;
- (void)_updateCollidableAnnotationViews;
- (void)addAnnotationView:(id)arg1 allowAnimation:(BOOL)arg2;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1;
- (id)menuForEvent:(id)arg1;
- (void)removeAnnotationView:(id)arg1;
- (void)setAnnotationViewsRotationRadians:(double)arg1 animation:(id)arg2;
- (void)setFrameSize:(struct CGSize { double x1; double x2; })arg1;
- (void)stopSuppressingUpdates;
- (void)suppressUpdates;
- (void)updateAnnotationViewsForReason:(long long)arg1;
- (void)updateAnnotationViewsWithDelay;

@end
