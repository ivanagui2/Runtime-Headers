/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
 */

@interface MRProtocolMessageLogger : NSObject {
    BOOL  _shouldLog;
    int  _token;
}

@property (nonatomic, readwrite) BOOL shouldLog;

+ (id)sharedLogger;

- (void)dealloc;
- (id)init;
- (void)logMessage:(id)arg1 protocolMessage:(id)arg2;
- (void)setShouldLog:(BOOL)arg1;
- (BOOL)shouldLog;

@end
