/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSRecentDocumentInfo : NSObject <NSRecentDocumentInfo> {
    id  deletionBlock;
    NSString * displayName;
    NSImage * icon;
    NSURL * originalURL;
    NSURL * resolvedURL;
    struct OpaqueLSSharedFileListItemRef { } * sharedFileListItem;
    long long  state;
}

@property (atomic, readonly) NSURL *URL;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readwrite, copy) id deletionBlock;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readwrite, retain) NSString *displayName;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite, retain) NSImage *icon;
@property (atomic, readonly) NSURL *originalURL;
@property (atomic, readwrite, retain) NSURL *resolvedURL;
@property (atomic, readonly) struct OpaqueLSSharedFileListItemRef { }*sharedFileListItem;
@property (atomic, readwrite) long long state;
@property (atomic, readonly) Class superclass;

- (id)URL;
- (void)dealloc;
- (id)deletionBlock;
- (id)description;
- (id)displayName;
- (id)icon;
- (id)initWithSharedFileListItem:(struct OpaqueLSSharedFileListItemRef { }*)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)originalURL;
- (void)resolveByMountingVolumesIfNecessary:(BOOL)arg1 queue:(id)arg2 completionHandler:(id)arg3;
- (void)resolveURLWithCompletionHandler:(id)arg1;
- (id)resolvedURL;
- (void)setDeletionBlock:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setResolvedURL:(id)arg1;
- (void)setState:(long long)arg1;
- (struct OpaqueLSSharedFileListItemRef { }*)sharedFileListItem;
- (long long)state;

@end