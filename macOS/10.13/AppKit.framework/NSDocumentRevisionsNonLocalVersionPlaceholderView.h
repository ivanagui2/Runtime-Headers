/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSDocumentRevisionsNonLocalVersionPlaceholderView : NSDocumentRevisionsPlaceholderView {
    SEL  action;
    NSButton * button;
    BOOL  clickEnabled;
    NSProgress * downloadProgress;
    BOOL  hasButton;
    id  target;
}

@property (atomic, readwrite, retain) NSProgress *downloadProgress;
@property (atomic, readwrite) BOOL hasButton;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

- (BOOL)_hasButtonOrProgress;
- (void)_layout;
- (void)_updateForProgress;
- (void)dealloc;

// Image: /Applications/Xcode.app/Contents/Developer/usr/lib/libMainThreadChecker.dylib

- (id)downloadProgress;
- (BOOL)hasButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setClickAction:(SEL)arg1 target:(id)arg2;
- (void)setDownloadProgress:(id)arg1;
- (void)setElementsHidden:(BOOL)arg1;
- (void)setHasButton:(BOOL)arg1;

@end