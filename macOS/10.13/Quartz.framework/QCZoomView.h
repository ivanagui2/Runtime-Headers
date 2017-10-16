/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCZoomView : NSView {
    struct CGPoint { 
        double x; 
        double y; 
    }  _cachedCenter;
    double  _cachedZoomFactorX;
    double  _cachedZoomFactorY;
    void * _unused;
    double  _zoomFactorX;
    double  _zoomFactorY;
}

- (BOOL)allowsNonSquareZooming;
- (BOOL)autoscroll:(id)arg1;
- (void)cacheZoomState;
- (double)incrementalZoomAmount;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })maxBounds;
- (double)maxX;
- (double)maxY;
- (double)minX;
- (double)minY;
- (double)resizeHotzoneWidth;
- (void)restoreZoomState;
- (void)scrollWheel:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })selectionBounds;
- (void)setZoomFactorX:(double)arg1;
- (void)setZoomFactorY:(double)arg1;
- (void)viewDidMoveToSuperview;
- (double)zoomFactorX;
- (double)zoomFactorY;
- (void)zoomInX;
- (void)zoomInY;
- (void)zoomOutX;
- (void)zoomOutY;
- (BOOL)zoomStateCached;
- (void)zoomToFitAll;
- (void)zoomToFitSelection;

// QCZoomView (Private)

- (void)__frameChanged:(id)arg1;
- (void)_adjustFrame;
- (struct CGPoint { double x1; double x2; })_centerPoint;
- (void)_setCenterPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setZoomFactorX:(double)arg1 factorY:(double)arg2 centerPoint:(struct CGPoint { double x1; double x2; })arg3;
- (void)_zoomToFitRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_zoomWithSpeedFactorForX:(double)arg1 speedFactorForY:(double)arg2;

@end