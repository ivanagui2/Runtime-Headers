/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/OpenDirectory.framework/Versions/A/OpenDirectory
 */

@interface ODSession : NSObject {
    void * _internal;
}

@property (atomic, readonly, copy) NSArray *configurationTemplateNames;
@property (atomic, readonly, copy) NSArray *mappingTemplateNames;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)defaultSession;
+ (void)initialize;
+ (id)sessionWithOptions:(id)arg1 error:(id*)arg2;

- (struct __ODSession { }*)__getODSessionRef;
- (unsigned long long)_cfTypeID;
- (BOOL)addConfiguration:(id)arg1 authorization:(id)arg2 error:(id*)arg3;
- (id)configurationAuthorizationAllowingUserInteraction:(BOOL)arg1 error:(id*)arg2;
- (id)configurationDictionaryForNodename:(id)arg1;
- (id)configurationForNodename:(id)arg1;
- (id)configurationTemplateNames;
- (void)dealloc;
- (BOOL)deleteConfiguration:(id)arg1 authorization:(id)arg2 error:(id*)arg3;
- (BOOL)deleteConfigurationWithNodename:(id)arg1 authorization:(id)arg2 error:(id*)arg3;
- (id)description;
- (BOOL)externalizedAuthorizationForm:(struct { BOOL x1[32]; }*)arg1 authorization:(id)arg2 node:(id)arg3 error:(id*)arg4;
- (id)initWithOptions:(id)arg1 error:(id*)arg2;
- (id)mappingTemplateNames;
- (id)nodeNamesAndReturnError:(id*)arg1;
- (id)sendConfigurationCode:(long long)arg1 propertyList:(id)arg2 authorization:(id)arg3 error:(id*)arg4;
- (id)templatesInFolder:(id)arg1;

@end