/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABFindsUserDataInAddressBook : NSObject {
    ABAccount * _account;
    ABAddressBook * _addressBook;
    ABAddressBook * _addressBookForTipCards;
    NSArray * _people;
    NSArray * _tipCards;
}

- (BOOL)_hasMeCard;
- (BOOL)_hasTipCard;
- (BOOL)_hasUserGroups;
- (BOOL)_hasUserPeople;
- (void)dealloc;
- (BOOL)hasUserData;
- (id)initWithAddressBook:(id)arg1 account:(id)arg2;
- (id)people;
- (void)setupTipCards;
- (id)tipCards;

@end