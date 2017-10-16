/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSTokenFieldCell : NSTextFieldCell {
    BOOL * _autoCompleteCancel;
    id  _cache;
    double  _completionDelay;
    id  _defaultTerminator;
    id  _delegate;
    id  _lastCell;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _lastCellFrame;
    /* Warning: unhandled array encoding: '[6@]' */ id  _reserved;
    struct { 
        unsigned int _style : 4; 
        unsigned int _invalidCache : 1; 
        unsigned int _inDidChange : 1; 
        unsigned int _validationDisabled : 1; 
        unsigned int _reserved1 : 1; 
        unsigned int _autoCompleteMode : 2; 
        unsigned int _inValidateEditing : 1; 
        unsigned int _performingDrop : 1; 
        unsigned int _reserved : 20; 
    }  _tfcFlags;
    NSCharacterSet * _tokenizingCharacterSet;
    id  _trackingArea;
}

@property (atomic, readwrite) double completionDelay;
@property (atomic, readwrite) <NSTokenFieldCellDelegate> *delegate;
@property (atomic, readwrite) unsigned long long tokenStyle;
@property (atomic, readwrite, copy) NSCharacterSet *tokenizingCharacterSet;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

+ (double)defaultCompletionDelay;
+ (id)defaultTokenizingCharacterSet;
+ (void)initialize;

- (void).cxx_destruct;
- (id)_attributedStringForRepresentedObjects:(id)arg1;
- (BOOL)_characterAtIndex:(unsigned long long)arg1 shouldTerminateString:(id)arg2;
- (void)_concludeTracking;
- (id)_defaultPlaceholderString;
- (id)_defaultTokenizingCharacter;
- (id)_formatObjectValue:(id)arg1 invalid:(BOOL)arg2;
- (BOOL)_hasAttributedStringValue;
- (BOOL)_objectValue:(id*)arg1 forString:(id)arg2 errorDescription:(id*)arg3;
- (BOOL)_performingDrop;
- (id)_representedObjectsForString:(id)arg1 andAttributedString:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (id)_selectOrEdit:(const struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 inView:(id)arg2 target:(id)arg3 editor:(id)arg4 event:(id)arg5 start:(long long)arg6 end:(long long)arg7;
- (void)_setEditingTextView:(id)arg1;
- (void)_setPerformingDrop:(BOOL)arg1;
- (BOOL)_skipsSynchronizationForEditingTextView:(id)arg1;
- (id)_stringForRepresentedObjects:(id)arg1;
- (id)_textAttributes;
- (BOOL)_tokenizeCharactersAdjacentToSelectionForTextView:(id)arg1 terminatorsNeeded:(BOOL)arg2;
- (long long)_typesetterBehavior;
- (id)_unformattedAttributedStringValue:(id)arg1;
- (void)_validateEditing:(id)arg1;
- (void)dealloc;

// Image: /Applications/Xcode.app/Contents/Developer/usr/lib/libMainThreadChecker.dylib

- (id)acceptableDragTypes;
- (id)accessibilityValueAttribute;
- (BOOL)allowsEditingTextAttributes;
- (BOOL)allowsEditingTokens;
- (BOOL)autoValidationDisabled;
- (double)completionDelay;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fieldEditorForView:(id)arg1;
- (BOOL)hasMenuForTokenAttachment:(id)arg1;
- (id)init;
- (id)initImageCell:(id)arg1;
- (id)initTextCell:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)layoutManager:(id)arg1 shouldUseSelectedTextAttributes:(id)arg2 atCharacterIndex:(unsigned long long)arg3 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg4;
- (id)menuForTokenAttachment:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeForUserCompletion;
- (void)setAlignment:(unsigned long long)arg1;
- (void)setAutoValidationDisabled:(BOOL)arg1;
- (void)setBaseWritingDirection:(long long)arg1;
- (void)setCompletionDelay:(double)arg1;
- (void)setControlSize:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setLineBreakMode:(unsigned long long)arg1;
- (void)setObjectValue:(id)arg1;
- (void)setScrollable:(BOOL)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTokenStyle:(unsigned long long)arg1;
- (void)setTokenizingCharacterSet:(id)arg1;
- (id)setUpFieldEditorAttributes:(id)arg1;
- (id)setUpTokenAttachmentCell:(id)arg1 forRepresentedObject:(id)arg2;
- (void)setWraps:(BOOL)arg1;
- (void)textDidChange:(id)arg1;
- (id)textView:(id)arg1 completions:(id)arg2 forPartialWordRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 indexOfSelectedItem:(long long*)arg4;
- (id)textView:(id)arg1 shouldChangeTypingAttributes:(id)arg2 toAttributes:(id)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })textView:(id)arg1 willChangeSelectionFromCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 toCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (id)tokenAttachment:(id)arg1 _immediateActionAnimationControllerForRepresentedObject:(id)arg2 inTextView:(id)arg3;
- (BOOL)tokenAttachment:(id)arg1 doubleClickedInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 ofView:(id)arg3 atCharacterIndex:(unsigned long long)arg4;
- (id)tokenAttachment:(id)arg1 shouldUseTokenAttachmentCell:(id)arg2;
- (unsigned long long)tokenStyle;
- (BOOL)tokenTextView:(id)arg1 readSelectionFromPasteboard:(id)arg2 type:(id)arg3;
- (id)tokenTextView:(id)arg1 shouldUseDraggingPasteboardTypes:(id)arg2;
- (id)tokenTextView:(id)arg1 shouldUseReadablePasteboardTypes:(id)arg2;
- (id)tokenTextView:(id)arg1 shouldUseWritablePasteboardTypes:(id)arg2;
- (BOOL)tokenTextView:(id)arg1 writeSelectionToPasteboard:(id)arg2 type:(id)arg3;
- (id)tokenizingCharacterSet;
- (void)updateTrackingAreaWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;

@end