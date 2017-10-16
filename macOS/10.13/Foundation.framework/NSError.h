/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface NSError : NSObject <NSCopying, NSSecureCoding> {
    long long  _code;
    NSString * _domain;
    void * _reserved;
    NSDictionary * _userInfo;
}

@property (nonatomic, readonly) BOOL _geo_isXPCInterruptedError;
@property (getter=_mapkit_isCLDenied, nonatomic, readonly) BOOL _mapkit_CLDenied;
@property (getter=_mapkit_isCLErrorNetwork, nonatomic, readonly) BOOL _mapkit_CLErrorNetwork;
@property (getter=_mapkit_isCLHeadingFailure, nonatomic, readonly) BOOL _mapkit_CLHeadingFailure;
@property (getter=_mapkit_isCLLocationUnknown, nonatomic, readonly) BOOL _mapkit_CLLocationUnknown;
@property (nonatomic, readonly, retain) NSURL *_mapkit_locationErrorSettingsURL;
@property (atomic, readonly) long long code;
@property (atomic, readonly, copy) NSString *domain;
@property (atomic, readonly, copy) NSString *helpAnchor;
@property (atomic, readonly, copy) NSString *localizedDescription;
@property (atomic, readonly, copy) NSString *localizedFailureReason;
@property (atomic, readonly, copy) NSArray *localizedRecoveryOptions;
@property (atomic, readonly, copy) NSString *localizedRecoverySuggestion;
@property (atomic, readonly) id recoveryAttempter;
@property (atomic, readonly, copy) NSDictionary *userInfo;

// Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation

+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3;
+ (void)setUserInfoValueProviderForDomain:(id)arg1 provider:(id)arg2;
+ (BOOL)supportsSecureCoding;
+ (id)userInfoValueProviderForDomain:(id)arg1;

- (unsigned long long)_cfTypeID;
- (id)_cocoaErrorStringWithKind:(id)arg1;
- (id)_cocoaErrorStringWithKind:(id)arg1 variant:(id)arg2;
- (struct __CFString { }*)_retainedUserInfoCallBackForKey:(id)arg1;
- (long long)code;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)domain;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)helpAnchor;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)localizedDescription;
- (id)localizedFailureReason;
- (id)localizedRecoveryOptions;
- (id)localizedRecoverySuggestion;
- (id)recoveryAttempter;
- (id)userInfo;

// NSError (NSErrorPortCoding)

- (id)replacementObjectForPortCoder:(id)arg1;

// NSError (NSErrorPrivate)

