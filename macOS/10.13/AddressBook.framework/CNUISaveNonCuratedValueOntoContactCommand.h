/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface CNUISaveNonCuratedValueOntoContactCommand : CNUIUndoableCommand {
    CNUIUndoableCommand * _command;
}

@property (nonatomic, readwrite, retain) CNUIUndoableCommand *command;

- (void).cxx_destruct;
- (id)command;
- (void)executeUndoWithCNSaveRequest:(id)arg1;
- (void)executeWithCNSaveRequest:(id)arg1;
- (id)initWithContactStore:(id)arg1;
- (id)initWithContactStore:(id)arg1 contact:(id)arg2 isContactMeContact:(BOOL)arg3 isContactReadOnly:(BOOL)arg4 isContactCurated:(BOOL)arg5 nonCuratedValueToSave:(id)arg6 forKey:(id)arg7 containerIdentifier:(id)arg8;
- (void)setCommand:(id)arg1;

@end
