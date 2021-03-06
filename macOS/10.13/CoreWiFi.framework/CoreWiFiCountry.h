/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreWiFi.framework/Versions/A/CoreWiFi
 */

@interface CoreWiFiCountry : NSObject {
    NSMutableArray * channels;
    NSString * friendlyName;
    long long  isoCode;
    NSString * isoName;
}

@property (nonatomic, readwrite, retain) NSMutableArray *channels;
@property (nonatomic, readwrite, retain) NSString *friendlyName;
@property (nonatomic, readwrite) long long isoCode;
@property (nonatomic, readwrite, retain) NSString *isoName;

- (id)channels;
- (long long)compareByFrequency:(id)arg1 channel2:(id)arg2;
- (void)createDefaultChannelList;
- (void)createDefaultChannelList2Dot4GHz;
- (void)createDefaultChannelList5GHzHCEPTBand;
- (void)createDefaultChannelList5GHzISMBand;
- (void)createDefaultChannelList5GHzLowBand;
- (void)createDefaultChannelList5GHzMiddleBand;
- (void)createDefaultChannelList5GHzUpperBand;
- (void)dealloc;
- (id)description;
- (id)friendlyName;
- (id)initWithFriendlyName:(id)arg1 withISOName:(id)arg2 withISOCode:(id)arg3;
- (id)initWithSkeleton:(id)arg1;
- (long long)isoCode;
- (id)isoName;
- (void)setChannels:(id)arg1;
- (void)setFriendlyName:(id)arg1;
- (void)setIsoCode:(long long)arg1;
- (void)setIsoName:(id)arg1;
- (id)skeleton;
- (void)sortChannelsByFrequency;

@end
