/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarAgentLink.framework/Versions/A/CalendarAgentLink
 */

@interface CalAgentLinkQueueDebugOperationItem : NSObject <NSSecureCoding> {
    NSString * _className;
    BOOL  _isPendingRetry;
    BOOL  _isRunning;
    long long  _maxRetries;
    NSString * _readableDescription;
    long long  _retryCounter;
}

@property (nonatomic, readwrite, retain) NSString *className;
@property (nonatomic, readwrite) BOOL isPendingRetry;
@property (nonatomic, readwrite) BOOL isRunning;
@property (nonatomic, readwrite) long long maxRetries;
@property (nonatomic, readwrite, retain) NSString *readableDescription;
@property (nonatomic, readwrite) long long retryCounter;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)className;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isPendingRetry;
- (BOOL)isRunning;
- (long long)maxRetries;
- (id)readableDescription;
- (long long)retryCounter;
- (void)setClassName:(id)arg1;
- (void)setIsPendingRetry:(BOOL)arg1;
- (void)setIsRunning:(BOOL)arg1;
- (void)setMaxRetries:(long long)arg1;
- (void)setReadableDescription:(id)arg1;
- (void)setRetryCounter:(long long)arg1;

@end
