/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreWiFi.framework/Versions/A/CoreWiFi
 */

@interface CoreWiFiWPSNetwork : NSObject {
    NSData * EAPIdentity;
    NSData * EAPType;
    NSData * MACAddress;
    NSNumber * enabled8021X;
    NSNumber * keyProvidedAutomatically;
    NSData * networkKey;
    NSNumber * networkKeyIndex;
}

@property (nonatomic, readwrite, retain) NSData *EAPIdentity;
@property (nonatomic, readwrite, retain) NSData *EAPType;
@property (nonatomic, readwrite, retain) NSData *MACAddress;
@property (nonatomic, readwrite, retain) NSNumber *enabled8021X;
@property (nonatomic, readwrite, retain) NSNumber *keyProvidedAutomatically;
@property (nonatomic, readwrite, retain) NSData *networkKey;
@property (nonatomic, readwrite, retain) NSNumber *networkKeyIndex;

- (id)EAPIdentity;
- (id)EAPType;
- (id)MACAddress;
- (void)dealloc;
- (id)description;
- (id)enabled8021X;
- (id)init;
- (id)keyProvidedAutomatically;
- (id)networkKey;
- (id)networkKeyIndex;
- (void)setEAPIdentity:(id)arg1;
- (void)setEAPType:(id)arg1;
- (void)setEnabled8021X:(id)arg1;
- (void)setKeyProvidedAutomatically:(id)arg1;
- (void)setMACAddress:(id)arg1;
- (void)setNetworkKey:(id)arg1;
- (void)setNetworkKeyIndex:(id)arg1;

@end
