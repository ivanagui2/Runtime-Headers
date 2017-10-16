/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
 */

@interface AVPlayerMediaSelectionCriteria : NSObject {
    void * _criteriaInternal;
}

@property (nonatomic, readonly) NSArray *preferredLanguages;
@property (nonatomic, readonly) NSArray *preferredMediaCharacteristics;

- (void)dealloc;
- (id)description;
- (void)finalize;
- (id)init;
- (id)initWithPreferredLanguages:(id)arg1 preferredMediaCharacteristics:(id)arg2;
- (id)initWithPreferredLanguages:(id)arg1 preferredMediaCharacteristics:(id)arg2 fallbackPreferredLanguages:(id)arg3 fallbackPreferredMediaCharacteristics:(id)arg4 captionDisplayType:(long long)arg5;
- (id)initWithPreferredLanguages:(id)arg1 preferredMediaCharacteristics:(id)arg2 preferredMediaSubTypes:(id)arg3 precludedMediaSubTypes:(id)arg4;
- (id)initWithPreferredLanguages:(id)arg1 preferredMediaCharacteristics:(id)arg2 preferredMediaSubTypes:(id)arg3 precludedMediaSubTypes:(id)arg4 preferMultichannelAudio:(BOOL)arg5 precludeMultichannelAudio:(BOOL)arg6;
- (BOOL)precludeMultichannelAudio;
- (id)precludedMediaSubTypes;
- (BOOL)preferMultichannelAudio;
- (id)preferredLanguages;
- (id)preferredMediaCharacteristics;
- (id)preferredMediaSubTypes;

// AVPlayerMediaSelectionCriteria (FigDictionaryRepresentation)

- (id)figDictionary;
- (id)initWithFigDictionary:(id)arg1;

@end