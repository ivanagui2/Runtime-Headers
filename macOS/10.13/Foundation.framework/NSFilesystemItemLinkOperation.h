/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface NSFilesystemItemLinkOperation : NSFilesystemItemCopyOperation

+ (id)_errorWithErrno:(int)arg1 sourcePath:(id)arg2 destinationPath:(id)arg3;
+ (BOOL)_needsStatInfo;
+ (id)filesystemItemLinkOperationWithSourcePath:(id)arg1 destinationPath:(id)arg2;

- (void)_handleFTSEntry:(struct _ftsent { struct _ftsent {} *x1; struct _ftsent {} *x2; struct _ftsent {} *x3; long long x4; void *x5; char *x6; char *x7; int x8; int x9; unsigned short x10; unsigned short x11; unsigned long long x12; int x13; unsigned short x14; short x15; unsigned short x16; unsigned short x17; unsigned short x18; struct stat {} *x19; BOOL x20[1]; }*)arg1;
- (BOOL)_shouldLinkItemAtPath:(const char *)arg1 toPath:(const char *)arg2;
- (BOOL)_shouldProceedAfterErrno:(int)arg1 linkingItemAtPath:(const char *)arg2 toPath:(const char *)arg3;
- (BOOL)_validatePaths:(id*)arg1;
- (BOOL)shouldLinkItemAtPath:(id)arg1 toPath:(id)arg2;
- (BOOL)shouldProceedAfterError:(id)arg1 linkingItemAtPath:(id)arg2 toPath:(id)arg3;

@end
