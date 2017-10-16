/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
 */

@interface _NSCollectionViewCore : NSObject {
    NSTimer * _autoscrollTimer;
    NSBox * _backgroundColorFillView;
    NSView * _backgroundView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    NSMutableDictionary * _cellClassDict;
    NSMutableDictionary * _cellNibDict;
    NSMutableDictionary * _cellNibExternalObjectsTables;
    NSMutableDictionary * _cellReuseQueues;
    NSMutableDictionary * _clonedCellsDict;
    NSMutableDictionary * _clonedDecorationViewsDict;
    NSMutableDictionary * _clonedSupplementaryViewsDict;
    NSCollectionViewData * _collectionViewData;
    struct { 
        unsigned int delegateShouldHighlightItemAtIndexPath : 1; 
        unsigned int delegateDidHighlightItemAtIndexPath : 1; 
        unsigned int delegateDidUnhighlightItemAtIndexPath : 1; 
        unsigned int delegateShouldSelectItemAtIndexPath : 1; 
        unsigned int delegateShouldDeselectItemAtIndexPath : 1; 
        unsigned int delegateDidSelectItemAtIndexPath : 1; 
        unsigned int delegateDidDeselectItemAtIndexPath : 1; 
        unsigned int delegateSupportsMenus : 1; 
        unsigned int delegateWillDisplayCell : 1; 
        unsigned int delegateWillDisplaySupplementaryView : 1; 
        unsigned int delegateDidEndDisplayingCell : 1; 
        unsigned int delegateDidEndDisplayingSupplementaryView : 1; 
        unsigned int delegateIndexForReferenceItemDuringLayoutTransition : 1; 
        unsigned int delegateOverrideForTransitionOffsetSize : 1; 
        unsigned int delegateTargetContentOffsetForProposedContentOffsetSPI : 1; 
        unsigned int delegateTargetContentOffsetForProposedContentOffset : 1; 
        unsigned int delegateTargetIndexPathForMoveSPI : 1; 
        unsigned int delegateTargetIndexPathForMove : 1; 
        unsigned int delegateCanFocusItemAtIndexPath_deprecated : 1; 
        unsigned int delegateDidFocusItemAtIndexPath_deprecated : 1; 
        unsigned int delegateCanFocusItemAtIndexPath : 1; 
        unsigned int delegateDidFocusItemAtIndexPath : 1; 
        unsigned int delegateDidUnfocusItemAtIndexPath : 1; 
        unsigned int delegateShouldChangeFocusedItem : 1; 
        unsigned int delegateIndexPathForPreferredFocusedItem : 1; 
        unsigned int delegateShouldUpdateFocusFromRowAtIndexPathToView : 1; 
        unsigned int delegateIndexPathForPreferredFocusedView : 1; 
        unsigned int delegateShouldUpdateFocusInContext : 1; 
        unsigned int delegateDidUpdateFocusInContext : 1; 
        unsigned int delegateTemplateLayoutCell : 1; 
        unsigned int delegateWillLayoutCellUsingTemplateLayoutCell : 1; 
        unsigned int delegateWasNonNil : 1; 
        unsigned int dataSourceNumberOfSections : 1; 
        unsigned int dataSourceViewForSupplementaryElement : 1; 
        unsigned int dataSourceCanMoveItemAtIndexPathSPI : 1; 
        unsigned int dataSourceMoveItemAtIndexPathSPI : 1; 
        unsigned int dataSourceCanMoveItemAtIndexPath : 1; 
        unsigned int dataSourceMoveItemAtIndexPath : 1; 
        unsigned int dataSourceWasNonNil : 1; 
        unsigned int prefetchDataSourcePrefetchItemsAtIndexPaths : 1; 
        unsigned int prefetchDataSourceCancelPrefetchingForItemsAtIndexPaths : 1; 
        unsigned int prefetchDataSourceWasNonNil : 1; 
        unsigned int reloadSkippedDuringSuspension : 1; 
        unsigned int scheduledUpdateVisibleCells : 1; 
        unsigned int scheduledUpdateVisibleCellLayoutAttributes : 1; 
        unsigned int allowsSelection : 1; 
        unsigned int allowsMultipleSelection : 1; 
        unsigned int allowsSelectionDuringEditing : 1; 
        unsigned int allowsMultipleSelectionDuringEditing : 1; 
        unsigned int fadeCellsForBoundsChange : 1; 
        unsigned int updatingLayout : 1; 
        unsigned int needsReload : 1; 
        unsigned int reloading : 1; 
        unsigned int skipLayoutDuringSnapshotting : 1; 
        unsigned int layoutInvalidatedSinceLastCellUpdate : 1; 
        unsigned int doneFirstLayout : 1; 
        unsigned int loadingOffscreenViews : 1; 
        unsigned int updating : 1; 
        unsigned int updatingVisibleCells : 1; 
        unsigned int preRotationBoundsSet : 1; 
        unsigned int updateFocusAfterItemAnimations : 1; 
        unsigned int remembersLastFocusedIndexPath : 1; 
        unsigned int updateFocusAfterLoadingCells : 1; 
        unsigned int performingLayout : 1; 
        unsigned int keepsFirstResponderVisibleOnBoundsChange : 1; 
        unsigned int inCreateTemplateCell : 1; 
        unsigned int editing : 1; 
        unsigned int shouldDeriveVisibleBoundsFromContainingScrollView : 1; 
        unsigned int usingCustomLayoutMargins : 1; 
        unsigned int settingDefaultLayoutMargins : 1; 
        unsigned int shouldPrefetchCellsWhenPerformingReloadData : 1; 
        unsigned int scheduledReloadPrefetchDuringNextLayoutPass : 1; 
        unsigned int visMode : 1; 
        unsigned int invokingDelegateDidEndDisplayingItem : 1; 
        unsigned int invokingDelegateWillDisplayItem : 1; 
        unsigned int finishesBatchUpdateBeforeInvokingCompletionHandler : 1; 
        unsigned int tellCompletionHandlerAnimationsDidFinish : 1; 
    }  _collectionViewFlags;
    struct NSEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInset;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    struct CGPoint { 
        double x; 
        double y; 
    }  _currentCenterOffset;
    double  _currentInteractiveTransitionProgress;
    double  _currentInteractiveTransitionTimeStamp;
    _NSCollectionViewPrefetchingContext * _currentPrefetchingContext;
    NSCollectionViewUpdate * _currentUpdate;
    <NSCollectionViewDataSource> * _dataSource;
    NSMutableDictionary * _dataSourceToLayoutIndexPathMappingDict;
    <NSCollectionViewCoreDelegate> * _delegate;
    NSMutableArray * _deleteItems;
    NSIndexPath * _dropTargetIndexPath;
    NSIndexPath * _firstResponderIndexPath;
    NSString * _firstResponderViewKind;
    long long  _firstResponderViewType;
    long long  _focusedViewType;
    NSMutableSet * _indexPathsForHighlightedItems;
    NSMutableSet * _indexPathsForSelectedItems;
    NSMutableArray * _insertItems;
    id  _interactiveCompletionHandler;
    NSMutableDictionary * _interactiveTransitionInfos;
    NSMutableDictionary * _interactiveTransitionValueTrackingDict;
    NSMutableDictionary * _invalidatedDecorationIndexPaths;
    NSMutableSet * _invalidatedItemIndexPaths;
    NSMutableSet * _invalidatedItemIndexPathsToAnimate;
    NSMutableDictionary * _invalidatedSupplementaryIndexPaths;
    id  _invalidationBlock;
    BOOL  _isInInteractiveTransition;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastLayoutOffset;
    NSCollectionViewLayout * _layout;
    NSMutableArray * _moveItems;
    id  _navigationCompletion;
    NSView * _newContentView;
    NSCollectionViewLayout * _nextLayoutForInteractiveTranstion;
    NSArray * _originalDeleteItems;
    NSArray * _originalInsertItems;
    NSMutableSet * _pendingDeselectionIndexPaths;
    NSIndexPath * _pendingSelectionIndexPath;
    id  _postUpdateBlock;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _preRotationBounds;
    NSMutableDictionary * _prefetchCacheItems;
    <NSCollectionViewPrefetching> * _prefetchDataSource;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _preparedContentRect;
    struct CGPoint { 
        double x; 
        double y; 
    }  _previousCenterOffset;
    double  _previousInteractiveTransitionProgress;
    double  _previousInteractiveTransitionTimeStamp;
    long long  _proposedDropOperation;
    NSMutableArray * _reloadItems;
    long long  _reloadingSuspendedCount;
    NSMutableArray * _reorderedItems;
    struct CGPoint { 
        double x; 
        double y; 
    }  _reorderingTargetPosition;
    long long  _rotationAnimationCount;
    struct CGPoint { 
        double x; 
        double y; 
    }  _rotationBoundsOffset;
    BOOL  _shouldAccumulateTrackedLayoutValues;
    double  _startTimeStamp;
    NSMutableDictionary * _supplementaryViewClassDict;
    NSMutableDictionary * _supplementaryViewNibDict;
    NSMutableDictionary * _supplementaryViewNibExternalObjectsTables;
    NSMutableSet * _supplementaryViewRegisteredKinds;
    NSMutableDictionary * _supplementaryViewReuseQueues;
    NSMutableDictionary * _templateLayoutCells;
    NSMutableArray * _trackedValuesKeys;
    NSCollectionViewLayoutAttributes * _transitionLayoutAttributes;
    long long  _updateAnimationCount;
    id  _updateCompletionHandler;
    long long  _updateCount;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _visibleBounds;
    NSMutableDictionary * _visibleCellsDict;
    NSMutableDictionary * _visibleDecorationViewsDict;
    NSMutableDictionary * _visibleItemsDict;
    NSMutableDictionary * _visibleSupplementaryViewsDict;
}

