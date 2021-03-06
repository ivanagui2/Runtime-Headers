/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreWLAN.framework/Versions/A/CoreWLAN
 */

@interface CWPasswordSharingSimulator : NSObject <SFPasswordSharingServiceDelegate> {
    CWInterface * _interface;
    SFPasswordSharingService * _service;
    NSString * _ssid;
}

@property (atomic, readonly) CWInterface *interface;
@property (atomic, readonly) NSString *ssid;

- (id)initWithInterface:(id)arg1 ssid:(id)arg2;
- (id)interface;
- (void)run;
- (void)service:(id)arg1 receivedNetworkInfo:(id)arg2;
- (BOOL)service:(id)arg1 shouldPromptForNetwork:(id)arg2;
- (id)ssid;

@end
