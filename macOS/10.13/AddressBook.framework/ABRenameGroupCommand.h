/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABRenameGroupCommand : ABCommand {
    ABGroup * _group;
    NSString * _name;
}

- (void)_swapName;
- (void)dealloc;
- (BOOL)doIt;
- (void)finalize;
- (id)initWithGroup:(id)arg1 newName:(id)arg2 addressBook:(id)arg3;
- (void)redoIt;
- (void)undoIt;

@end