/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
 */

@interface IKImageEditPanelPrivateData : NSObject {
    IKImageEditFrame * _backgroundView;
    IKImageEditView * _currentTab;
    id  _dataSource;
    BOOL  _dataSourceIsIKImageView;
    IKImageEditDSHandler * _dsHandler;
    BOOL  _hasAdjustMode;
    BOOL  _hasDetailsMode;
    BOOL  _hasEffectsMode;
    id  _imageView;
    struct CGPoint { 
        double x; 
        double y; 
    }  _mouseDownLocation;
    BOOL  _mouseDownMovesWindow;
    IKTabView * _tabView;
}

@property (atomic, readwrite) IKImageEditFrame *backgroundView;
@property (atomic, readwrite) IKImageEditView *currentTab;
@property (atomic, readwrite) id dataSource;
@property (atomic, readwrite) BOOL dataSourceIsIKImageView;
@property (atomic, readwrite) IKImageEditDSHandler *dsHandler;
@property (atomic, readwrite) BOOL hasAdjustMode;
@property (atomic, readwrite) BOOL hasDetailsMode;
@property (atomic, readwrite) BOOL hasEffectsMode;
@property (atomic, readwrite) id imageView;
@property (atomic, readwrite) struct CGPoint { double x1; double x2; } mouseDownLocation;
@property (atomic, readwrite) BOOL mouseDownMovesWindow;
@property (atomic, readwrite) IKTabView *tabView;

- (id)backgroundView;
- (id)currentTab;
- (id)dataSource;
- (BOOL)dataSourceIsIKImageView;
- (id)dsHandler;
- (BOOL)hasAdjustMode;
- (BOOL)hasDetailsMode;
- (BOOL)hasEffectsMode;
- (id)imageView;
- (struct CGPoint { double x1; double x2; })mouseDownLocation;
- (BOOL)mouseDownMovesWindow;
- (void)setBackgroundView:(id)arg1;
- (void)setCurrentTab:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDataSourceIsIKImageView:(BOOL)arg1;
- (void)setDsHandler:(id)arg1;
- (void)setHasAdjustMode:(BOOL)arg1;
- (void)setHasDetailsMode:(BOOL)arg1;
- (void)setHasEffectsMode:(BOOL)arg1;
- (void)setImageView:(id)arg1;
- (void)setMouseDownLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setMouseDownMovesWindow:(BOOL)arg1;
- (void)setTabView:(id)arg1;
- (id)tabView;

@end
