/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABCardCollectionViewController : NSObject <ABCardCollectionViewDataSource, ABCardCollectionViewDelegate> {
    <ABCardCollectionViewControllerDelegate> * _controllerDelegate;
    <ABCardViewDataSource> * _dataSource;
    BOOL  _isImporting;
    ABCollectionViewItemFactory * _itemFactory;
    ABCardViewLabelGenerator * _labelGenerator;
    ABCardViewPropertyProvider * _propertyProvider;
    NSArray * _propetyKeysToDisplay;
    BOOL  _provideEmptyItems;
    ABCardViewStyleProvider * _styleProvider;
    BOOL  _suggestedCardMode;
    ABCardCollectionView * _view;
}

@property (atomic, readwrite) <ABCardCollectionViewControllerDelegate> *controllerDelegate;
@property (nonatomic, readwrite, retain) <ABCardViewDataSource> *dataSource;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readwrite, retain) ABCollectionViewItemFactory *itemFactory;
@property (nonatomic, readwrite, retain) ABCardViewLabelGenerator *labelGenerator;
@property (nonatomic, readwrite, retain) ABCardViewPropertyProvider *propertyProvider;
@property (nonatomic, readwrite, retain) NSArray *propetyKeysToDisplay;
@property (nonatomic, readwrite, retain) ABCardViewStyleProvider *styleProvider;
@property (getter=isSuggestedCardMode, nonatomic, readwrite) BOOL suggestedCardMode;
@property (atomic, readonly) Class superclass;
@property (nonatomic, readwrite, retain) ABCardCollectionView *view;

- (void).cxx_destruct;
- (id)addEmptyEntriesToMultiValue:(id)arg1;
- (id)addEmptyEntryToMultiValue:(id)arg1;
- (id)adjustedMultiValueForKey:(id)arg1;
- (void)buildVisibleViewForItem:(id)arg1;
- (void)cardCollectionViewKeyViewLoopNeedsUpdate:(id)arg1;
- (void)cardViewNoteDidChange;
- (id)collectionItems;
- (id)collectionItemsForKey:(id)arg1;
- (id)colorForProperty:(id)arg1 identifier:(id)arg2;
- (id)controllerDelegate;
- (id)dataSource;
- (id)delegate;
- (void)editExistingKey:(id)arg1 identifier:(id)arg2 yOffset:(double)arg3;
- (BOOL)editMode;
- (id)emptyCollectionItemForKey:(id)arg1;
- (id)emptyItemForMultiValue:(id)arg1 key:(id)arg2;
- (id)hostWindowForShareSheet;
- (BOOL)importMode;
- (id)initWithView:(id)arg1 userActionListDataSource:(id)arg2;
- (BOOL)isAugmentedCardItem:(id)arg1;
- (BOOL)isEditable;
- (BOOL)isEditing;
- (BOOL)isMe;
- (BOOL)isPrivateMeEnabled;
- (BOOL)isSelectable;
- (BOOL)isSuggestedCardMode;
- (BOOL)isTemplate;
- (BOOL)isUnified;
- (void)item:(id)arg1 didConfirmLabeledValue:(id)arg2;
- (void)item:(id)arg1 didRejectLabeledValue:(id)arg2;
- (void)item:(id)arg1 executeAction:(id)arg2;
- (BOOL)item:(id)arg1 shouldEnableAction:(id)arg2;
- (id)item:(id)arg1 titleForAction:(id)arg2;
- (void)itemDidEndEditing:(id)arg1;
- (void)itemDidRequestNewItem:(id)arg1;
- (id)itemFactory;
- (void)itemValueDidBecomeEmpty:(id)arg1;
- (void)itemValueDidBecomeNonEmpty:(id)arg1;
- (void)itemWasRemoved:(id)arg1;
- (id)labelGenerator;
- (void)notifyDelegateActionWasPerformed;
- (id)preferredNameCollectionItem;
- (id)propertyProvider;
- (id)propetyKeysToDisplay;
- (id)removeEntriesWithEmptyValuesFromMultiValue:(id)arg1;
- (id)removeSuggestedEntriesFromMultiValue:(id)arg1;
- (void)setControllerDelegate:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setImporting:(BOOL)arg1;
- (void)setItemFactory:(id)arg1;
- (void)setLabelGenerator:(id)arg1;
- (void)setPropertyProvider:(id)arg1;
- (void)setPropetyKeysToDisplay:(id)arg1;
- (void)setStyleProvider:(id)arg1;
- (void)setSuggestedCardMode:(BOOL)arg1;
- (void)setView:(id)arg1;
- (BOOL)shouldDisplayPropertyForKey:(id)arg1;
- (id)styleProvider;
- (BOOL)suggestedCardMode;
- (void)updateItemsOfKey:(id)arg1 withNewMultiValue:(id)arg2;
- (void)updateItemsOfKey:(id)arg1 withNewMultiValue:(id)arg2 forIndexRemoved:(unsigned long long)arg3;
- (void)updateViewsOfItemsOfKey:(id)arg1;
- (id)userActionListDataSource;
- (void)validateSiblingsOfItem:(id)arg1;
- (id)view;

@end
