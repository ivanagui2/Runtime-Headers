/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSStepperCell : NSActionCell {
    double  _increment;
    double  _maxValue;
    double  _minValue;
    unsigned int  _reserved1;
    unsigned int  _reserved2;
    unsigned int  _reserved3;
    unsigned int  _reserved4;
    struct { 
        unsigned int valueWraps : 1; 
        unsigned int autorepeat : 1; 
        unsigned int drawing : 1; 
        unsigned int stats1 : 1; 
        unsigned int reserved : 28; 
    }  _stFlags;
    double  _value;
}

@property (atomic, readwrite) BOOL autorepeat;
@property (atomic, readwrite) double increment;
@property (atomic, readwrite) double maxValue;
@property (atomic, readwrite) double minValue;
@property (atomic, readwrite) BOOL valueWraps;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

+ (void)initialize;
+ (BOOL)prefersTrackingUntilMouseUp;

- (BOOL)_allowsVibrancyForControlView:(id)arg1;
- (BOOL)_autorepeat;
- (struct __CFDictionary { }*)_coreUIDrawOptionsWithView:(id)arg1;
- (double)_increment;
- (double)_maxValue;
- (double)_minValue;
- (id)_pressureConfigurationIfNeeded;
- (BOOL)_sendActionFrom:(id)arg1;
- (void)_setAutorepeat:(BOOL)arg1;
- (void)_setIncrement:(double)arg1;
- (void)_setMaxValue:(double)arg1;
- (void)_setMinValue:(double)arg1;
- (void)_setValueWraps:(BOOL)arg1;
- (struct CGSize { double x1; double x2; })_stepperImageSizeForControlSize:(unsigned long long)arg1;
- (void)_updateMouseTracking;
- (BOOL)_valueWraps;
- (id)_vibrancyFilterForControlView:(id)arg1;

// NSStepperCell (NSStepperCellAccessibility)

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_accessibilityArrowScreenRect:(BOOL)arg1;

// NSStepperCell (NSStepperCellLocal)

- (void)_stepInUpDirection:(BOOL)arg1;

// NSStepperCell (NSStepperCellPrivate)

- (void)_doSingleStep:(BOOL)arg1 inView:(id)arg2;

// NSStepperCell (_NSTableViewPrivate)

- (BOOL)_shouldHighlightCellWhenSelected;

// Image: /Applications/Xcode.app/Contents/Developer/usr/lib/libMainThreadChecker.dylib

- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityChildrenAttribute;
- (id)accessibilityChildrenInNavigationOrderAttribute;
- (id)accessibilityDecrementButtonAttribute;
- (id)accessibilityHelpStringForChild:(id)arg1;
- (id)accessibilityHitTest:(struct CGPoint { double x1; double x2; })arg1;
- (id)accessibilityIncrementButtonAttribute;
- (BOOL)accessibilityIsChildFocusable:(id)arg1;
- (BOOL)accessibilityIsChildrenAttributeSettable;
- (BOOL)accessibilityIsDecrementButtonAttributeSettable;
- (BOOL)accessibilityIsIncrementButtonAttributeSettable;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityPositionOfChild:(id)arg1;
- (id)accessibilityRoleAttribute;
- (id)accessibilitySizeOfChild:(id)arg1;
- (BOOL)autorepeat;
- (struct CGSize { double x1; double x2; })cellSizeForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)continueTracking:(struct CGPoint { double x1; double x2; })arg1 at:(struct CGPoint { double x1; double x2; })arg2 inView:(id)arg3;
- (BOOL)continueTrackingGesture:(id)arg1 inView:(id)arg2;
- (void)continueTrackingPeriodicEvent:(id)arg1 inView:(id)arg2;
- (double)doubleValue;
- (void)drawInteriorWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (float)floatValue;
- (void)getPeriodicDelay:(float*)arg1 interval:(float*)arg2;
- (unsigned long long)hitTestForEvent:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 ofView:(id)arg3;
- (double)increment;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (int)intValue;
- (long long)integerValue;
- (double)maxValue;
- (double)minValue;
- (id)objectValue;
- (void)setAutorepeat:(BOOL)arg1;
- (void)setControlView:(id)arg1;
- (void)setDoubleValue:(double)arg1;
- (void)setFloatValue:(float)arg1;
- (void)setIncrement:(double)arg1;
- (void)setIntValue:(int)arg1;
- (void)setIntegerValue:(long long)arg1;
- (void)setMaxValue:(double)arg1;
- (void)setMinValue:(double)arg1;
- (void)setObjectValue:(id)arg1;
- (void)setStringValue:(id)arg1;
- (void)setValueWraps:(BOOL)arg1;
- (BOOL)startTrackingAt:(struct CGPoint { double x1; double x2; })arg1 inView:(id)arg2;
- (void)stopTracking:(struct CGPoint { double x1; double x2; })arg1 at:(struct CGPoint { double x1; double x2; })arg2 inView:(id)arg3 mouseIsUp:(BOOL)arg4;
- (id)stringValue;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (BOOL)valueWraps;

@end