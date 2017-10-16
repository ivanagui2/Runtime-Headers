/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABCollectionItemMessagingAvailabilityHelper : NSObject <ABFaceTimeCommunicationsBridgeDelegate> {
    BOOL  _availableForMessaging;
    ABFaceTimeCommunicationsBridge * _bridge;
    NSString * _endpoint;
}

@property (getter=isAvailableForMessaging, nonatomic, readwrite) BOOL availableForMessaging;
@property (nonatomic, readwrite, retain) ABFaceTimeCommunicationsBridge *bridge;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (nonatomic, readwrite, retain) NSString *endpoint;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (void).cxx_destruct;
- (id)bridge;
- (id)endpoint;
- (void)faceTimeCommunicationsBridge:(id)arg1 messagingAvailabilityChanged:(BOOL)arg2 forEndpoint:(id)arg3;
- (id)init;
- (BOOL)isAvailableForMessaging;
- (void)setAvailableForMessaging:(BOOL)arg1;
- (void)setBridge:(id)arg1;
- (void)setEndpoint:(id)arg1;
- (void)startAvailabilityCheckForEndpoint:(id)arg1 property:(id)arg2;

@end