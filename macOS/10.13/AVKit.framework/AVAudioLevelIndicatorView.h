/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
 */

@interface AVAudioLevelIndicatorView : NSView {
    double  _doubleValue;
}

@property (nonatomic, readwrite) double doubleValue;

- (BOOL)allowsVibrancy;
- (double)doubleValue;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)setDoubleValue:(double)arg1;

@end