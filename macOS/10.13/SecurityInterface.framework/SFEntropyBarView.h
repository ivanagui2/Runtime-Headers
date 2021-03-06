/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SecurityInterface.framework/Versions/A/SecurityInterface
 */

@interface SFEntropyBarView : NSView {
    unsigned long long  _controlTint;
    NSImage * _gradient;
    BOOL  _isBezeled;
    double  _maximum;
    double  _minimum;
    double  _value;
}

- (unsigned long long)controlTint;
- (double)doubleValue;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)incrementBy:(double)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)isBezeled;
- (double)maxValue;
- (double)minValue;
- (void)setBezeled:(BOOL)arg1;
- (void)setControlTint:(unsigned long long)arg1;
- (void)setDoubleValue:(double)arg1;
- (void)setMaxValue:(double)arg1;
- (void)setMinValue:(double)arg1;

@end
