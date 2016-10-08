/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreWiFi.framework/Versions/A/CoreWiFi
 */

@interface CoreWiFiSKU : NSObject {
    NSMutableArray * countries;
    NSString * friendlyName;
    NSString * shortName;
}

@property (nonatomic, readwrite, retain) NSMutableArray *countries;
@property (nonatomic, readwrite, retain) NSString *friendlyName;
@property (nonatomic, readwrite, retain) NSString *shortName;

+ (id)createDefaultSKUList;

- (void)addCountry:(id)arg1;
- (void)addDefaultCountry:(id)arg1 withISOName:(id)arg2 withISOCode:(long long)arg3;
- (id)countries;
- (void)dealloc;
- (id)description;
- (id)findCountryByFriendlyName:(id)arg1;
- (id)findCountryByISOName:(id)arg1;
- (id)friendlyName;
- (id)initWithFriendlyName:(id)arg1 withShortName:(id)arg2;
- (id)initWithSkeleton:(id)arg1;
- (id)removeCountryByFriendlyName:(id)arg1;
- (void)setCountries:(id)arg1;
- (void)setFriendlyName:(id)arg1;
- (void)setShortName:(id)arg1;
- (id)shortName;
- (id)skeleton;
- (void)sortCountriesByFriendlyName;

@end