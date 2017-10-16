/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
 */

@interface AVMovie : AVAsset <NSCopying, NSMutableCopying> {
    AVMovieInternal * _movie;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) BOOL canContainMovieFragments;
@property (nonatomic, readonly) BOOL containsMovieFragments;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) AVMediaDataStorage *defaultMediaDataStorage;
@property (nonatomic, readonly) NSArray *tracks;

+ (void)initialize;
+ (id)movieTypes;
+ (id)movieWithData:(id)arg1 options:(id)arg2;
+ (id)movieWithURL:(id)arg1 options:(id)arg2;

- (void).cxx_destruct;
- (id)URL;
- (id)_absoluteURL;
- (id)_assetInspector;
- (id)_assetInspectorLoader;
- (Class)_classForMovieTracks;
- (Class)_classForTrackInspectors;
- (struct OpaqueFigMutableMovie { }*)_figMutableMovie;
- (struct OpaqueFigMutableMovie { }*)_figMutableMovieFromFormatReader:(struct OpaqueFigFormatReader { }*)arg1;
- (struct OpaqueFigFormatReader { }*)_formatReader;
- (id)_initWithFigAsset:(struct OpaqueFigAsset { }*)arg1;
- (id)_initWithFigError:(int)arg1 userInfo:(id)arg2;
- (id)_initWithFormatReader:(struct OpaqueFigFormatReader { }*)arg1 URL:(id)arg2 data:(id)arg3 options:(id)arg4;
- (id)_initializationOptions;
- (BOOL)_shouldPrepareToOptimizeForExclusivePlayback;
- (void)_startListeningToLoaderNotifications;
- (void)_stopListeningToLoaderNotifications;
- (BOOL)canContainMovieFragments;
- (BOOL)containsMovieFragments;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (void)dealloc;
- (id)defaultMediaDataStorage;
- (id)description;
- (BOOL)hasProtectedContent;
- (id)init;
- (id)initWithData:(id)arg1 contentType:(id)arg2 options:(id)arg3;
- (id)initWithData:(id)arg1 options:(id)arg2;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)referenceRestrictions;
- (id)trackReferences;
- (id)trackWithTrackID:(int)arg1;
- (id)tracks;
- (id)tracksWithMediaCharacteristic:(id)arg1;
- (id)tracksWithMediaType:(id)arg1;

// AVMovie (AVMovieMovieHeaderSupport)

- (BOOL)isCompatibleWithFileType:(id)arg1;
- (id)movieHeaderWithFileType:(id)arg1 error:(id*)arg2;
- (BOOL)writeMovieHeaderToURL:(id)arg1 fileType:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;

@end