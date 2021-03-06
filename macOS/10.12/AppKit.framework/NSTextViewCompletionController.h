/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSTextViewCompletionController : NSObject <NSTableViewDataSource, NSTableViewDelegate> {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _charRange;
    NSWindow * _completionWindow;
    NSArray * _completions;
    id  _endDisplayNoComplete;
    long long  _movement;
    NSString * _originalString;
    NSEvent * _sessionTerminatingEvent;
    NSTableView * _tableView;
    NSTextView * _textView;
    NSWindow * _textViewWindow;
    long long  _textViewWindowNumber;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

+ (id)sharedController;

- (void)_reflectSelection:(BOOL)arg1;
- (void)_reloadWithCompletions:(id)arg1;
- (void)_setupWindow;
- (id)completionWindow;
- (id)currentTextView;
- (void)dealloc;
- (void)displayCompletions:(id)arg1 forPartialWordRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 originalString:(id)arg3 atPoint:(struct CGPoint { double x1; double x2; })arg4 forTextView:(id)arg5;
- (void)displayCompletions:(id)arg1 indexOfSelectedItem:(long long)arg2 forPartialWordRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 originalString:(id)arg4 atPoint:(struct CGPoint { double x1; double x2; })arg5 forTextView:(id)arg6;
- (void)endDisplay;
- (void)endDisplayAndComplete:(BOOL)arg1;
- (void)endDisplayNoComplete;
- (void)endDisplayWithNotification:(id)arg1;
- (id)init;
- (long long)numberOfRowsInTableView:(id)arg1;
- (id)sessionTerminatingEvent;
- (void)tableAction:(id)arg1;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableViewSelectionDidChange:(id)arg1;

@end
