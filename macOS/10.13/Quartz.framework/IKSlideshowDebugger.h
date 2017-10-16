/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
 */

@interface IKSlideshowDebugger : NSObject <NSWindowDelegate> {
    unsigned long long  _currentIndex;
    NSPanel * _debugWindow;
    unsigned long long  _itemCount;
    id * _items;
    IKSlideshowDebugItem * _statusItem;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (void)cleanup;
- (unsigned long long)currentIndex;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (unsigned long long)itemCount;
- (void)setCurrentIndex:(unsigned long long)arg1;
- (void)setItemCount:(unsigned long long)arg1;
- (void)startDebugging:(id)arg1;
- (void)stopDebugging;
- (void)windowDidChangeScreen:(id)arg1;

@end