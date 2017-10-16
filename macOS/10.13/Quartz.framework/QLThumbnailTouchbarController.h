/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
 */

@interface QLThumbnailTouchbarController : NSObject <NSScrubberDataSource, NSScrubberDelegate, NSTouchBarDelegate> {
    NSObject<QLThumbnailTouchbarControllerDelegate> * _delegate;
    NSTouchBarItem * _pageScrubberItem;
    QLThumbnailScrubberItemView * _previouslySelectedItemView;
    NSTouchBar * _touchBar;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (nonatomic, readwrite) NSObject<QLThumbnailTouchbarControllerDelegate> *delegate;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite, retain) NSTouchBarItem *pageScrubberItem;
@property (atomic, readwrite, retain) QLThumbnailScrubberItemView *previouslySelectedItemView;
@property (atomic, readonly) NSScrubber *scrubber;
@property (atomic, readonly) Class superclass;
@property (atomic, readonly) NSTouchBar *touchBar;

- (void).cxx_destruct;
- (unsigned long long)currentPage;
- (void)dealloc;
- (id)delegate;
- (void)highlightSelectedItemAtIndex:(long long)arg1;
- (void)notifyDelegateOfPageUpdate;
- (long long)numberOfItemsForScrubber:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)pageScrubberItem;
- (id)previouslySelectedItemView;
- (id)scrubber;
- (void)scrubber:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (id)scrubber:(id)arg1 viewForItemAtIndex:(long long)arg2;
- (void)setDelegate:(id)arg1;
- (void)setPageScrubberItem:(id)arg1;
- (void)setPreviouslySelectedItemView:(id)arg1;
- (id)touchBar;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;

@end