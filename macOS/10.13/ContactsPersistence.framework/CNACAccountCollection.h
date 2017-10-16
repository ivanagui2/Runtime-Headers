/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsPersistence.framework/Versions/A/ContactsPersistence
 */

@interface CNACAccountCollection : NSObject <CNAccountCollection> {
    NSArray * _accounts;
    NSURL * _baseURL;
    CNPublishingSubject * _enabledAccountsObservable;
    BOOL  _includeLocalAccount;
    NSString * _tag;
    CNAccountCollectionUpdateWatcher * _updateWatcher;
}

@property (atomic, readwrite, retain) NSArray *accounts;
@property (atomic, readonly, copy) NSArray *allAccounts;
@property (atomic, readwrite, copy) NSURL *baseURL;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly) <CNAccountDescription> *defaultAccount;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly, copy) NSArray *enabledAccounts;
@property (atomic, readwrite, retain) CNPublishingSubject *enabledAccountsObservable;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) BOOL includeLocalAccount;
@property (atomic, readonly, copy) NSArray *persistentAccounts;
@property (atomic, readonly) Class superclass;
@property (atomic, readwrite, copy) NSString *tag;
@property (atomic, readwrite, retain) CNAccountCollectionUpdateWatcher *updateWatcher;

- (id)accountWithIdentifier:(id)arg1;
- (id)accounts;
- (void)accountsUpdated:(id)arg1;
- (id)allAccounts;
- (id)baseURL;
- (void)dealloc;
- (id)defaultAccount;
- (id)enabledAccounts;
- (id)enabledAccountsObservable;
- (BOOL)includeLocalAccount;
- (id)initWithBaseURL:(id)arg1;
- (id)persistentAccounts;
- (void)setAccounts:(id)arg1;
- (void)setBaseURL:(id)arg1;
- (void)setEnabledAccountsObservable:(id)arg1;
- (void)setTag:(id)arg1;
- (void)setUpdateWatcher:(id)arg1;
- (id)tag;
- (id)updateWatcher;

@end