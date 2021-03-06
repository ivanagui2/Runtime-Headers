/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
 */

@interface AVFigCommChannelUUIDOutputContextCommunicationChannelImpl : NSObject <AVOutputContextCommunicationChannelImpl> {
    struct __CFString { } * _commChannelUUID;
    AVOutputContextCommunicationChannel * _parentChannel;
    struct OpaqueFigRoutingContext { } * _routingContext;
}

@property (nonatomic, readonly) struct __CFString { }*commChannelUUID;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite) AVOutputContextCommunicationChannel *parentCommunicationChannel;
@property (atomic, readonly) Class superclass;

- (void).cxx_destruct;
- (struct __CFString { }*)commChannelUUID;
- (void)dealloc;
- (id)init;
- (id)initWithRoutingContext:(struct OpaqueFigRoutingContext { }*)arg1 commChannelUUID:(struct __CFString { }*)arg2;
- (id)parentCommunicationChannel;
- (void)sendData:(id)arg1 completionHandler:(id)arg2;
- (void)setParentCommunicationChannel:(id)arg1;

@end
