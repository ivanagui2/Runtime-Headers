/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSAccessibilityCustomChooserSearchPredicate : NSObject {
    NSAccessibilityCustomChooserItemResult * _currentItem;
    NSString * _filterText;
    long long  _searchDirection;
}

@property (nonatomic, readwrite, retain) NSAccessibilityCustomChooserItemResult *currentItem;
@property (nonatomic, readwrite, copy) NSString *filterText;
@property (nonatomic, readwrite) long long searchDirection;

- (id)currentItem;
- (void)dealloc;
- (id)filterText;
- (long long)searchDirection;
- (void)setCurrentItem:(id)arg1;
- (void)setFilterText:(id)arg1;
- (void)setSearchDirection:(long long)arg1;

@end
