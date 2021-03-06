/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABRemoteImageLoader : NSObject {
    NSOperationQueue * _workQueue;
}

+ (id)personForEmailAddresses:(id)arg1;
+ (id)sharedRemoteImageLoader;

- (long long)beginLoadingImageForEmails:(id)arg1 completionHandler:(id)arg2;
- (long long)beginLoadingImageForEmails:(id)arg1 forClient:(id)arg2;
- (long long)beginLoadingImageForPerson:(id)arg1 completionHandler:(id)arg2;
- (void)cancelLoadingImageDataForTag:(long long)arg1;
- (void)dealloc;
- (id)init;

@end
