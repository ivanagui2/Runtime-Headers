/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSColorPickerTouchBarItem : NSTouchBarItem <NSGestureRecognizerDelegate, NSTouchBarColorPickerViewControllerDelegate, NSTouchBarItemTypePopover> {
    SEL  _action;
    NSArray * _allowedColorSpaces;
    id  _autounbinder;
    NSImage * _buttonImage;
    NSString * _buttonTitle;
    NSColor * _color;
    NSColorList * _colorList;
    NSString * _customizationLabel;
    unsigned int  _enabled;
    long long  _mode;
    id  _overlay;
    unsigned int  _showsAlpha;
    unsigned int  _supportsPressAndHoldVariants;
    id  _target;
    NSView * _view;
}

@property (atomic, readonly) NSTouchBarItemOverlay *_overlay;
@property (atomic, readwrite) SEL action;
@property (atomic, readwrite, copy) NSArray *allowedColorSpaces;
@property (atomic, readwrite, copy) NSColor *color;
@property (atomic, readwrite, retain) NSColorList *colorList;
@property (atomic, readwrite) BOOL colorListSupportsPressAndHoldVariants;
@property (atomic, readwrite, copy) NSString *customizationLabel;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (getter=isEnabled, atomic, readwrite) BOOL enabled;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) BOOL isPresented;
@property (atomic, readwrite) long long mode;
@property (atomic, readonly) NSTouchBar *popoverTouchBar;
@property (atomic, readwrite) BOOL showsAlpha;
@property (atomic, readonly) BOOL showsCloseButton;
@property (atomic, readonly, copy) NSColor *storedColor;
@property (atomic, readonly) Class superclass;
@property (atomic, readonly) BOOL supportsPressAndHold;
@property (atomic, readwrite) id target;

+ (BOOL)automaticallyNotifiesObserversOfColor;
+ (id)colorPickerWithIdentifier:(id)arg1;
+ (id)colorPickerWithIdentifier:(id)arg1 buttonImage:(id)arg2;
+ (id)colorPickerWithIdentifier:(id)arg1 buttonTitle:(id)arg2;
+ (id)keyPathsForValuesAffectingStoredColor;
+ (id)strokeColorPickerWithIdentifier:(id)arg1;
+ (id)textColorPickerWithIdentifier:(id)arg1;

- (void).cxx_destruct;
- (void)_pickColor:(id)arg1;
- (SEL)action;
- (id)allowedColorSpaces;
- (id)color;
- (id)colorList;
- (BOOL)colorListSupportsPressAndHoldVariants;
- (id)customizationLabel;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 buttonTitle:(id)arg2 buttonImage:(id)arg3;
- (BOOL)isEnabled;
- (long long)mode;
- (void)setAction:(SEL)arg1;
- (void)setAllowedColorSpaces:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setColorList:(id)arg1;
- (void)setColorListSupportsPressAndHoldVariants:(BOOL)arg1;
- (void)setCustomizationLabel:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setMode:(long long)arg1;
- (void)setShowsAlpha:(BOOL)arg1;
- (void)setTarget:(id)arg1;
- (BOOL)showsAlpha;
- (id)storedColor;
- (id)target;
- (id)view;

// NSColorPickerTouchBarItem (NSButtonImageTitleProperties)

- (void)_updateButtonImagePosition;
- (id)buttonImage;
- (id)buttonTitle;
- (void)setButtonImage:(id)arg1;
- (void)setButtonTitle:(id)arg1;

// NSColorPickerTouchBarItem (NSTouchBarColorPickerController)

- (void)_pickPressAndHoldColor:(id)arg1;
- (void)_pressAndHoldDidCancelTracking;
- (void)_pressAndHoldDidEndTracking;
- (void)_pressAndHoldWillBeginTracking;
- (void)colorPicker:(id)arg1 didChangeCurrentModeFrom:(long long)arg2 to:(long long)arg3;
- (void)colorPickerViewController:(id)arg1 didSelectColor:(id)arg2;
- (void)colorPickerViewControllerDidCancel:(id)arg1;
- (void)colorPickerViewControllerDidEnd:(id)arg1;
- (void)colorPickerViewControllerWillBegin:(id)arg1;

// NSColorPickerTouchBarItem (NSTouchBarItemTypePopover)

+ (id)keyPathsForValuesAffectingPresented;

- (BOOL)_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)_overlay;
- (void)_showPressHoldPopup:(id)arg1;
- (long long)_type;
- (void)dismissPopover:(id)arg1;
- (BOOL)isPresented;
- (id)popoverTouchBar;
- (void)showPopover:(id)arg1;
- (BOOL)showsCloseButton;
- (BOOL)supportsPressAndHold;

// NSColorPickerTouchBarItem (_NSAutounbinder)

- (id)_autounbinder;
- (oneway void)release;

@end