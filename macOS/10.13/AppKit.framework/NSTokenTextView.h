/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSTokenTextView : NSTextView

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

+ (id)tokenTextViewForWindow:(id)arg1;
+ (id)trackingTokenTextView:(BOOL)arg1;

- (BOOL)_characterAtIndex:(unsigned long long)arg1 shouldTerminateString:(id)arg2;
- (void)_detachFieldEditorFromWindow:(id)arg1;
- (id)_tokenAttachmentForPoint:(struct CGPoint { double x1; double x2; })arg1 glyphIndex:(out unsigned long long*)arg2 drawingRect:(out struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3;

// Image: /Applications/Xcode.app/Contents/Developer/usr/lib/libMainThreadChecker.dylib

- (id)acceptableDragTypes;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)draggingEnded:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)insertNewline:(id)arg1;
- (void)insertText:(id)arg1 replacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)mouseDown:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeForUserCompletion;
- (BOOL)readSelectionFromPasteboard:(id)arg1 type:(id)arg2;
- (id)readablePasteboardTypes;
- (void)rightMouseDown:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)tokenizingCharacterSet;
- (void)viewWillMoveToWindow:(id)arg1;
- (id)writablePasteboardTypes;
- (BOOL)writeSelectionToPasteboard:(id)arg1 type:(id)arg2;

@end
