/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CrashReporterSupport.framework/Versions/A/CrashReporterSupport
 */

@interface OSALogWriter : NSObject

+ (void)createSystemProblemReportDirectoryWithUID:(unsigned int)arg1;
+ (void)createUserProblemReportDirectoryAtPath:(id)arg1 uid:(unsigned int)arg2;
+ (void)makeDirectoryAtPath:(id)arg1 mode:(unsigned short)arg2 uid:(unsigned int)arg3 createHierarchy:(BOOL)arg4;
+ (id)sharedObject;

- (id)fileNameForLogType:(id)arg1 fileNamePrefix:(id)arg2 additionalHeaders:(id)arg3 attemptIndex:(unsigned long long)arg4;
- (BOOL)hasXAttrAt:(const char *)arg1 withName:(const char *)arg2;
- (void)logSavedProblemReportForLogType:(id)arg1 additionalHeaders:(id)arg2 writingOptions:(id)arg3 logLocation:(const char *)arg4;
- (int)setXattrAt:(const char *)arg1 key:(id)arg2 value:(id)arg3;
- (id)stringXAttrAt:(const char *)arg1 withName:(const char *)arg2;
- (void)throttleUnsubmittedProblemReportsAt:(id)arg1 logType:(id)arg2 appName:(id)arg3;
- (BOOL)writeLogWithType:(id)arg1 fileNamePrefix:(id)arg2 additionalHeaders:(id)arg3 writingOptions:(id)arg4 writerBlock:(id)arg5;

@end
