/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteViewServices.framework/Versions/A/RemoteViewServices
 */

@interface RVSLogger : NSObject {
    NSString * _name;
}

+ (id)defaultLogger;
+ (id)loggerWithName:(id)arg1;

- (id)_initWithName:(id)arg1;
- (void)_logMessage:(id)arg1 values:(struct __va_list_tag { unsigned int x1; unsigned int x2; void *x3; void *x4; })arg2;
- (void)dealloc;
- (void)debug:(id)arg1;

@end