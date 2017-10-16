/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSPopoverToolbar : NSObject {
    id  _popoverToolbarPrivateData;
}

@property (atomic, readwrite) long long selectedIndex;
@property (atomic, readwrite) long long separatorIndex;
@property (atomic, readwrite, copy) NSArray *tabViewItems;
@property (atomic, readonly) NSView *toolbarView;

- (void)_unobserveBoundObject:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3;
- (void)bind:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (long long)selectedIndex;
- (long long)separatorIndex;
- (void)setSelectedIndex:(long long)arg1;
- (void)setSeparatorIndex:(long long)arg1;
- (void)setTabViewItems:(id)arg1;
- (id)tabViewItems;
- (id)toolbarView;
- (void)unbind:(id)arg1;

@end