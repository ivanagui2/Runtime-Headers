/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSPageableTableView : NSTableView <NSTableViewDelegate> {
    long long  _displayedRowCount;
    BOOL  _isPaged;
    BOOL  _isTiling;
    double  _lastVisibleHeight;
    long long  _pageNumber;
    id  _proxyDelegate;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readwrite) long long displayedRowCount;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite) long long page;
@property (atomic, readonly) long long pageCount;
@property (getter=isPaged, atomic, readwrite) BOOL paged;
@property (atomic, readonly) Class superclass;

- (void)_commonPageTableInit;
- (void)_updateLastVisibleHeightIfNeeded;
- (void)dealloc;
- (long long)displayedRowCount;
- (id)dragImageForRowsWithIndexes:(id)arg1 tableColumns:(id)arg2 event:(id)arg3 offset:(struct CGPoint { double x1; double x2; }*)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)isPaged;
- (void)keyDown:(id)arg1;
- (long long)page;
- (long long)pageCount;
- (BOOL)preservesContentDuringLiveResize;
- (void)scrollToPage;
- (void)selectRowIndexes:(id)arg1 byExtendingSelection:(BOOL)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDisplayedRowCount:(long long)arg1;
- (void)setPage:(long long)arg1;
- (void)setPaged:(BOOL)arg1;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (void)tile;

@end
