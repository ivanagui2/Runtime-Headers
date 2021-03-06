/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface NSFTPURLHandle : NSURLHandle {
    struct __CFReadStream { } * ftpReadStream;
    NSURL * originalURL;
}

+ (id)cachedHandleForURL:(id)arg1;
+ (BOOL)canInitWithURL:(id)arg1;
+ (void)initialize;

- (void)beginLoadInBackground;
- (struct __CFReadStream { }*)createFTPReadStream;
- (void)dealloc;
- (void)endLoadInBackground;
- (id)errorStringForFTPStatusCode:(long long)arg1 fromURL:(id)arg2;
- (long long)expectedResourceDataSize;
- (void)flushCachedData;
- (id)initWithURL:(id)arg1 cached:(BOOL)arg2;
- (id)loadInForeground;
- (void)performStreamRead;
- (id)propertyForKey:(id)arg1;
- (id)propertyForKeyIfAvailable:(id)arg1;
- (void)reportStreamError;
- (BOOL)writeData:(id)arg1;
- (BOOL)writeProperty:(id)arg1 forKey:(id)arg2;

@end
