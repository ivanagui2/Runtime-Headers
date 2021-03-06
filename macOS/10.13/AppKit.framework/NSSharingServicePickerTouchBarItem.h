/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSSharingServicePickerTouchBarItem : NSTouchBarItem <NSTouchBarItemTypePopover> {
    NSString * _customizationLabel;
    <NSSharingServicePickerTouchBarItemDelegate> * _delegate;
    NSPopoverTouchBarItem * _internalPopoverItem;
    NSTouchBarSharingServicePickerViewController * _pickerViewController;
}

@property (atomic, readwrite, retain) NSImage *buttonImage;
@property (atomic, readwrite, copy) NSString *buttonTitle;
@property (atomic, readwrite, copy) NSString *customizationLabel;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readwrite) <NSSharingServicePickerTouchBarItemDelegate> *delegate;
@property (atomic, readonly, copy) NSString *description;
@property (getter=isEnabled, atomic, readwrite) BOOL enabled;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) BOOL isPresented;
@property (atomic, readonly) NSTouchBar *popoverFunctionBar;
@property (atomic, readonly) BOOL showsCloseButton;
@property (atomic, readonly) Class superclass;
@property (atomic, readonly) BOOL supportsPressAndHold;

- (void).cxx_destruct;
- (void)_makeInternalPopoverItemWithButtonTitle:(id)arg1 buttonImage:(id)arg2;
- (id)_shareButton;
- (id)buttonImage;
- (id)buttonTitle;
- (id)customizationLabel;
- (void)dealloc;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (BOOL)isEnabled;
- (id)items;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setButtonImage:(id)arg1;
- (void)setButtonTitle:(id)arg1;
- (void)setCustomizationLabel:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setItems:(id)arg1;
- (id)view;

// NSSharingServicePickerTouchBarItem (NSSharingServicePickerDelegate)

- (id)itemsForSharingServicePickerTouchBarItem:(id)arg1;
- (id)sharingServicePicker:(id)arg1 delegateForSharingService:(id)arg2;
- (void)sharingServicePicker:(id)arg1 didChooseSharingService:(id)arg2;
- (id)sharingServicePicker:(id)arg1 sharingServicesForItems:(id)arg2 proposedSharingServices:(id)arg3;

// NSSharingServicePickerTouchBarItem (NSTouchBarItemTypePopover)

- (long long)_type;
- (void)dismissPopover:(id)arg1;
- (BOOL)isPresented;
- (id)popoverFunctionBar;
- (void)showPopover:(id)arg1;
- (BOOL)showsCloseButton;
- (BOOL)supportsPressAndHold;

@end
