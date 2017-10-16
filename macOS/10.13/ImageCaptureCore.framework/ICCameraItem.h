/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ImageCaptureCore.framework/Versions/A/ImageCaptureCore
 */

@interface ICCameraItem : NSObject {
    id  _itemProperties;
}

@property (atomic, readonly) NSString *UTI;
@property (getter=wasAddedAfterContentCatalogCompleted, atomic, readonly) BOOL addedAfterContentCatalogCompleted;
@property (atomic, readonly) NSDate *creationDate;
@property (atomic, readonly) ICCameraDevice *device;
@property (atomic, readonly) NSString *fileSystemPath;
@property (atomic, readonly) BOOL hasMetadata;
@property (atomic, readonly) BOOL hasThumbnail;
@property (getter=isInTemporaryStore, atomic, readonly) BOOL inTemporaryStore;
@property (atomic, readonly) struct CGImage { }*largeThumbnailIfAvailable;
@property (getter=isLocked, atomic, readonly) BOOL locked;
@property (atomic, readonly) NSDictionary *metadataIfAvailable;
@property (atomic, readonly) NSDate *modificationDate;
@property (atomic, readonly) NSString *name;
@property (atomic, readwrite) unsigned long long ownerID;
@property (atomic, readwrite) ICCameraFolder *parentFolder;
@property (atomic, readwrite) unsigned long long parentID;
@property (atomic, readonly) unsigned int ptpObjectHandle;
@property (getter=isRaw, atomic, readonly) BOOL raw;
@property (atomic, readonly) NSData *thumbnailData;
@property (atomic, readonly) struct CGImage { }*thumbnailIfAvailable;
@property (atomic, readonly) NSMutableDictionary *userData;
@property (atomic, readwrite, retain) id userObject;

+ (id)itemWithObjectID:(unsigned long long)arg1;

- (id)UTI;
- (void)appendPath:(id)arg1;
- (long long)compare:(id)arg1;
- (id)creationDate;
- (void)dealloc;
- (id)description;
- (id)device;
- (id)fileSystemPath;
- (void)finalize;
- (BOOL)hasMetadata;
- (BOOL)hasThumbnail;
- (id)initWithDictionary:(id)arg1 parentFolder:(id)arg2 device:(id)arg3;
- (id)initWithObjectID:(unsigned long long)arg1;
- (BOOL)isInTemporaryStore;
- (BOOL)isLocked;
- (BOOL)isRaw;
- (struct CGImage { }*)largeThumbnailIfAvailable;
- (id)metadataIfAvailable;
- (id)modificationDate;
- (id)name;
- (unsigned long long)objectID;
- (unsigned long long)ownerID;
- (id)parentFolder;
- (unsigned long long)parentID;
- (unsigned int)ptpObjectHandle;
- (void)removeDeviceAssignment;
- (void)removeParentAssignment;
- (void)setName:(id)arg1;
- (void)setOwnerID:(unsigned long long)arg1;
- (void)setParentFolder:(id)arg1;
- (void)setParentID:(unsigned long long)arg1;
- (void)setUTI:(id)arg1;
- (void)setUserObject:(id)arg1;
- (id)thumbnailData;
- (struct CGImage { }*)thumbnailIfAvailable;
- (void)updateObjectID:(unsigned long long)arg1;
- (id)userData;
- (id)userObject;
- (id)valueForUndefinedKey:(id)arg1;
- (BOOL)wasAddedAfterContentCatalogCompleted;

@end