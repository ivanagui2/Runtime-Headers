/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSTouchBarLogger : NSObject {
    NSObject<OS_xpc_object> * _connection;
}

+ (void)addLogInfo:(id)arg1 type:(id)arg2;
+ (void)addLogMessage:(id)arg1;
+ (void)listenForHotKey;
+ (id)sharedTouchBarLogger;

- (void)addLogInfo:(id)arg1 type:(id)arg2;
- (id)connection;
- (void)dealloc;
- (id)init;

@end