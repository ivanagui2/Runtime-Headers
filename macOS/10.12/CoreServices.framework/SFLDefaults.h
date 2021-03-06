/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/SharedFileList.framework/Versions/A/SharedFileList
 */

@interface SFLDefaults : NSObject {
    int  _lock;
    NSSet * _modernizedListIdentifiers;
}

@property (atomic, readonly) NSString *legacyAsyncServiceName;
@property (atomic, readonly) NSString *legacyServiceName;
@property (atomic, readonly) int*lock;
@property (atomic, readonly) NSSet *modernizedListIdentifiers;
@property (atomic, readonly) NSString *serviceName;

+ (id)sharedInstance;
+ (id)standardDefaults;

- (id)_objectForKey:(id)arg1;
- (id)_objectForPrivilegedKey:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (void)finalize;
- (id)init;
- (id)legacyAsyncServiceName;
- (id)legacyServiceName;
- (int*)lock;
- (id)modernizedListIdentifiers;
- (id)serviceName;

@end
