/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSScrubberPressAndHoldTransposer : NSTouchBarStandardPopoverTransposer {
    NSScrubber * _targetScrubber;
    unsigned int  _trackingLatched;
}

- (void)_sendTransposedEvent:(id)arg1 toGestureRecognizers:(id)arg2;
- (id)initWithSourceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 destinationContentView:(id)arg2 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)transposeTouch:(id)arg1;

@end
