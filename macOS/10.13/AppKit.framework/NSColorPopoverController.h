/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSColorPopoverController : NSViewController <NSColorPickerMatrixViewDelegate> {
    NSColorPickerMatrixView * _colorMatrixView;
    NSButton * _colorPanelButton;
    id  _delegate;
    NSPopover * _popover;
    NSColorPickerMatrixView * _topBarMatrixView;
}

@property (atomic, readwrite) NSColorPickerMatrixView *colorMatrixView;
@property (atomic, readwrite) NSButton *colorPanelButton;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readwrite) id delegate;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite) NSPopover *popover;
@property (atomic, readonly) Class superclass;
@property (atomic, readwrite) NSColorPickerMatrixView *topBarMatrixView;

- (void)_loadViewIfNecessary;
- (void)_showColorPanel:(id)arg1;
- (id)colorMatrixView;
- (id)colorPanelButton;
- (id)delegate;
- (id)init;
- (void)loadView;
- (id)matrixColorPicker:(id)arg1 highlightColorForColor:(id)arg2;
- (void)matrixColorPicker:(id)arg1 selectedColor:(id)arg2;
- (id)popover;
- (void)setColorMatrixView:(id)arg1;
- (void)setColorPanelButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPopover:(id)arg1;
- (void)setTopBarMatrixView:(id)arg1;
- (id)topBarMatrixView;

@end