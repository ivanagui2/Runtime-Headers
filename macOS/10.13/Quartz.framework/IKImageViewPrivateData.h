/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
 */

@interface IKImageViewPrivateData : NSObject {
    BOOL  _autoresizes;
    IKImageBackgroundLayer * _backgroundLayer;
    IKComposer * _composer;
    id  _delegate;
    BOOL  _doubleClickOpensEditPanel;
    BOOL  _editable;
    BOOL  _embedded;
    IKImageLayer * _imageLayer;
    BOOL  _initalizedWithCoder;
    BOOL  _initialized;
    BOOL  _isInInterfaceBuilderApp;
    BOOL  _isInInterfaceBuilderSimulator;
    BOOL  _needsToReplaceClipView;
    BOOL  _selected;
    BOOL  _supportsDragAndDrop;
    id  _trackedView;
}

@property (atomic, readwrite) BOOL autoresizes;
@property (atomic, readwrite) IKImageBackgroundLayer *backgroundLayer;
@property (atomic, readwrite) IKComposer *composer;
@property (atomic, readwrite) id delegate;
@property (atomic, readwrite) BOOL doubleClickOpensEditPanel;
@property (atomic, readwrite) BOOL editable;
@property (atomic, readwrite) BOOL embedded;
@property (atomic, readwrite) IKImageLayer *imageLayer;
@property (atomic, readwrite) BOOL initalizedWithCoder;
@property (atomic, readwrite) BOOL initialized;
@property (atomic, readwrite) BOOL isInInterfaceBuilderApp;
@property (atomic, readwrite) BOOL isInInterfaceBuilderSimulator;
@property (atomic, readwrite) BOOL needsToReplaceClipView;
@property (atomic, readwrite) BOOL selected;
@property (atomic, readwrite) BOOL supportsDragAndDrop;
@property (atomic, readwrite) id trackedView;

- (BOOL)autoresizes;
- (id)backgroundLayer;
- (id)composer;
- (id)delegate;
- (BOOL)doubleClickOpensEditPanel;
- (BOOL)editable;
- (BOOL)embedded;
- (id)imageLayer;
- (BOOL)initalizedWithCoder;
- (BOOL)initialized;
- (BOOL)isInInterfaceBuilderApp;
- (BOOL)isInInterfaceBuilderSimulator;
- (BOOL)needsToReplaceClipView;
- (BOOL)selected;
- (void)setAutoresizes:(BOOL)arg1;
- (void)setBackgroundLayer:(id)arg1;
- (void)setComposer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDoubleClickOpensEditPanel:(BOOL)arg1;
- (void)setEditable:(BOOL)arg1;
- (void)setEmbedded:(BOOL)arg1;
- (void)setImageLayer:(id)arg1;
- (void)setInitalizedWithCoder:(BOOL)arg1;
- (void)setInitialized:(BOOL)arg1;
- (void)setIsInInterfaceBuilderApp:(BOOL)arg1;
- (void)setIsInInterfaceBuilderSimulator:(BOOL)arg1;
- (void)setNeedsToReplaceClipView:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setSupportsDragAndDrop:(BOOL)arg1;
- (void)setTrackedView:(id)arg1;
- (BOOL)supportsDragAndDrop;
- (id)trackedView;

@end
