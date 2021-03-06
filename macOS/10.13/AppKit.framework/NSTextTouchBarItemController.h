/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSTextTouchBarItemController : NSObject {
    <NSTextTouchBarItemControllerClient> * _client;
    NSButton * _colorPicker;
    NSTouchBarItem * _colorPickerItem;
    struct { 
        unsigned int loaded : 1; 
        unsigned int narrowTextStyle : 1; 
        unsigned int unused : 30; 
    }  _tcFlags;
    NSButton * _textAlignment;
    NSTouchBarItem * _textAlignmentItem;
    NSSegmentedControl * _textAlignments;
    NSTouchBarItem * _textFormatItem;
    NSButton * _textList;
    NSTouchBarItem * _textListItem;
    NSViewController * _textListViewController;
    NSSegmentedControl * _textStyle;
    NSTouchBarItem * _textStyleItem;
    unsigned long long  _textStyleState;
}

@property (atomic, readwrite) <NSTextTouchBarItemControllerClient> *client;
@property (atomic, readwrite, retain) NSButton *colorPicker;
@property (atomic, readonly) NSColorPickerTouchBarItem *colorPickerItem;
@property (atomic, readonly) NSViewController *effectiveTextListViewController;
@property (atomic, readwrite, retain) NSButton *textAlignment;
@property (atomic, readonly) NSPopoverTouchBarItem *textAlignmentItem;
@property (atomic, readwrite, retain) NSSegmentedControl *textAlignments;
@property (atomic, readonly) NSGroupTouchBarItem *textFormatItem;
@property (atomic, readwrite, retain) NSButton *textList;
@property (atomic, readonly) NSPopoverTouchBarItem *textListItem;
@property (atomic, readwrite, retain) NSViewController *textListViewController;
@property (atomic, readwrite, retain) NSSegmentedControl *textStyle;
@property (atomic, readonly) NSCustomTouchBarItem *textStyleItem;
@property (atomic, readwrite) BOOL usesNarrowTextStyleItem;

+ (id)nibForItems;

- (void)_changeTextAlignment:(id)arg1;
- (void)_changeTextColor:(id)arg1;
- (void)_changeTextList:(id)arg1;
- (void)_changeTextStyle:(id)arg1;
- (void)_reconfigureTextStyle;
- (void)_showTextListPanel:(id)arg1;
- (id)client;
- (id)colorPicker;
- (id)colorPickerItem;
- (void)dealloc;
- (id)effectiveTextListViewController;
- (id)itemForIdentifier:(id)arg1;
- (void)loadNib;
- (void)setClient:(id)arg1;
- (void)setColorPicker:(id)arg1;
- (void)setSelectedAttributes:(id)arg1 isMultiple:(BOOL)arg2;
- (void)setSelectedAttributesWithEnumrator:(id)arg1;
- (void)setTextAlignment:(id)arg1;
- (void)setTextAlignments:(id)arg1;
- (void)setTextList:(id)arg1;
- (void)setTextListViewController:(id)arg1;
- (void)setTextStyle:(id)arg1;
- (void)setUsesNarrowTextStyleItem:(BOOL)arg1;
- (id)textAlignment;
- (id)textAlignmentItem;
- (id)textAlignments;
- (id)textFormatItem;
- (id)textList;
- (id)textListItem;
- (id)textListViewController;
- (id)textStyle;
- (id)textStyleItem;
- (BOOL)usesNarrowTextStyleItem;

@end
