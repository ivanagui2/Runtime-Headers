/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSCGSWindowOrdering : NSObject <_NSCGSWindowOrderingState> {
    _NSCGSWindowOrderingProperties * _latestProperties;
    NSMutableArray * _operations;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

+ (id)currentOrdering;

- (BOOL)_hasUncommittedSpaceAssignmentChanges:(id)arg1;
- (void)addWindow:(id)arg1 toOrderingGroupAboveWindow:(id)arg2;
- (void)addWindow:(id)arg1 toOrderingGroupBelowWindow:(id)arg2;
- (void)clearOrderingGroup:(id)arg1;
- (void)conditionallyOrderGroupFront:(id)arg1 withTimestamp:(double)arg2;
- (void)dealloc;
- (void)disableActivationOrderingForWindow:(id)arg1;
- (void)disassociateFromSpacesIfOrderedOut:(id)arg1;
- (void)enableActivationOrderingForWindow:(id)arg1 isInitiallyOrderedIn:(BOOL)arg2;
- (id)init;
- (BOOL)isWindowOrderedIn:(id)arg1;
- (int)levelForWindow:(id)arg1;
- (unsigned long long)onScreenWindowsCountForConnectionID:(unsigned int)arg1;
- (id)onScreenWindowsForConnectionID:(unsigned int)arg1;
- (void)orderApplicationWindowsFront;
- (void)orderGroup:(id)arg1 op:(int)arg2 againstWindow:(id)arg3;
- (void)orderGroup:(id)arg1 op:(int)arg2 againstWindow:(id)arg3 ifActive:(BOOL)arg4;
- (void)orderWindow:(id)arg1 op:(int)arg2 againstWindow:(id)arg3;
- (id)orderingGroupForWindow:(id)arg1;
- (void)reassociateWithSpacesByGeometry:(id)arg1;
- (void)removeWindowFromOrderingGroup:(id)arg1;
- (void)setDesiredSpace:(unsigned long long)arg1 forWindow:(id)arg2;
- (void)setLevel:(int)arg1 forWindow:(id)arg2;
- (void)setSubLevel:(int)arg1 forWindow:(id)arg2;
- (int)subLevelForWindow:(id)arg1;
- (id)windowsWithOptions:(unsigned int)arg1 onSpaces:(id)arg2 forConnectionID:(unsigned int)arg3;

@end
