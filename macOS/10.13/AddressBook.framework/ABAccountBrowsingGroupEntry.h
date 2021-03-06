/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABAccountBrowsingGroupEntry : ABBrowsingGroupEntry {
    ABAccount * _account;
    ABAddressBook * _addressBook;
}

@property (atomic, readonly, retain) ABAccount *account;
@property (atomic, readonly, retain) ABAddressBook *addressBook;

+ (id)identifierForAccount:(id)arg1;

- (void).cxx_destruct;
- (id)account;
- (id)actionScope;
- (id)addressBook;
- (BOOL)canCreateGroup;
- (BOOL)canCreateGroupFromSelection;
- (BOOL)canCreatePeople;
- (BOOL)canDeletePeople;
- (BOOL)canDrop;
- (BOOL)containsPeople:(id)arg1;
- (id)createHelperWithFactory:(id)arg1;
- (id)description;
- (id)iconWithStyleProvider:(id)arg1;
- (id)initWithName:(id)arg1 account:(id)arg2 addressBook:(id)arg3;
- (BOOL)shouldImportToDefaultAccount;

@end
