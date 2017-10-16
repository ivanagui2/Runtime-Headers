/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
 */

@interface QTHUDTimelineCell : QTHUDSliderCell {
    struct QTHUDTimelineCellInternal { id x1; } * _internal;
}

+ (void)initialize;

- (struct { long long x1; long long x2; long long x3; })QTTimeValue;
- (id)_QTHUDSliderHighlightedRanges;
- (double)_QTHUDSliderValidateUserValue:(double)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)exposedBindings;
- (id)highlightedTimeRanges;
- (id)init;
- (id)initImageCell:(id)arg1;
- (id)initTextCell:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)moveRight:(id)arg1;
- (void)moveUp:(id)arg1;
- (struct CGPoint { double x1; double x2; })pointAtTime:(struct { long long x1; long long x2; long long x3; })arg1 withFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inView:(id)arg3;
- (void)setDelegate:(id)arg1;
- (void)setHighlightedTimeRanges:(id)arg1;
- (void)setObjectValue:(id)arg1;
- (void)setQTTimeValue:(struct { long long x1; long long x2; long long x3; })arg1;
- (void)setTimeRange:(struct { struct { long long x_1_1_1; long long x_1_1_2; long long x_1_1_3; } x1; struct { long long x_2_1_1; long long x_2_1_2; long long x_2_1_3; } x2; })arg1;
- (void)takeQTTimeValueFrom:(id)arg1;
- (struct { long long x1; long long x2; long long x3; })timeAtPoint:(struct CGPoint { double x1; double x2; })arg1 withFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inView:(id)arg3;
- (struct { struct { long long x_1_1_1; long long x_1_1_2; long long x_1_1_3; } x1; struct { long long x_2_1_1; long long x_2_1_2; long long x_2_1_3; } x2; })timeRange;

@end