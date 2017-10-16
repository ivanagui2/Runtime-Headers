/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABCardCollectionTableViewController : NSObject <ABCardCollectionViewPresentation, NSTableViewDataSource, NSTableViewDelegate> {
    BOOL  _allowsScrolling;
    CNScrollableContainerView * _container;
    <ABCardCollectionViewPresentationDelegate> * _delegate;
    NSMutableArray * _items;
    NSTableView * _tableView;
}

@property (nonatomic, readwrite) BOOL allowsScrolling;
@property (nonatomic, readwrite, retain) CNScrollableContainerView *container;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (nonatomic, readwrite) <ABCardCollectionViewPresentationDelegate> *delegate;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readwrite, retain) NSMutableArray *items;
@property (atomic, readonly) Class superclass;
@property (nonatomic, readwrite, retain) NSTableView *tableView;

- (void).cxx_destruct;
- (void)addItems:(id)arg1;
- (BOOL)allowsScrolling;
- (id)container;
- (id)delegate;
- (double)desiredHeight;
- (id)initWithDelegate:(id)arg1 allowsScrolling:(BOOL)arg2;
- (void)insertItem:(id)arg1 atIndex:(unsigned long long)arg2 animated:(BOOL)arg3;
- (id)items;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)performBatchUpdates:(id)arg1;
- (void)reloadItem:(id)arg1 animated:(BOOL)arg2;
- (void)removeAllItems;
- (void)removeItem:(id)arg1 animated:(BOOL)arg2;
- (id)separatorItem;
- (void)setAllowsScrolling:(BOOL)arg1;
- (void)setContainer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setSpacing:(double)arg1 afterItem:(id)arg2;
- (void)setTableView:(id)arg1;
- (void)setUpTableView;
- (void)setupContainer;
- (BOOL)shouldOverwriteAnimationFlagWhenScrollingToItemAtIndex:(unsigned long long)arg1;
- (void)showItem:(id)arg1 animated:(BOOL)arg2;
- (id)tableView;
- (void)tableView:(id)arg1 didAddRowView:(id)arg2 forRow:(long long)arg3;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)viewForDisplay;

@end