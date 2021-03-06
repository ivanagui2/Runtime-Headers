/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
 */

@interface AVMutableMovieTrack : AVMovieTrack {
    AVMutableMovieTrackInternal * _mutableMovieTrackInternal;
}

@property (nonatomic, readwrite) long long alternateGroupID;
@property (getter=isEnabled, nonatomic, readwrite) BOOL enabled;
@property (nonatomic, readonly) NSArray *formatDescriptions;
@property (nonatomic, readonly) BOOL hasProtectedContent;
@property (nonatomic, readwrite, copy) AVMediaDataStorage *mediaDataStorage;
@property (nonatomic, readwrite, copy) NSArray *metadata;
@property (getter=isModified, nonatomic, readwrite) BOOL modified;
@property (nonatomic, readwrite, copy) NSURL *sampleReferenceBaseURL;
@property (nonatomic, readwrite) int timescale;

+ (id)trackWithTrackID:(int)arg1 forMovie:(id)arg2;

- (void).cxx_destruct;
- (struct OpaqueFigAssetTrack { }*)_figAssetTrack;
- (struct OpaqueFigMutableMovie { }*)_figMutableMovie;
- (void)_setSize:(struct CGSize { double x1; double x2; })arg1 forProperty:(struct __CFString { }*)arg2;
- (void)_setString:(id)arg1 forProperty:(struct __CFString { }*)arg2;
- (struct CGSize { double x1; double x2; })_sizeForProperty:(struct __CFString { }*)arg1;
- (id)_stringForProperty:(struct __CFString { }*)arg1;
- (long long)alternateGroupID;
- (struct CGSize { double x1; double x2; })cleanApertureDimensions;
- (void)dealloc;
- (id)description;
- (struct CGSize { double x1; double x2; })dimensions;
- (struct CGSize { double x1; double x2; })encodedPixelsDimensions;
- (id)extendedLanguageTag;
- (BOOL)hasProtectedContent;
- (id)initWithTrackID:(int)arg1 forMovie:(id)arg2;
- (BOOL)isEnabled;
- (BOOL)isModified;
- (id)languageCode;
- (long long)layer;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(id)arg2;
- (id)locale;
- (id)mediaDataStorage;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })mediaDecodeTimeRange;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })mediaPresentationTimeRange;
- (struct CGSize { double x1; double x2; })naturalSize;
- (long long)preferredMediaChunkAlignment;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })preferredMediaChunkDuration;
- (long long)preferredMediaChunkSize;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })preferredTransform;
- (float)preferredVolume;
- (struct CGSize { double x1; double x2; })productionApertureDimensions;
- (id)sampleReferenceBaseURL;
- (void)setAlternateGroupID:(long long)arg1;
- (void)setCleanApertureDimensions:(struct CGSize { double x1; double x2; })arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setEncodedPixelsDimensions:(struct CGSize { double x1; double x2; })arg1;
- (void)setExtendedLanguageTag:(id)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setLayer:(long long)arg1;
- (void)setMediaDataStorage:(id)arg1;
- (void)setModified:(BOOL)arg1;
- (void)setNaturalSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPreferredMediaChunkAlignment:(long long)arg1;
- (void)setPreferredMediaChunkDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setPreferredMediaChunkSize:(long long)arg1;
- (void)setPreferredTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setPreferredVolume:(float)arg1;
- (void)setProductionApertureDimensions:(struct CGSize { double x1; double x2; })arg1;
- (void)setSampleReferenceBaseURL:(id)arg1;
- (void)setTimescale:(int)arg1;
- (long long)statusOfValueForKey:(id)arg1 error:(id*)arg2;
- (int)timescale;
- (int)trackID;

// AVMutableMovieTrack (AVMutableMovieTrackFormatDescriptions)

- (void)replaceFormatDescription:(struct opaqueCMFormatDescription { }*)arg1 withFormatDescription:(struct opaqueCMFormatDescription { }*)arg2;

// AVMutableMovieTrack (AVMutableMovieTrackMetadataEditing)

- (id)availableMetadataFormats;
- (id)metadata;
- (id)metadataForFormat:(id)arg1;
- (void)setMetadata:(id)arg1;

// AVMutableMovieTrack (AVMutableMovieTrackSampleLevelEditing)

- (BOOL)appendSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 decodeTime:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg2 presentationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg3 error:(id*)arg4;
- (BOOL)insertMediaTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 intoTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2;

// AVMutableMovieTrack (AVMutableMovieTrackTrackAssociations)

- (void)addTrackAssociationToTrack:(id)arg1 type:(id)arg2;
- (void)removeTrackAssociationToTrack:(id)arg1 type:(id)arg2;

// AVMutableMovieTrack (AVMutableMovieTrackTrackLevelEditing)

- (void)insertEmptyTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (BOOL)insertTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 ofTrack:(id)arg2 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 copySampleData:(BOOL)arg4 error:(id*)arg5;
- (void)removeTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)scaleTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 toDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;

// AVMutableMovieTrack (AVMutableMovieTrack_FormatDescriptions)

- (id)formatDescriptions;
- (BOOL)isCompatibleWithFormatDescription:(struct opaqueCMFormatDescription { }*)arg1;

// AVMutableMovieTrack (AVMutableMovieTrack_SampleLevelEditingPrivate)

- (BOOL)appendMediaData:(id)arg1 dataOffset:(long long*)arg2;

@end
