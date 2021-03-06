/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreWiFi.framework/Versions/A/CoreWiFi
 */

@interface CoreWiFiIE : NSObject {
    BOOL  forAssocRequest;
    BOOL  forAssocResponse;
    BOOL  forBeacon;
    BOOL  forProbeRequest;
    BOOL  forProbeResponse;
    BOOL  isValid;
    NSData * rawIE;
    unsigned long long  signatureLength;
}

@property (atomic, readonly) NSData *driverFriendlyIE;
@property (nonatomic, readwrite) BOOL forAssocRequest;
@property (nonatomic, readwrite) BOOL forAssocResponse;
@property (nonatomic, readwrite) BOOL forBeacon;
@property (nonatomic, readwrite) BOOL forProbeRequest;
@property (nonatomic, readwrite) BOOL forProbeResponse;
@property (nonatomic, readonly) BOOL isValid;
@property (nonatomic, readwrite, retain) NSData *rawIE;
@property (atomic, readonly) NSData *signatureIE;
@property (nonatomic, readwrite) unsigned long long signatureLength;

- (void)dealloc;
- (id)description;
- (id)driverFriendlyIE;
- (BOOL)forAssocRequest;
- (BOOL)forAssocResponse;
- (BOOL)forBeacon;
- (BOOL)forProbeRequest;
- (BOOL)forProbeResponse;
- (BOOL)generateIE:(id*)arg1;
- (id)init;
- (id)initWithIE:(id)arg1;
- (id)initWithSkeleton:(id)arg1;
- (BOOL)isEquivalentToIE:(id)arg1;
- (BOOL)isValid;
- (BOOL)parseIE:(id*)arg1;
- (id)rawIE;
- (void)setForAssocRequest:(BOOL)arg1;
- (void)setForAssocResponse:(BOOL)arg1;
- (void)setForBeacon:(BOOL)arg1;
- (void)setForProbeRequest:(BOOL)arg1;
- (void)setForProbeResponse:(BOOL)arg1;
- (BOOL)setManagementFramesWithOptionString:(id)arg1 error:(id*)arg2;
- (void)setRawIE:(id)arg1;
- (BOOL)setRawInformationElementFromHexString:(id)arg1 error:(id*)arg2;
- (void)setSignatureLength:(unsigned long long)arg1;
- (id)signatureIE;
- (unsigned long long)signatureLength;
- (id)skeleton;

// CoreWiFiIE (CoreWiFiIE_Factory)

- (id)representedIE;

@end
