/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
 */

@interface _MKAnnotationDragGestureRecognizer : NSPressGestureRecognizer {
    struct CGPoint { 
        double x; 
        double y; 
    }  _dragLocation;
    BOOL  _hasCustomDragLocation;
}

- (double)allowableMovement;
- (struct CGPoint { double x1; double x2; })locationInView:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)reset;

@end
