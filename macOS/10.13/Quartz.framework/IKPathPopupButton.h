/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
 */

@interface IKPathPopupButton : NSPopUpButton {
    SEL  _actionApp;
    SEL  _actionDir;
    BOOL  _canChooseApplications;
    BOOL  _canChooseDirectories;
    BOOL  _canChooseImageCaptureTools;
    BOOL  _canChooseImageCaptureWorkflows;
    NSMutableArray * _defaultApps;
    NSMutableArray * _defaultDirs;
    BOOL  _enableAutomatorActions;
    BOOL  _enableICTasks;
    BOOL  _enableMakeSubFoldersPerCamera;
    BOOL  _hotplugActionMode;
    NSMutableArray * _icApps;
    NSMutableArray * _icWorkflows;
    BOOL  _includeAutoDownloader;
    BOOL  _includeMoviesAsStandardDirectory;
    long long  _lastSelection;
    BOOL  _makeSubFoldersPerCamera;
    long long  _selectedPathType;
    NSMutableArray * _userApps;
    NSMutableArray * _userDirs;
}

@property (atomic, readwrite) SEL actionApp;
@property (atomic, readwrite) SEL actionDir;
@property (nonatomic, readwrite) BOOL canChooseApplications;
@property (nonatomic, readwrite) BOOL canChooseDirectories;
@property (nonatomic, readwrite) BOOL canChooseImageCaptureTools;
@property (nonatomic, readwrite) BOOL canChooseImageCaptureWorkflows;
@property (atomic, readwrite, retain) NSMutableArray *defaultApps;
@property (atomic, readwrite, retain) NSMutableArray *defaultDirs;
@property (nonatomic, readwrite) BOOL enableMakeSubFoldersPerCamera;
@property (nonatomic, readwrite) BOOL hotplugActionMode;
@property (atomic, readwrite, retain) NSMutableArray *icApps;
@property (atomic, readwrite, retain) NSMutableArray *icWorkflows;
@property (nonatomic, readwrite) BOOL includeAutoDownloader;
@property (nonatomic, readwrite) BOOL includeMoviesAsStandardDirectory;
@property (atomic, readwrite) long long lastSelection;
@property (atomic, readwrite) BOOL makeSubFoldersPerCamera;
@property (nonatomic, readwrite, copy) NSString *path;
@property (atomic, readwrite) long long selectedPathType;
@property (nonatomic, readwrite) NSURL *url;
@property (atomic, readwrite, retain) NSMutableArray *userApps;
@property (atomic, readwrite, retain) NSMutableArray *userDirs;

+ (id)sampleFileTypes;

- (SEL)actionApp;
- (SEL)actionDir;
- (void)addApplication:(id)arg1;
- (void)addFolder:(id)arg1;
- (void)addItemWithPath:(id)arg1 selector:(SEL)arg2 tag:(long long)arg3;
- (void)addPath:(id)arg1 toArray:(id)arg2 sibling:(id)arg3 max:(long long)arg4;
- (void)awakeFromNib;
- (BOOL)canChooseApplications;
- (BOOL)canChooseDirectories;
- (BOOL)canChooseImageCaptureTools;
- (BOOL)canChooseImageCaptureWorkflows;
- (void)choose:(id)arg1;
- (id)defaultApps;
- (id)defaultDirs;
- (unsigned long long)draggingEntered:(id)arg1;
- (BOOL)enableMakeSubFoldersPerCamera;
- (void)forwardInvocation:(id)arg1;
- (BOOL)hotplugActionMode;
- (id)icApps;
- (id)icWorkflows;
- (BOOL)includeAutoDownloader;
- (BOOL)includeMoviesAsStandardDirectory;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 pullsDown:(BOOL)arg2;
- (long long)lastSelection;
- (BOOL)makeSubFoldersPerCamera;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)path;
- (BOOL)performDragOperation:(id)arg1;
- (void)popupWillPopup:(id)arg1;
- (void)pushSelection;
- (void)readjust;
- (void)rebuildItems;
- (void)restorePaths;
- (void)restoreSelectedTag;
- (void)savePaths;
- (void)saveSelectedTag;
- (void)selectApp:(id)arg1;
- (void)selectFolder:(id)arg1;
- (void)selectItemWithRepresentedObject:(id)arg1;
- (void)selectWorkflow:(id)arg1;
- (long long)selectedPathType;
- (void)setAction:(SEL)arg1;
- (void)setActionApp:(SEL)arg1;
- (void)setActionDir:(SEL)arg1;
- (void)setCanChooseApplications:(BOOL)arg1;
- (void)setCanChooseDirectories:(BOOL)arg1;
- (void)setCanChooseImageCaptureTools:(BOOL)arg1;
- (void)setCanChooseImageCaptureWorkflows:(BOOL)arg1;
- (void)setDefaultApps:(id)arg1;
- (void)setDefaultDirs:(id)arg1;
- (void)setEnableMakeSubFoldersPerCamera:(BOOL)arg1;
- (void)setHotplugActionMode:(BOOL)arg1;
- (void)setIcApps:(id)arg1;
- (void)setIcWorkflows:(id)arg1;
- (void)setIncludeAutoDownloader:(BOOL)arg1;
- (void)setIncludeMoviesAsStandardDirectory:(BOOL)arg1;
- (void)setLastSelection:(long long)arg1;
- (void)setMakeSubFoldersPerCamera:(BOOL)arg1;
- (void)setPath:(id)arg1;
- (void)setSelectedPathType:(long long)arg1;
- (void)setUrl:(id)arg1;
- (void)setUserApps:(id)arg1;
- (void)setUserDirs:(id)arg1;
- (void)setUserSelectedURL:(id)arg1;
- (void)setup;
- (void)setupGroup:(id)arg1 base:(long long)arg2 selector:(SEL)arg3;
- (void)subFolder:(id)arg1;
- (id)url;
- (id)userApps;
- (id)userDirs;

@end
