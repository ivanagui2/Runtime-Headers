/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/OpenDirectory.framework/Versions/A/OpenDirectory
 */

@interface ODNode : NSObject {
    void * _internal;
}

@property (atomic, readonly) ODConfiguration *configuration;
@property (nonatomic, readonly, copy) NSString *nodeName;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)initialize;
+ (id)nodeWithSession:(id)arg1 name:(id)arg2 error:(id*)arg3;
+ (id)nodeWithSession:(id)arg1 name:(id)arg2 options:(id)arg3 error:(id*)arg4;
+ (id)nodeWithSession:(id)arg1 type:(unsigned int)arg2 error:(id*)arg3;
+ (id)nodeWithSession:(id)arg1 type:(unsigned int)arg2 options:(id)arg3 error:(id*)arg4;

- (struct __ODNode { }*)__getODNodeRef;
- (unsigned long long)_cfTypeID;
- (id)accountPoliciesAndReturnError:(id*)arg1;
- (BOOL)addAccountPolicy:(id)arg1 toCategory:(id)arg2 error:(id*)arg3;
- (id)configuration;
- (id)copy;
- (id)createRecordWithRecordType:(id)arg1 name:(id)arg2 attributes:(id)arg3 error:(id*)arg4;
- (id)customCall:(long long)arg1 sendData:(id)arg2 error:(id*)arg3;
- (id)customFunction:(id)arg1 data:(id)arg2 error:(id*)arg3;
- (id)customFunction:(id)arg1 payload:(id)arg2 error:(id*)arg3;
- (void)dealloc;
- (id)description;
- (id)initWithSession:(id)arg1 name:(id)arg2 error:(id*)arg3;
- (id)initWithSession:(id)arg1 name:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (id)initWithSession:(id)arg1 type:(unsigned int)arg2 error:(id*)arg3;
- (id)initWithSession:(id)arg1 type:(unsigned int)arg2 options:(id)arg3 error:(id*)arg4;
- (id)nodeDetailsForKeys:(id)arg1 error:(id*)arg2;
- (id)nodeName;
- (BOOL)passwordContentCheck:(id)arg1 forRecordName:(id)arg2 error:(id*)arg3;
- (id)policiesAndReturnError:(id*)arg1;
- (id)recordWithRecordType:(id)arg1 name:(id)arg2 attributes:(id)arg3 error:(id*)arg4;
- (BOOL)removeAccountPolicy:(id)arg1 fromCategory:(id)arg2 error:(id*)arg3;
- (BOOL)removePolicy:(id)arg1 error:(id*)arg2;
- (BOOL)setAccountPolicies:(id)arg1 error:(id*)arg2;
- (BOOL)setCredentialsUsingKerberosCache:(id)arg1 error:(id*)arg2;
- (BOOL)setCredentialsWithRecordType:(id)arg1 authenticationType:(id)arg2 authenticationItems:(id)arg3 continueItems:(id*)arg4 context:(id*)arg5 error:(id*)arg6;
- (BOOL)setCredentialsWithRecordType:(id)arg1 recordName:(id)arg2 password:(id)arg3 error:(id*)arg4;
- (BOOL)setPolicies:(id)arg1 error:(id*)arg2;
- (BOOL)setPolicy:(id)arg1 value:(id)arg2 error:(id*)arg3;
- (id)subnodeNamesAndReturnError:(id*)arg1;
- (id)supportedAttributesForRecordType:(id)arg1 error:(id*)arg2;
- (id)supportedPoliciesAndReturnError:(id*)arg1;
- (id)supportedRecordTypesAndReturnError:(id*)arg1;
- (id)unreachableSubnodeNamesAndReturnError:(id*)arg1;
- (BOOL)verifyCredentialsWithRecordType:(id)arg1 authenticationType:(id)arg2 authenticationItems:(id)arg3 continueItems:(id*)arg4 context:(id*)arg5 error:(id*)arg6;

@end
