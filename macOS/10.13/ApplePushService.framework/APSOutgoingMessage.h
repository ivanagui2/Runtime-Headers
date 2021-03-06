/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ApplePushService.framework/Versions/A/ApplePushService
 */

@interface APSOutgoingMessage : APSMessage

@property (getter=isCritical, nonatomic, readwrite) BOOL critical;
@property (nonatomic, readwrite) unsigned long long payloadFormat;
@property (nonatomic, readwrite) unsigned long long payloadLength;
@property (nonatomic, readwrite, copy) NSString *senderTokenName;
@property (nonatomic, readwrite) unsigned long long timeout;

- (unsigned long long)_effectiveSendTimeout;
- (id)eagernessTimeoutTime;
- (BOOL)hasTimedOut;
- (BOOL)isCritical;
- (BOOL)isEager;
- (unsigned long long)messageID;
- (id)originator;
- (unsigned long long)payloadFormat;
- (unsigned long long)payloadLength;
- (long long)priority;
- (id)rawTimeoutTime;
- (long long)sendInterface;
- (id)sendTimeoutTime;
- (id)senderTokenName;
- (id)sentTimestamp;
- (void)setCancelled:(BOOL)arg1;
- (void)setCritical:(BOOL)arg1;
- (void)setMessageID:(unsigned long long)arg1;
- (void)setOriginator:(id)arg1;
- (void)setPayloadFormat:(unsigned long long)arg1;
- (void)setPayloadLength:(unsigned long long)arg1;
- (void)setPriority:(long long)arg1;
- (void)setSendInterface:(long long)arg1;
- (void)setSenderTokenName:(id)arg1;
- (void)setSent:(BOOL)arg1;
- (void)setSentTimestamp:(id)arg1;
- (void)setTimedOut:(BOOL)arg1;
- (void)setTimeout:(unsigned long long)arg1;
- (void)setTimestamp:(id)arg1;
- (unsigned long long)timeout;
- (id)timestamp;
- (BOOL)wasCancelled;
- (BOOL)wasSent;

@end