@property (nonatomic, readwrite) BOOL allowsMultipleSelection;
@property (nonatomic, readwrite) BOOL allowsSelection;
@property (nonatomic, readwrite, retain) NSView *backgroundView;
@property (atomic, readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (getter=_collectionViewData, nonatomic, readonly) NSCollectionViewData *collectionViewData;
@property (nonatomic, readwrite, retain) NSCollectionViewLayout *collectionViewLayout;
@property (atomic, readwrite) struct NSEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property (getter=_currentUpdate, nonatomic, readonly) NSCollectionViewUpdate *currentUpdate;
@property (nonatomic, readwrite) <NSCollectionViewDataSource> *dataSource;
@property (getter=_debugModeEnabled, setter=_setDebugModeEnabled:, atomic, readwrite) BOOL debugModeEnabled;
@property (nonatomic, readwrite) <NSCollectionViewCoreDelegate> *delegate;
@property (getter=_dropTargetIndexPath, setter=_setDropTargetIndexPath:, atomic, readwrite, retain) NSIndexPath *dropTargetIndexPath;
@property (getter=_finishesBatchUpdateBeforeInvokingCompletionHandler, setter=_setFinishesBatchUpdateBeforeInvokingCompletionHandler:, atomic, readwrite) BOOL finishesBatchUpdateBeforeInvokingCompletionHandler;
@property (nonatomic, readonly) NSArray *indexPathsForSelectedItems;
@property (getter=_navigationCompletion, setter=_setNavigationCompletion:, nonatomic, readwrite, copy) id navigationCompletion;
@property (nonatomic, readonly) long long numberOfSections;
@property (nonatomic, readwrite) <NSCollectionViewPrefetching> *prefetchDataSource;
@property (getter=_proposedDropOperation, setter=_setProposedDropOperation:, atomic, readwrite) long long proposedDropOperation;
@property (atomic, readwrite) NSCollectionView *publicCollectionView;
@property (getter=_visibleViews, nonatomic, readonly) NSArray *visibleViews;

+ (id)_reuseKeyForSupplementaryViewOfKind:(id)arg1 withReuseIdentifier:(id)arg2;

- (void).cxx_destruct;
- (void)_addControlledSubview:(id)arg1 atZIndex:(long long)arg2 forced:(BOOL)arg3;
- (void)_applyBlockToAllReusableViews:(id)arg1;
- (void)_applyLayoutAttributes:(id)arg1 toView:(id)arg2;
- (id)_arrayForUpdateAction:(int)arg1;
- (void)_beginUpdates;
- (void)_checkForPreferredAttributesInView:(id)arg1 originalAttributes:(id)arg2;
- (id)_collectionViewData;
- (void)_computePrefetchCandidatesForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_computePrefetchCandidatesForVisibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 futureVisibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 prefetchVector:(struct CGVector { double x1; double x2; })arg3 notifyDelegateIfNeeded:(BOOL)arg4;
- (struct CGPoint { double x1; double x2; })_contentOffsetForNewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 oldFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 newContentSize:(struct CGSize { double x1; double x2; })arg3 andOldContentSize:(struct CGSize { double x1; double x2; })arg4;
- (struct CGPoint { double x1; double x2; })_contentOffsetForScrollingToItemAtIndexPath:(id)arg1 atScrollPosition:(unsigned long long)arg2;
- (id)_createPreparedCellForItemAtIndexPath:(id)arg1 withLayoutAttributes:(id)arg2 applyAttributes:(BOOL)arg3;
- (id)_createPreparedCellForItemAtIndexPath:(id)arg1 withLayoutAttributes:(id)arg2 applyAttributes:(BOOL)arg3 isFocused:(BOOL)arg4 notify:(BOOL)arg5;
- (id)_createPreparedSupplementaryViewForElementOfKind:(id)arg1 atIndexPath:(id)arg2 withLayoutAttributes:(id)arg3 applyAttributes:(BOOL)arg4;
- (id)_createTemplateLayoutCellForCellsWithIdentifier:(id)arg1;
- (id)_currentUpdate;
- (BOOL)_dataSourceImplementsNumberOfSections;
- (BOOL)_dataSourceMatchesCurrentCounts;
- (BOOL)_debugModeEnabled;
- (id)_dequeueReusableViewOfKind:(id)arg1 withIdentifier:(id)arg2 forIndexPath:(id)arg3 viewCategory:(unsigned long long)arg4;
- (id)_deselectItemsAtIndexPaths:(id)arg1 animated:(BOOL)arg2 notifyDelegate:(BOOL)arg3;
- (id)_doubleSidedAnimationsForView:(id)arg1 withStartingLayoutAttributes:(id)arg2 startingLayout:(id)arg3 endingLayoutAttributes:(id)arg4 endingLayout:(id)arg5 withAnimationSetup:(id)arg6 animationCompletion:(id)arg7 enableCustomAnimations:(BOOL)arg8 customAnimationsType:(unsigned long long)arg9;
- (id)_dropTargetIndexPath;
- (void)_endItemAnimationsWithInvalidationContext:(id)arg1;
- (void)_endItemAnimationsWithInvalidationContext:(id)arg1 tentativelyForReordering:(BOOL)arg2;
- (void)_endItemAnimationsWithInvalidationContext:(id)arg1 tentativelyForReordering:(BOOL)arg2 animator:(id)arg3;
- (void)_endUpdatesWithInvalidationContext:(id)arg1 tentativelyForReordering:(BOOL)arg2 animator:(id)arg3;
- (BOOL)_finishesBatchUpdateBeforeInvokingCompletionHandler;
- (BOOL)_hasRegisteredClassOrNibForSupplementaryViewOfKind:(id)arg1;
- (BOOL)_highlightItemAtIndexPath:(id)arg1 animated:(BOOL)arg2 scrollPosition:(unsigned long long)arg3;
- (BOOL)_highlightItemAtIndexPath:(id)arg1 animated:(BOOL)arg2 scrollPosition:(unsigned long long)arg3 notifyDelegate:(BOOL)arg4;
- (id)_indexPathsForHighlightedItems;
- (id)_indexPathsForVisibleDecorationViewsOfKind:(id)arg1;
- (id)_indexPathsForVisibleSupplementaryViewsOfKind:(id)arg1;
- (id)_indexPathsForVisibleSupplementaryViewsOfKind:(id)arg1 isDecorationView:(BOOL)arg2;
- (void)_invalidateLayoutIfNecessaryForReload;
- (void)_invalidateLayoutWithContext:(id)arg1;
- (void)_invalidateWithBlock:(id)arg1;
- (BOOL)_isViewInReuseQueue:(id)arg1;
- (id)_itemAtIndexPath:(id)arg1 includePrefetchedCells:(BOOL)arg2;
- (void)_layoutItems;
- (id)_managedViews;
- (id)_navigationCompletion;
- (void)_performBatchUpdates:(id)arg1 completion:(id)arg2 invalidationContext:(id)arg3;
- (void)_performBatchUpdates:(id)arg1 completion:(id)arg2 invalidationContext:(id)arg3 tentativelyForReordering:(BOOL)arg4;
- (void)_performBatchUpdates:(id)arg1 completion:(id)arg2 invalidationContext:(id)arg3 tentativelyForReordering:(BOOL)arg4 animator:(id)arg5;
- (void)_prepareLayoutForUpdates;
- (void)_prepareViewForUse:(id)arg1 withElementCategory:(unsigned long long)arg2 elementKind:(id)arg3 reuseIdentifier:(id)arg4 indexPath:(id)arg5;
- (void)_prepareViewForUse:(id)arg1 withElementCategory:(unsigned long long)arg2 elementKind:(id)arg3 reuseIdentifier:(id)arg4 indexPath:(id)arg5 applyDefaultAttributes:(BOOL)arg6;
- (long long)_proposedDropOperation;
- (id)_publicCollectionViewDebugDescription;
- (id)_registeredCellClassesByReuseIdentifier;
- (id)_registeredCellNibsByReuseIdentifier;
- (void)_registeredSupplementaryViewKind:(id)arg1;
- (void)_reloadDataIfNeeded;
- (id)_reorderPrefetchCandidates:(id)arg1 forPrefetchVelocity:(struct CGVector { double x1; double x2; })arg2 visibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)_resetCurrentPrefetchContext;
- (void)_resumeReloads;
- (void)_reuseAllItems;
- (void)_reuseAllSupplementaryOrDecorationViews:(id)arg1;
- (void)_reuseAllViews;
- (void)_reuseCell:(id)arg1;
- (void)_reuseCell:(id)arg1 notifyDidEndDisplaying:(BOOL)arg2;
- (id)_reuseDictionaryForCell:(BOOL)arg1;
- (id)_reuseQueueForViewWithElementCategory:(unsigned long long)arg1 elementKind:(id)arg2 reuseIdentifier:(id)arg3;
- (void)_reuseSupplementaryView:(id)arg1;
- (id)_selectItemsAtIndexPaths:(id)arg1 animated:(BOOL)arg2 notifyDelegate:(BOOL)arg3;
- (void)_sendDidEndDisplayingItem:(id)arg1 indexPath:(id)arg2;
- (void)_setCollectionViewLayout:(id)arg1 animated:(BOOL)arg2 isInteractive:(BOOL)arg3 completion:(id)arg4;
- (void)_setDebugModeEnabled:(BOOL)arg1;
- (void)_setDropTargetIndexPath:(id)arg1;
- (void)_setFinishesBatchUpdateBeforeInvokingCompletionHandler:(BOOL)arg1;
- (void)_setNavigationCompletion:(id)arg1;
- (void)_setNeedsVisibleCellsUpdate:(BOOL)arg1 withLayoutAttributes:(BOOL)arg2;
- (void)_setProposedDropOperation:(long long)arg1;
- (void)_setVisibleView:(id)arg1 forLayoutAttributes:(id)arg2;
- (void)_setupCellAnimations;
- (void)_stopAutoscrollTimer;
- (id)_subviewAtIndex:(unsigned long long)arg1;
- (void)_suspendReloads;
- (void)_trackLayoutValue:(double)arg1 forKey:(id)arg2;
- (double)_trackedLayoutValueForKey:(id)arg1;
- (void)_unhighlightItemAtIndexPath:(id)arg1 animated:(BOOL)arg2;
- (void)_unhighlightItemAtIndexPath:(id)arg1 animated:(BOOL)arg2 notifyDelegate:(BOOL)arg3;
- (void)_updateAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_updateBackgroundView;
- (void)_updateRowsAtIndexPaths:(id)arg1 updateAction:(int)arg2;
- (void)_updateSections:(id)arg1 updateAction:(int)arg2;
- (unsigned long long)_updateVisibleCellsNow:(BOOL)arg1;
- (void)_updateWithItems:(id)arg1 tentativelyForReordering:(BOOL)arg2 animator:(id)arg3;
- (id)_viewAnimationsForCurrentUpdate;
- (BOOL)_visible;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_visibleBounds;
- (id)_visibleDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)_visibleDecorationViewsOfKind:(id)arg1;
- (id)_visibleItemForIndexPath:(id)arg1;
- (id)_visibleSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)_visibleSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 isDecorationView:(BOOL)arg3;
- (id)_visibleSupplementaryViews;
- (id)_visibleSupplementaryViewsOfKind:(id)arg1;
- (id)_visibleSupplementaryViewsOfKind:(id)arg1 isDecorationView:(BOOL)arg2;
- (id)_visibleViewDictForElementCategory:(unsigned long long)arg1 elementKind:(id)arg2;
- (id)_visibleViews;
- (void)addSubview:(id)arg1;
- (BOOL)allowsMultipleSelection;
- (BOOL)allowsSelection;
- (id)backgroundView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (id)collectionViewLayout;
- (struct NSEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (struct CGPoint { double x1; double x2; })contentOffset;
- (struct CGSize { double x1; double x2; })contentSize;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (void)deleteItemsAtIndexPaths:(id)arg1;
- (void)deleteSections:(id)arg1;
- (id)dequeueReusableItemWithReuseIdentifier:(id)arg1 forIndexPath:(id)arg2;
- (id)dequeueReusableSupplementaryViewOfKind:(id)arg1 withReuseIdentifier:(id)arg2 forIndexPath:(id)arg3;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)indexPathForItem:(id)arg1;
- (id)indexPathForItemAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)indexPathsForSelectedItems;
- (id)indexPathsForVisibleItems;
- (id)indexPathsForVisibleSupplementaryElementsOfKind:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCollectionViewLayout:(id)arg1;
- (void)insertItemsAtIndexPaths:(id)arg1;
- (void)insertSections:(id)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)layoutIfNeeded;
- (void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)moveSection:(long long)arg1 toSection:(long long)arg2;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (void)performBatchUpdates:(id)arg1 completion:(id)arg2;
- (void)performBatchUpdates:(id)arg1 withAnimator:(id)arg2;
- (void)prefetchCompleteForItemAtIndexPath:(id)arg1;
- (id)prefetchDataSource;
- (void)prepareContentInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)publicCollectionView;
- (void)registerClass:(Class)arg1 forCellWithReuseIdentifier:(id)arg2;
- (void)registerClass:(Class)arg1 forSupplementaryViewOfKind:(id)arg2 withReuseIdentifier:(id)arg3;
- (void)registerNib:(id)arg1 forCellWithReuseIdentifier:(id)arg2;
- (void)registerNib:(id)arg1 forSupplementaryViewOfKind:(id)arg2 withReuseIdentifier:(id)arg3;
- (void)reloadData;
- (void)reloadItemsAtIndexPaths:(id)arg1;
- (void)reloadSections:(id)arg1;
- (void)scrollToItemAtIndexPath:(id)arg1 atScrollPosition:(unsigned long long)arg2 animated:(BOOL)arg3;
- (void)setAllowsMultipleSelection:(BOOL)arg1;
- (void)setAllowsSelection:(BOOL)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCollectionViewLayout:(id)arg1;
- (void)setCollectionViewLayout:(id)arg1 animated:(BOOL)arg2;
- (void)setCollectionViewLayout:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3;
- (void)setContentInset:(struct NSEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNeedsLayout;
- (void)setPrefetchDataSource:(id)arg1;
- (void)setPublicCollectionView:(id)arg1;
- (id)supplementaryViewForElementKind:(id)arg1 atIndexPath:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleBounds;
- (id)visibleItems;
- (id)visibleSupplementaryViewsOfKind:(id)arg1;

// _NSCollectionViewCore (NonARC)

- (id)_visibleCellForIndexPath:(id)arg1;
- (id)_visibleViewForLayoutAttributes:(id)arg1;

@end