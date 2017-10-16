/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
 */

@interface QLImageAndTextDisplayBundle : QLDisplayBundle <QLAccessibilityUIElementDelegate> {
    NSView * _containerView;
    QLAccessibilityUIElement * _imageAccessibilityElement;
    QLImageAndTextLayer * _imageAndTextLayer;
    QLImageAndTextViewController * _imageAndTextViewController;
    QLAccessibilityUIElement * _textAccessibilityElement;
    NSDictionary * _uiElements;
}

@property (atomic, readwrite, retain) NSView *containerView;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly) struct CGSize { double x1; double x2; } defaultImageSize;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) BOOL hasDarkBackground;
@property (atomic, readonly) BOOL hasLargeProperties;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite, retain) QLAccessibilityUIElement *imageAccessibilityElement;
@property (atomic, readonly) NSDictionary *labelAttributes;
@property (atomic, readonly) NSArray *properties;
@property (atomic, readonly) NSString *subTitle;
@property (atomic, readonly) NSDictionary *subTitleAttributes;
@property (atomic, readonly) Class superclass;
@property (atomic, readwrite, retain) QLAccessibilityUIElement *textAccessibilityElement;
@property (atomic, readonly) NSString *title;
@property (atomic, readonly) NSDictionary *titleAttributes;
@property (atomic, readonly) NSString *topText;
@property (atomic, readonly) NSDictionary *topTextAttributes;
@property (atomic, readonly) NSDictionary *valueAttributes;

+ (Class)imageAndTextLayerClass;

- (id)_attributedStringForValue:(id)arg1 attributes:(id)arg2 label:(id)arg3 space:(float)arg4;
- (BOOL)_setupDefaultModeIfNecessary;
- (BOOL)_setupSpotlightModeIfNecessary;
- (BOOL)_teardownDefaultModeIfNecessary;
- (BOOL)_teardownSpotlightModeIfNecessary;
- (void)backingScaleFactorDidChange;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })borderFrame;
- (id)containerView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentFrame;
- (void)dealloc;
- (struct CGSize { double x1; double x2; })defaultImageSize;
- (void)didEndLiveResize;
- (BOOL)hasDarkBackground;
- (BOOL)hasLargeProperties;
- (BOOL)highlighted;
- (id)imageAccessibilityElement;
- (id)initWithPreview:(struct __QLPreview { }*)arg1 owner:(id)arg2;
- (id)labelAttributes;
- (void)modeDidChange;
- (id)properties;
- (id)quickLookContentView;
- (void)setContainerView:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setImageAccessibilityElement:(id)arg1;
- (void)setTextAccessibilityElement:(id)arg1;
- (id)sizingConstraints;
- (id)subTitle;
- (id)subTitleAttributes;
- (id)textAccessibilityElement;
- (id)title;
- (id)titleAttributes;
- (id)topText;
- (id)topTextAttributes;
- (void)updateMetrics;
- (void)updateText;
- (id)valueAttributes;
- (void)willStartLiveResize;

// QLImageAndTextDisplayBundle (Accessibility)

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForUIElement:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForUIElementInParentSpace:(id)arg1;
- (void)setupAccessibilityElements;

@end