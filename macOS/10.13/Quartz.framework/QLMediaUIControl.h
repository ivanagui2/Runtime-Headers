/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
 */

@interface QLMediaUIControl : NSView {
    SEL  _action;
    unsigned int  _enabled;
    unsigned int  _highlighted;
    id  _target;
    unsigned int  _tracking;
}

@property (nonatomic, readwrite) SEL action;
@property (getter=isEnabled, nonatomic, readwrite) BOOL enabled;
@property (getter=isHighlighted, nonatomic, readwrite) BOOL highlighted;
@property (nonatomic, readwrite) id target;
@property (getter=isTracking, nonatomic, readwrite) BOOL tracking;

+ (void)initialize;

- (BOOL)acceptsFirstMouse:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (SEL)action;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)isEnabled;
- (BOOL)isHighlighted;
- (BOOL)isTracking;
- (BOOL)sendAction:(SEL)arg1 to:(id)arg2;
- (void)setAction:(SEL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setTarget:(id)arg1;
- (void)setTracking:(BOOL)arg1;
- (id)target;

// QLMediaUIControl (NSAccessibility)

- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (BOOL)accessibilityIsIgnored;

@end
