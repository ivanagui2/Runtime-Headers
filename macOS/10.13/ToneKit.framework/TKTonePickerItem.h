/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneKit.framework/Versions/A/ToneKit
 */

@interface TKTonePickerItem : TKPickerSelectableItem <TKPickerContainerItem> {
    TKTonePickerController * __parentTonePickerController;
    float  _downloadProgress;
    unsigned long long  _itemKind;
    BOOL  _needsActivityIndicator;
    BOOL  _needsDownloadProgress;
    BOOL  _needsRoomForCheckmark;
    long long  _numberOfChildren;
}

@property (setter=_setParentTonePickerController:, nonatomic, readwrite) TKTonePickerController *_parentTonePickerController;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (setter=_setDownloadProgress:, nonatomic, readwrite) float downloadProgress;
@property (atomic, readonly) unsigned long long hash;
@property (setter=_setItemKind:, nonatomic, readwrite) unsigned long long itemKind;
@property (setter=_setNeedsActivityIndicator:, nonatomic, readwrite) BOOL needsActivityIndicator;
@property (setter=_setNeedsDownloadProgress:, nonatomic, readwrite) BOOL needsDownloadProgress;
@property (setter=_setNeedsRoomForCheckmark:, nonatomic, readwrite) BOOL needsRoomForCheckmark;
@property (setter=_setNumberOfChildren:, nonatomic, readwrite) long long numberOfChildren;
@property (nonatomic, readonly) TKTonePickerSectionItem *parentSectionItem;
@property (atomic, readonly) Class superclass;

- (void).cxx_destruct;
- (void)_appendDescriptionOfAttributesToString:(id)arg1;
- (id)_parentTonePickerController;
- (void)_setDownloadProgress:(float)arg1;
- (void)_setItemKind:(unsigned long long)arg1;
- (void)_setNeedsActivityIndicator:(BOOL)arg1;
- (void)_setNeedsDownloadProgress:(BOOL)arg1;
- (void)_setNeedsRoomForCheckmark:(BOOL)arg1;
- (void)_setNumberOfChildren:(long long)arg1;
- (void)_setParentTonePickerController:(id)arg1;
- (id)childItemAtIndex:(long long)arg1;
- (float)downloadProgress;
- (unsigned long long)itemKind;
- (BOOL)needsActivityIndicator;
- (BOOL)needsDownloadProgress;
- (BOOL)needsRoomForCheckmark;
- (long long)numberOfChildren;
- (id)parentSectionItem;

@end