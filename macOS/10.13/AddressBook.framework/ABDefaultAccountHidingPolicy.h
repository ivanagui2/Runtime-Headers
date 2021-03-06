/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABDefaultAccountHidingPolicy : NSObject <ABAccountHidingPolicy> {
    ABAddressBook * _addressBook;
    unsigned long long  _numberOfDefaultableAccounts;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (void)analyzeAccount:(id)arg1;
- (void)dealloc;
- (id)initWithAddressBook:(id)arg1;
- (BOOL)isAccountEligibleForHiding:(id)arg1;
- (BOOL)isAccountEmpty:(id)arg1;
- (BOOL)isDefaultAccount:(id)arg1;
- (BOOL)shouldHideAccount:(id)arg1;

@end
