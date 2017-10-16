/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABAccountBuilder : NSObject {
    ABACAccount * _acAccount;
    <ABACAccountStore> * _accountStore;
    NSString * _basePath;
    Class  _configurationClass;
    <ABAccountCustomizationPolicy> * _customizationPolicy;
    NSString * _identifier;
    BOOL  _isMainAccount;
    NSString * _name;
    ABAccountPersistence * _persistence;
    id  _searchPolicyBlock;
    Class  _sourceClass;
    id  _sourceCreationBlock;
    BOOL  _supportsDistributionLists;
}

@property (nonatomic, readwrite, retain) ABACAccount *acAccount;
@property (nonatomic, readwrite, retain) <ABACAccountStore> *accountStore;
@property (nonatomic, readwrite, copy) NSString *basePath;
@property (nonatomic, readwrite) Class configurationClass;
@property (nonatomic, readwrite, retain) <ABAccountCustomizationPolicy> *customizationPolicy;
@property (nonatomic, readwrite, copy) NSString *identifier;
@property (nonatomic, readwrite) BOOL isMainAccount;
@property (nonatomic, readwrite, copy) NSString *name;
@property (nonatomic, readwrite, retain) ABAccountPersistence *persistence;
@property (nonatomic, readwrite) Class primitiveSourceClass;
@property (nonatomic, readwrite, copy) id primitiveSourceCreationBlock;

- (void).cxx_destruct;
- (id)acAccount;
- (id)accountComponents;
- (id)accountStore;
- (id)basePath;
- (id)baseURL;
- (id)buildAccount;
- (id)buildMigrationAccount;
- (Class)configurationClass;
- (id)customizationPolicy;
- (id)defaultSourceCreationBlock;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (BOOL)isMainAccount;
- (id)makeAccountConfigurationWithAccount:(id)arg1;
- (id)makePersistence;
- (id)makeSearchPolicyWithAccount:(id)arg1;
- (id)name;
- (id)newBaseURL;
- (id)newFutureSource;
- (void)overrideSourceClass:(Class)arg1;
- (id)persistence;
- (Class)primitiveSourceClass;
- (id)primitiveSourceCreationBlock;
- (void)setAcAccount:(id)arg1;
- (void)setAccountStore:(id)arg1;
- (void)setBasePath:(id)arg1;
- (void)setConfigurationClass:(Class)arg1;
- (void)setCustomizationPolicy:(id)arg1;
- (void)setExistingSource:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsMainAccount:(BOOL)arg1;
- (void)setName:(id)arg1;
- (void)setPersistence:(id)arg1;
- (void)setPrimitiveSourceClass:(Class)arg1;
- (void)setPrimitiveSourceCreationBlock:(id)arg1;
- (void)setSearchPolicyBlock:(id)arg1;
- (void)setSourceClass:(Class)arg1;
- (void)setSourceCreationBlock:(id)arg1;
- (id)sourceCreationBlock;

@end