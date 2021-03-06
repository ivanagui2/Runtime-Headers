/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABSubscription : ABRecord

+ (id)builtInProperties;
+ (id)findSubscriptionWithRemoteLocation:(id)arg1;
+ (id)findSubscriptionWithRemoteLocation:(id)arg1 addressBook:(id)arg2;
+ (id)nts_Subscriptions;
+ (id)nts_SubscriptionsWithAddressBook:(id)arg1;

- (id)_acl;
- (id)_displayName;
- (BOOL)_isAll;
- (void)dealloc;
- (id)description;
- (void)finalize;
- (id)initWithRemoteLocation:(id)arg1 displayName:(id)arg2 readWriteACL:(id)arg3 isAll:(BOOL)arg4;
- (id)nts_ACL;
- (id)nts_Description;
- (id)nts_DisplayName;
- (void)nts_DoInitWithRemoteLocation:(id)arg1 displayName:(id)arg2 readWriteACL:(id)arg3 isAll:(BOOL)arg4;
- (id)nts_InitWithRemoteLocation:(id)arg1 displayName:(id)arg2 readWriteACL:(id)arg3 isAll:(BOOL)arg4;
- (BOOL)nts_IsAll;
- (id)remoteLocation;

@end
