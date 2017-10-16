/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSColorPanel : NSPanel <NSTouchBarColorPickerViewControllerDelegate> {
    id  _accessoryContainerView;
    id  _accessoryContainerViewHeight;
    id  _accessoryView;
    SEL  _action;
    BOOL  _allowColorSetting;
    id  _bottomConstraint;
    id  _colorSwatch;
    id  _colorWell;
    BOOL  _continuous;
    id  _currViewObject;
    id  _customPickerList;
    id  _customViewsList;
    BOOL  _handlingOpacityMoveAction;
    BOOL  _hasModalAppearance;
    BOOL  _ignoreConstraints;
    id  _magnifyButton;
    struct CGSize { 
        double width; 
        double height; 
    }  _maxColorPanelSize;
    id  _middleView;
    struct CGSize { 
        double width; 
        double height; 
    }  _minColorPanelSize;
    id  _modalButtons;
    id  _opacitySlider;
    id  _opacityText;
    id  _opacityTextController;
    id  _opacityView;
    id  _opacityViewHeight;
    id  _pickerView;
    NSMutableArray * _pickersWithLoadedViews;
    id  _reserved1;
    id  _reserved2;
    BOOL  _reserved3;
    BOOL  _reserved4;
    id  _resizeDimple;
    BOOL  _stillInitializing;
    id  _target;
}

@property (atomic, readwrite, retain) NSView *accessoryView;
@property (atomic, readwrite) SEL action;
@property (atomic, readonly) double alpha;
@property (atomic, readwrite, copy) NSColor *color;
@property (getter=isContinuous, atomic, readwrite) BOOL continuous;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite) long long mode;
@property (atomic, readwrite) BOOL showsAlpha;
@property (atomic, readonly) Class superclass;
@property (atomic, readwrite) id target;
@property (getter=isUsingModalAppearance, atomic, readwrite) BOOL usingModalAppearance;

