/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarAgentLink.framework/Versions/A/CalendarAgentLink
 */

@interface CalXPCClientInfo : NSObject {
    id  _clientLink;
    NSXPCConnection * _connection;
    int  _processID;
    NSString * _processName;
}

@property (nonatomic, readwrite, retain) id clientLink;
@property (nonatomic, readwrite, retain) NSXPCConnection *connection;
@property (nonatomic, readwrite) int processID;
@property (nonatomic, readwrite, copy) NSString *processName;

+ (id)clientInfoForConnection:(id)arg1 clientLink:(id)arg2;

- (void).cxx_destruct;
- (BOOL)_isEqualToCalXPCClientInfo:(id)arg1;
- (id)clientLink;
- (id)connection;
- (id)description;
- (unsigned long long)hash;
- (id)initWithConnection:(id)arg1 clientLink:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (int)processID;
- (id)processName;
- (void)setClientLink:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setProcessID:(int)arg1;
- (void)setProcessName:(id)arg1;

@end
