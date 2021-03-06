/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
 */

@interface NSPersistentStoreRequest : NSObject <NSCopying> {
    NSArray * _affectedStores;
}

@property (nonatomic, readwrite, retain) NSArray *affectedStores;
@property (atomic, readonly) unsigned long long requestType;

+ (void)initialize;

- (id)affectedStores;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)requestType;
- (void)setAffectedStores:(id)arg1;

@end
