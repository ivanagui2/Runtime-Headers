/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSDisplayCycle : NSObject {
    unsigned int  _did1;
    unsigned int  _did2;
    NSCountedSet * _didDisplay;
    NSCountedSet * _didLayout;
    NSCountedSet * _didUpdateConstraints;
    NSCountedSet * _didUpdateStructuralRegions;
    long long  _interCycleUpdateCount;
    NSHashTable * _needsDisplay;
    NSHashTable * _needsLayout;
    NSHashTable * _needsUpdateConstraints;
    NSHashTable * _needsUpdateStructuralRegions;
    void * _transactionSeedKey;
}

+ (id)currentDisplayCycle;
+ (void)initialize;

- (void)addDisplayObserver:(id)arg1;
- (void)addLayoutObserver:(id)arg1;
- (void)addUpdateConstraintsObserver:(id)arg1;
- (void)addUpdateStructuralRegionsObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)observerNeedsDisplay:(id)arg1;
- (BOOL)observerNeedsLayout:(id)arg1;
- (BOOL)observerNeedsUpdateConstraints:(id)arg1;
- (BOOL)observerNeedsUpdateStructuralRegions:(id)arg1;

@end