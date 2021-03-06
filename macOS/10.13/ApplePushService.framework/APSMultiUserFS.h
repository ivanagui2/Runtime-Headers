/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ApplePushService.framework/Versions/A/ApplePushService
 */

@interface APSMultiUserFS : NSObject {
    BOOL  _isMultiUser;
}

@property (atomic, readonly) BOOL isMultiUser;

+ (id)sharedInstance;

- (id)initWithIsMultiUserMode:(BOOL)arg1;
- (BOOL)isMultiUser;
- (id)systemPath;

@end
