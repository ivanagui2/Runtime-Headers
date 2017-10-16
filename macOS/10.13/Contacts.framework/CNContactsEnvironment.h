/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
 */

@interface CNContactsEnvironment : NSObject {
    <CNAccountCollection> * _accountCollection;
    <CNContactsLoggerProvider> * _loggerProvider;
    <CNSchedulerProvider> * _schedulerProvider;
    <SGSuggestionsServiceContactsProtocol> * _suggestionsService;
}

@property (atomic, readwrite, retain) <CNAccountCollection> *accountCollection;
@property (nonatomic, readonly) <CNContactsLoggerProvider> *loggerProvider;
@property (nonatomic, readonly) <CNSchedulerProvider> *schedulerProvider;
@property (atomic, readwrite, retain) <SGSuggestionsServiceContactsProtocol> *suggestionsService;
@property (atomic, readonly) BOOL useInMemoryStores;

+ (id)currentEnvironment;
+ (id)inMemoryURL;
+ (BOOL)supportsSecureCoding;
+ (id)unitTestingEnvironment;
+ (id)unitTestingEnvironmentWithSchedulerProvider:(id)arg1 loggerProvider:(id)arg2;

- (void).cxx_destruct;
- (id)accountCollection;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSchedulerProvider:(id)arg1 loggerProvider:(id)arg2;
- (id)loggerProvider;
- (id)schedulerProvider;
- (void)setAccountCollection:(id)arg1;
- (void)setSuggestionsService:(id)arg1;
- (id)suggestionsService;
- (BOOL)useInMemoryStores;

@end