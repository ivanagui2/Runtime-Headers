/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ImageCaptureCore.framework/Versions/A/ImageCaptureCore
 */

@interface ICCameraFolderProperties : NSObject {
    NSDate * _creationDate;
    NSMutableSet * _files;
    NSMutableArray * _folders;
    NSDate * _modificationDate;
}

@property (atomic, readwrite, retain) NSDate *creationDate;
@property (atomic, readwrite, retain) NSMutableSet *files;
@property (atomic, readwrite, retain) NSMutableArray *folders;
@property (atomic, readwrite, retain) NSDate *modificationDate;

- (id)creationDate;
- (void)dealloc;
- (id)files;
- (void)finalize;
- (id)folders;
- (id)modificationDate;
- (void)setCreationDate:(id)arg1;
- (void)setFiles:(id)arg1;
- (void)setFolders:(id)arg1;
- (void)setModificationDate:(id)arg1;

@end