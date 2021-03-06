/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSCollectionViewBinder : NSBinder {
    struct { 
        unsigned int _ignoreChanges : 1; 
        unsigned int _reservedTableBinder : 31; 
    }  _collectionViewBinderFlags;
}

+ (id)bindingCategory;
+ (id)bindingsForObject:(id)arg1;
+ (BOOL)isUsableWithObject:(id)arg1;
+ (id)objectMechanismsRequiredForObject:(id)arg1;

- (unsigned long long)_bindingAdaptorMethodsNeededMask;
- (void)_connectionWasBroken;
- (void)_init;
- (void)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 context:(void*)arg3;
- (void)_updateContent;
- (void)_updateSelectionIndexes:(id)arg1;
- (void)collectionView:(id)arg1 didChangeToSelectionIndexes:(id)arg2;
- (BOOL)isBindingReadOnly:(id)arg1;

@end
