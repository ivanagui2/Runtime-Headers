/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSSlider : NSControl <DebugHierarchyObject, NSAccessibilitySlider, NSSliderAccessoryContainer, NSSliderCellControlView> {
    NSDictionary * _tickMarkLayoutPoints;
}

@property (atomic, readonly) BOOL _hasStepBehaviorContext;
@property (atomic, readwrite) double altIncrementValue;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite) double incrementValue;
@property (atomic, readonly) double knobThickness;
@property (atomic, readwrite) double maxValue;
@property (atomic, readwrite) double maximumValue;
@property (atomic, readonly) NSSliderAccessory *maximumValueAccessory;
@property (atomic, readwrite) double minValue;
@property (atomic, readwrite) double minimumValue;
@property (atomic, readonly) NSSliderAccessory *minimumValueAccessory;
@property (atomic, readwrite) unsigned long long sliderType;
@property (atomic, readonly) Class superclass;
@property (atomic, readwrite, copy) NSColor *trackFillColor;
@property (atomic, readwrite) double value;
@property (getter=isVertical, atomic, readwrite) BOOL vertical;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

+ (void)initialize;

- (BOOL)_autoCancelIfTouchTooLong:(id*)arg1;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (BOOL)_hasCustomTickMarkPositioning;
- (void)_moveInDirection:(unsigned long long)arg1;
- (void)_setTickMarkLayoutPoints:(id)arg1;
- (id)_tickMarkLayoutPoints;
- (void)_updateTickMarkConstraintPositionsIfNeeded;
- (void)dealloc;

// NSSlider (NSSliderAccessoryContainer)

+ (id)keyPathsForValuesAffecting_hasStepBehaviorContext;

- (BOOL)_hasStepBehaviorContext;

// NSSlider (NSSliderConvenience)

+ (id)_sliderWithMinValue:(double)arg1 maxValue:(double)arg2 initialValue:(double)arg3 target:(id)arg4 action:(SEL)arg5;
+ (id)horizontalSliderWithMinValue:(double)arg1 maxValue:(double)arg2 initialValue:(double)arg3 target:(id)arg4 action:(SEL)arg5;
+ (id)horizontalSliderWithTarget:(id)arg1 action:(SEL)arg2;
+ (id)horizontalSliderWithValue:(double)arg1 minValue:(double)arg2 maxValue:(double)arg3 target:(id)arg4 action:(SEL)arg5;
+ (id)sliderWithTarget:(id)arg1 action:(SEL)arg2;
+ (id)sliderWithValue:(double)arg1 minValue:(double)arg2 maxValue:(double)arg3 target:(id)arg4 action:(SEL)arg5;
+ (id)verticalSliderWithMinValue:(double)arg1 maxValue:(double)arg2 initialValue:(double)arg3 target:(id)arg4 action:(SEL)arg5;
+ (id)verticalSliderWithTarget:(id)arg1 action:(SEL)arg2;
+ (id)verticalSliderWithValue:(double)arg1 minValue:(double)arg2 maxValue:(double)arg3 target:(id)arg4 action:(SEL)arg5;

// NSSlider (NSTickMarkLayoutPoints)

- (void)_removeAnchorsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

// NSSlider (NSTouchBarIncrements)

- (void)_incrementValue:(BOOL)arg1;

// Image: /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/Library/Debugger/libViewDebuggerSupport.dylib

// NSSlider (DebugHierarchyAdditions)

- (id)debugHierarchyPropertyDescriptions;

// Image: /Applications/Xcode.app/Contents/Developer/usr/lib/libMainThreadChecker.dylib

- (BOOL)acceptsFirstMouse:(id)arg1;
- (id)accessibilityLabel;
- (BOOL)accessibilityPerformDecrement;
- (BOOL)accessibilityPerformIncrement;
- (id)accessibilityValue;
- (struct NSEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (BOOL)allowsTickMarkValuesOnly;
- (double)altIncrementValue;
- (double)baselineOffsetFromBottom;
- (double)closestTickMarkValueToValue:(double)arg1;
- (id)declaredLayoutConstraints;
- (void)encodeWithCoder:(id)arg1;
- (id)image;
- (double)incrementValue;
- (long long)indexOfTickMarkAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (BOOL)isFlipped;
- (BOOL)isVertical;
- (double)knobThickness;
- (void)layout;
- (id)layoutPointForTickMarkAtIndex:(long long)arg1;
- (double)maxValue;
- (id)maxValueImage;
- (double)maximumValue;
- (id)maximumValueAccessory;
- (double)minValue;
- (id)minValueImage;
- (double)minimumValue;
- (id)minimumValueAccessory;
- (void)moveDown:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)moveRight:(id)arg1;
- (void)moveUp:(id)arg1;
- (id)ns_widgetType;
- (long long)numberOfTickMarks;
- (void)pageDown:(id)arg1;
- (void)pageUp:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectOfTickMarkAtIndex:(long long)arg1;
- (void)sendAction;
- (void)setAllowsTickMarkValuesOnly:(BOOL)arg1;
- (void)setAltIncrementValue:(double)arg1;
- (void)setCell:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setImage:(id)arg1;
- (void)setIncrementValue:(double)arg1;
- (void)setKnobThickness:(double)arg1;
- (void)setMaxValue:(double)arg1;
- (void)setMaxValueImage:(id)arg1;
- (void)setMaximumValue:(double)arg1;
- (void)setMaximumValueAccessory:(id)arg1;
- (void)setMinValue:(double)arg1;
- (void)setMinValueImage:(id)arg1;
- (void)setMinimumValue:(double)arg1;
- (void)setMinimumValueAccessory:(id)arg1;
- (void)setNumberOfTickMarks:(long long)arg1;
- (void)setSliderType:(unsigned long long)arg1;
- (void)setTickMarkIsProminent:(BOOL)arg1 atIndex:(long long)arg2;
- (void)setTickMarkPosition:(unsigned long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleCell:(id)arg1;
- (void)setTitleColor:(id)arg1;
- (void)setTitleFont:(id)arg1;
- (id)setTitleNoCopy:(id)arg1;
- (void)setTrackFillColor:(id)arg1;
- (void)setUserInterfaceLayoutDirection:(long long)arg1;
- (void)setValue:(double)arg1;
- (void)setVertical:(BOOL)arg1;
- (void)sizeToFit;
- (void)sliderCellDidChangeControlSize:(id)arg1;
- (void)sliderCellDidChangeNumberOfTickMarks:(id)arg1 oldNumberOfTickMarks:(long long)arg2;
- (void)sliderCellDidChangeSliderType:(id)arg1;
- (void)sliderCellDidChangeTickMarkPosition:(id)arg1;
- (void)sliderCellDidChangeVertical:(id)arg1;
- (unsigned long long)sliderType;
- (BOOL)tickMarkIsProminentAtIndex:(long long)arg1;
- (unsigned long long)tickMarkPosition;
- (double)tickMarkValueAtIndex:(long long)arg1;
- (id)title;
- (id)titleCell;
- (id)titleColor;
- (id)titleFont;
- (id)trackFillColor;
- (double)value;

@end