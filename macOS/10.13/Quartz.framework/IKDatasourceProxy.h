/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
 */

@interface IKDatasourceProxy : NSObject <IKImageProxy> {
    id  _proxySource;
    struct __CFDictionary { } * _quicklookOptions;
    id  _representation;
    NSString * _representationType;
    NSString * _uti;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite, retain) id proxySource;
@property (atomic, readwrite) struct __CFDictionary { }*quicklookOptions;
@property (atomic, readwrite, retain) id representation;
@property (atomic, readwrite, retain) NSString *representationType;
@property (atomic, readonly) Class superclass;
@property (atomic, readwrite, retain) NSString *uti;

+ (id)_noQuickLookFallbackImageWithRepresentation:(id)arg1 source:(id)arg2;
+ (id)_proxyImageWithType:(id)arg1 representation:(id)arg2 source:(id)arg3;
+ (id)_thumbnailWithRepresentation:(id)arg1 type:(id)arg2 uti:(id)arg3 quickLookOptions:(id)arg4 proxySource:(id)arg5 size:(double)arg6 antialiased:(BOOL)arg7 quality:(int)arg8;
+ (id)datasourceProxy;
+ (BOOL)representationTypeSupportsConcurrentLoading:(id)arg1;

- (void)dealloc;
- (void)finalize;
- (BOOL)isVectorial;
- (id)proxyData;
- (int)proxyDataFormat;
- (id)proxyImage;
- (id)proxyReferenceInstance;
- (struct CGSize { double x1; double x2; })proxySize;
- (id)proxySource;
- (struct __CFDictionary { }*)quicklookOptions;
- (id)representation;
- (id)representationType;
- (void)setProxySource:(id)arg1;
- (void)setQuicklookOptions:(struct __CFDictionary { }*)arg1;
- (void)setRepresentation:(id)arg1;
- (void)setRepresentationType:(id)arg1;
- (void)setUti:(id)arg1;
- (BOOL)supportConcurrentLoading;
- (id)thumbnailWithSize:(double)arg1 antialiased:(BOOL)arg2 quality:(int)arg3;
- (id)uti;

@end