+ (BOOL)_dragColor:(id)arg1 withEvent:(id)arg2 fromView:(id)arg3 source:(id)arg4;
+ (BOOL)dragColor:(id)arg1 withEvent:(id)arg2 fromView:(id)arg3;
+ (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
+ (BOOL)ignoreModifierKeysWhileDragging;
+ (BOOL)loadsExternalColorPickers;
+ (void)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(id)arg3;
+ (void)setLoadsExternalColorPickers:(BOOL)arg1;
+ (void)setPickerMask:(unsigned long long)arg1;
+ (void)setPickerMode:(long long)arg1;
+ (id)sharedColorPanel;
+ (BOOL)sharedColorPanelExists;
+ (void)warmupExternalColorPickersIfNecessary;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_adjustedFrameForSaving:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_adjustedFrameFromDefaults:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_appendColorPicker:(id)arg1;
- (id)_arrayForPartialPinningFromArray:(id)arg1;
- (void)_cancelKey:(id)arg1;
- (void)_changeMinColorPanelSizeByDelta:(struct CGSize { double x1; double x2; })arg1 compareWithOldMinSize:(BOOL)arg2 oldMinSize:(struct CGSize { double x1; double x2; })arg3 setWindowFrame:(BOOL)arg4;
- (void)_changeMinColorPanelSizeByDelta:(struct CGSize { double x1; double x2; })arg1 setWindowFrame:(BOOL)arg2;
- (void)_colorPanelDidLoad;
- (id)_colorPickers;
- (id)_colorSwatch;
- (void)_colorWellAcceptedColor:(id)arg1;
- (BOOL)_determinesMinSizeFromAccessoryView:(id)arg1;
- (void)_endLiveResize;
- (void)_forceSendAction:(BOOL)arg1 notification:(BOOL)arg2 firstResponder:(BOOL)arg3;
- (void)_forceSetColor:(id)arg1;
- (double)_insertionOrderForPicker:(id)arg1;
- (BOOL)_isCurrentColorPicker:(id)arg1;
- (id)_keyViewFollowingAccessoryView;
- (id)_keyViewFollowingModalButtons;
- (id)_keyViewFollowingOpacityViews;
- (id)_keyViewFollowingPickerViews;
- (id)_keyViewPrecedingAccesoryView;
- (id)_keyViewPrecedingModalButtons;
- (id)_keyViewPrecedingPickerViews;
- (void)_loadColorPickers;
- (void)_magnify:(id)arg1;
- (void)_middleViewFrameChanged:(id)arg1;
- (struct CGSize { double x1; double x2; })_newLegalSizeFromSize:(struct CGSize { double x1; double x2; })arg1 force:(BOOL)arg2 roundDirection:(long long)arg3;
- (struct CGSize { double x1; double x2; })_panelSizeExcludingToolbar;
- (id)_pickerView;
- (void)_pinViews:(id)arg1;
- (id)_pinViews:(id)arg1 resizeFlagsToLeaveAlone:(long long)arg2;
- (id)_provideNewViewFor:(id)arg1 initialViewRequest:(BOOL)arg2;
- (void)_removeColorPicker:(id)arg1;
- (void)_resetOpacity:(id)arg1;
- (void)_resetOpacity:(id)arg1 andForceSetColor:(BOOL)arg2;
- (void)_saveMode;
- (long long)_savedMode;
- (void)_selectFirstKeyView;
- (void)_sendActionAndNotification;
- (void)_set:(id)arg1;
- (void)_setMinPickerContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setNumVisibleSwatchRows:(long long)arg1;
- (void)_setShowAlpha:(BOOL)arg1 andForce:(BOOL)arg2;
- (void)_setTitleFixedPointWindowFrame:(struct CGSize { double x1; double x2; })arg1 display:(BOOL)arg2 animate:(BOOL)arg3;
- (void)_setUseModalAppearance:(BOOL)arg1;
- (void)_setUtilityWindow:(BOOL)arg1;
- (void)_setupButtonImageAndToolTips;
- (void)_sizeWindowForPicker:(id)arg1;
- (id)_startingWindowForSendAction:(SEL)arg1;
- (void)_stopModal:(id)arg1;
- (void)_storeNewColorInColorWell:(id)arg1;
- (void)_switchToAppropriateModeForColorIfNecessary:(id)arg1;
- (void)_switchToPicker:(id)arg1;
- (void)_switchViewForToolbarItem:(id)arg1;
- (void)_syncSwatchSizeToSavedNumVisibleRows;
- (void)_timedAdjustTextControl:(id)arg1;
- (id)_toolTipForColorPicker:(id)arg1;
- (void)_unpinViews:(id)arg1;
- (void)_unpinViews:(id)arg1 resizeMasks:(id)arg2;
- (void)_validateOpacitySlider;
- (id)accessoryView;
- (SEL)action;
- (double)alpha;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)attachColorList:(id)arg1;
- (void)becomeKeyWindow;
- (void)changeWindowFrameSizeByDelta:(struct CGSize { double x1; double x2; })arg1 display:(BOOL)arg2 animate:(BOOL)arg3;
- (id)color;
- (long long)colorMask;
- (BOOL)conformsToProtocol:(id)arg1;
- (void)dealloc;
- (void)detachColorList:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;
- (void)insertNewline:(id)arg1;
- (BOOL)isContinuous;
- (BOOL)isUsingModalAppearance;
- (BOOL)isViewOfPickerLoaded:(id)arg1;
- (void)magnifier:(id)arg1 didSelectColor:(id)arg2;
- (void)magnifierDidFailToSelectColor:(id)arg1;
- (long long)mode;
- (void)resignKeyWindow;
- (void)setAccessoryView:(id)arg1;
- (void)setAction:(SEL)arg1;
- (void)setColor:(id)arg1;
- (id)setColorMask:(long long)arg1;
- (void)setContinuous:(BOOL)arg1;
- (void)setHidesOnDeactivate:(BOOL)arg1;
- (void)setMode:(long long)arg1;
- (void)setShowsAlpha:(BOOL)arg1;
- (void)setTarget:(id)arg1;
- (void)setUsingModalAppearance:(BOOL)arg1;
- (void)setViewOfPickerIsLoaded:(id)arg1;
- (BOOL)showsAlpha;
- (id)target;

// NSColorPanel (NSCCPColorPanelPrivate)

- (SEL)__action;
- (long long)__numberOfRowsToToggleVisibleInColorSwatch;
- (long long)__numberOfVisibleRowsInColorSwatch;
- (void)__setNumberOfRowsToToggleVisibleInColorSwatch:(long long)arg1;
- (id)__target;

// NSColorPanel (_NSTouchBarSupport)

+ (id)keyPathsForValuesAffectingTouchBar;

- (void)colorPickerViewController:(id)arg1 didSelectColor:(id)arg2;
- (id)makeTouchBar;

@end