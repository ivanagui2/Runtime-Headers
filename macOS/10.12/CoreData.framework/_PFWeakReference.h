/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
 */

@interface _PFWeakReference : NSObject {
    id  _object;
    long long  _objectAddress;
}

@property (atomic, readonly) long long address;
@property (atomic, readonly) id object;

+ (id)weakReferenceWithObject:(id)arg1;

- (long long)address;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithObject:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)object;
- (id)retainedObject;

@end
