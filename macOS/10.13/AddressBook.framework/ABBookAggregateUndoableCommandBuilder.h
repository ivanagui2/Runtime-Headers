/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABBookAggregateUndoableCommandBuilder : NSObject <ABCommandVisitor> {
    NSString * _actionName;
    ABAddressBook * _addressBook;
    BOOL  _shouldSave;
    NSMutableArray * _undoableCommands;
}

@property (atomic, readonly) ABAddressBook *addressBook;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite) BOOL shouldSave;
@property (atomic, readonly) Class superclass;

- (id)actionName;
- (void)addCommand:(id)arg1;
- (void)addCommands:(id)arg1;
- (id)addressBook;
- (id)build;
- (BOOL)containsSubCommands;
- (unsigned long long)countOfCommands;
- (void)dealloc;
- (id)initWithActionName:(id)arg1;
- (id)initWithActionName:(id)arg1 addressBook:(id)arg2;
- (void)setShouldSave:(BOOL)arg1;
- (BOOL)shouldSave;
- (id)undoableCommands;
- (void)visitCommand:(id)arg1;
- (void)visitSaveCNRequestCommand:(id)arg1;
- (void)visitSaveRequestCommand:(id)arg1;
- (void)visitUndoableCommand:(id)arg1;

@end