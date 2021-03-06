/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreWLAN.framework/Versions/A/CoreWLAN
 */

@interface CWAutoJoinStatistics : NSObject <NSCopying, NSSecureCoding> {
    double  _assocEndedAt;
    double  _assocStartedAt;
    double  _authEndedAt;
    NSDate * _endedAt;
    NSError * _error;
    double  _ipAssignedAt;
    double  _joinDuration;
    CWNetwork * _network;
    CWNetworkProfile * _profile;
    BOOL  _result;
    double  _scanDuration;
    long long  _scannedChannelCount;
    NSDate * _startedAt;
    long long  _trigger;
}

@property (atomic, readwrite) double assocEndedAt;
@property (atomic, readwrite) double assocStartedAt;
@property (atomic, readwrite) double authEndedAt;
@property (atomic, readwrite, copy) NSDate *endedAt;
@property (atomic, readwrite, copy) NSError *error;
@property (atomic, readwrite) double ipAssignedAt;
@property (atomic, readwrite) double joinDuration;
@property (atomic, readwrite, copy) CWNetwork *network;
@property (atomic, readwrite, copy) CWNetworkProfile *profile;
@property (atomic, readwrite) BOOL result;
@property (atomic, readwrite) double scanDuration;
@property (atomic, readwrite) long long scannedChannelCount;
@property (atomic, readwrite, copy) NSDate *startedAt;
@property (atomic, readwrite) long long trigger;

+ (BOOL)supportsSecureCoding;

- (double)assocEndedAt;
- (double)assocStartedAt;
- (double)authEndedAt;
- (BOOL)conformsToProtocol:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)endedAt;
- (id)error;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (double)ipAssignedAt;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToAutoJoinStatistics:(id)arg1;
- (double)joinDuration;
- (id)network;
- (id)profile;
- (BOOL)result;
- (double)scanDuration;
- (long long)scannedChannelCount;
- (void)setAssocEndedAt:(double)arg1;
- (void)setAssocStartedAt:(double)arg1;
- (void)setAuthEndedAt:(double)arg1;
- (void)setEndedAt:(id)arg1;
- (void)setError:(id)arg1;
- (void)setIpAssignedAt:(double)arg1;
- (void)setJoinDuration:(double)arg1;
- (void)setNetwork:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setResult:(BOOL)arg1;
- (void)setScanDuration:(double)arg1;
- (void)setScannedChannelCount:(long long)arg1;
- (void)setStartedAt:(id)arg1;
- (void)setTrigger:(long long)arg1;
- (id)startedAt;
- (long long)trigger;

@end