+ (void)_registerBuiltInFormatters;
+ (void)_registerFormatter:(int (*)arg1 forErrorKey:(id)arg2 parameters:(const char *)arg3;

- (id)_cocoaErrorString:(id)arg1;
- (id)_cocoaErrorString:(id)arg1 fromBundle:(id)arg2 tableName:(id)arg3;
- (long long)_collectApplicableUserInfoFormatters:(struct { /* ? */ }**)arg1 max:(long long)arg2;
- (id)_formatCocoaErrorString:(id)arg1 parameters:(const char *)arg2 applicableFormatters:(struct { /* ? */ }**)arg3 count:(long long)arg4;

// NSError (NSURLExtras)

+ (void)_web_addErrorsWithCodesAndDescriptions:(id)arg1 inDomain:(id)arg2;
+ (id)_web_errorWithDomain:(id)arg1 code:(long long)arg2 URL:(id)arg3;
+ (id)_web_errorWithDomain:(id)arg1 code:(long long)arg2 failingURL:(id)arg3;

- (BOOL)_web_errorIsInDomain:(id)arg1;
- (id)_web_failingURL;
- (id)_web_initWithDomain:(id)arg1 code:(long long)arg2 failingURL:(id)arg3;
- (id)_web_localizedDescription;

// NSError (NSURLExtrasInternal)

- (id)_web_initWithDomain_nowarn:(id)arg1 code:(long long)arg2 URL:(id)arg3;

// Image: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit

// NSError (AVAdditions)

- (id)localizedSummary;

// Image: /System/Library/Frameworks/Accounts.framework/Versions/A/Accounts

// NSError (Accounts)

- (id)_sanitizeObject:(id)arg1;
- (id)ac_secureCodingError;

// Image: /System/Library/Frameworks/CoreBluetooth.framework/Versions/A/CoreBluetooth

// NSError (CoreBluetooth)

+ (id)errorWithInfo:(id)arg1;

// Image: /System/Library/Frameworks/CoreLocation.framework/Versions/A/CoreLocation

- (void)cl_json_serializeValue:(struct value_ostream { bool x1; struct ostream {} *x2; }*)arg1;

// Image: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/SharedFileList.framework/Versions/A/SharedFileList

// NSError (SFL)

+ (id)_SFL_CorruptArchiveErrorWithException:(id)arg1;
+ (id)_SFL_UnimplementedError;
+ (id)_SFL_insertErrorWithUnderlyingError:(id)arg1;
+ (id)_SFL_removeErrorWithUnderlyingError:(id)arg1;
+ (id)_SFL_setPropertiesErrorWithUnderlyingError:(id)arg1;
+ (id)_SFL_updateErrorWithUnderlyingError:(id)arg1;

// Image: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit

// NSError (MKErrorInternal)

- (id)_mapkit_error;

// NSError (MKErrorPrivate)

- (long long)_mapkit_directionsErrorCode;
- (id)_mapkit_errorWithDirectionsError:(id)arg1;
- (BOOL)_mapkit_isDirectionsError;
- (id)_mapkit_transitIncident;
- (long long)_mapkit_underlyingGEOError;

// NSError (MXExtensionError)

+ (id)_errorWithExtensionServiceError:(unsigned long long)arg1;

// NSError (MapKitAdditions)

- (BOOL)_mapkit_isCLDenied;
- (BOOL)_mapkit_isCLErrorNetwork;
- (BOOL)_mapkit_isCLHeadingFailure;
- (BOOL)_mapkit_isCLLocationUnknown;
- (id)_mapkit_locationErrorSettingsURL;

// Image: /System/Library/Frameworks/Metal.framework/Versions/A/Metal

// NSError (MTLIOAccelErrors)

- (id)initWithIOAccelError:(long long)arg1;

// Image: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit

// NSError (QTError_Initializers)

+ (id)qt_localizedErrorWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3;
+ (id)qt_localizedErrorWithUnderlyingOSStatus:(int)arg1 userInfo:(id)arg2;
+ (id)qt_localizedUnknownErrorWithUnderlyingOSStatus:(int)arg1;

// NSError (QTError_Utilities)

- (id)qt_errorByAddingUserInfoEntriesFromDictionary:(id)arg1;

// Image: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebKitLegacy.framework/Versions/A/WebKitLegacy

// NSError (WebKitExtras)

+ (void)_registerWebKitErrors;
+ (id)_webKitErrorWithCode:(int)arg1 failingURL:(id)arg2;
+ (id)_webKitErrorWithDomain:(id)arg1 code:(int)arg2 URL:(id)arg3;
+ (void)_webkit_addErrorsWithCodesAndDescriptions:(id)arg1 inDomain:(id)arg2;
+ (id)_webkit_errorWithDomain:(id)arg1 code:(int)arg2 URL:(id)arg3;

- (id)_initWithPluginErrorCode:(int)arg1 contentURL:(id)arg2 pluginPageURL:(id)arg3 pluginName:(id)arg4 MIMEType:(id)arg5;
- (id)_webkit_initWithDomain:(id)arg1 code:(int)arg2 URL:(id)arg3;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices

// NSError (GEOError)

+ (id)GEOErrorWithCode:(long long)arg1 reason:(id)arg2;
+ (id)GEOErrorWithCode:(long long)arg1 reason:(id)arg2 underlyingError:(id)arg3;
+ (id)GEOErrorWithCode:(long long)arg1 userInfo:(id)arg2;

// NSError (GEOXPCUtil)

+ (id)_geo_errorFromXPCData:(id)arg1;
+ (id)_geo_errorFromXPCError:(id)arg1;

- (BOOL)_geo_isXPCInterruptedError;
- (id)_geo_newXPCData;

// NSError (GEOZilchDecoder)

+ (id)zilchDecoderErrorForNoSolution;

- (id)zilchDecoderTileLoadingError;

// Image: /System/Library/PrivateFrameworks/IconServices.framework/Versions/A/IconServices

// NSError (Iconset)

+ (id)iconsetErrorWithCode:(long long)arg1 description:(id)arg2;
+ (id)iconsetErrorWithCode:(long long)arg1 format:(id)arg2;

// Image: /System/Library/PrivateFrameworks/Navigation.framework/Versions/A/Navigation

// NSError (MNExtras)

+ (id)_navigation_errorWithCode:(long long)arg1;
+ (id)_navigation_errorWithCode:(long long)arg1 userInfo:(id)arg2;

- (id)_navigation_errorCodeAsString;

// Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/Versions/A/ToneLibrary

// NSError (TLExtensions)

+ (id)tl_errorWithDomain:(id)arg1 description:(id)arg2;

- (id)tl_nonRedundantDescription;

@end