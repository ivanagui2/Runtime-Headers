/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/Versions/A/SceneKit
 */

@interface SCNMetalLayer : CAMetalLayer <SCNSceneRenderer, SCNTechniqueSupport> {
    SCNDisplayLink * _displayLink;
    BOOL  _drawForJittering;
    SCNJitterer * _jitterer;
    double  _lastRenderedTime;
    double  _lastUpdate;
    long long  _preferredFramePerSeconds;
    SCNRenderer * _renderer;
    BOOL  _rendersIntoMaterial;
    SCNScene * _scene;
    BOOL  _syncTimeWithCoreAnimation;
}

@property (nonatomic, readwrite) unsigned long long antialiasingMode;
@property (nonatomic, readonly) AVAudioEngine *audioEngine;
@property (nonatomic, readonly) AVAudioEnvironmentNode *audioEnvironmentNode;
@property (nonatomic, readwrite, retain) SCNNode *audioListener;
@property (nonatomic, readwrite) BOOL autoenablesDefaultLighting;
@property (nonatomic, readonly) unsigned long long colorPixelFormat;
@property (nonatomic, readonly) <MTLCommandQueue> *commandQueue;
@property (nonatomic, readonly) void*context;
@property (nonatomic, readonly) <MTLRenderCommandEncoder> *currentRenderCommandEncoder;
@property (nonatomic, readwrite) double currentTime;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (nonatomic, readwrite) unsigned long long debugOptions;
@property (nonatomic, readwrite) <SCNSceneRendererDelegate> *delegate;
@property (nonatomic, readonly) unsigned long long depthPixelFormat;
@property (atomic, readonly, copy) NSString *description;
@property (nonatomic, readonly) <MTLDevice> *device;
@property (atomic, readonly) unsigned long long hash;
@property (getter=isJitteringEnabled, nonatomic, readwrite) BOOL jitteringEnabled;
@property (nonatomic, readwrite) BOOL loops;
@property (nonatomic, readwrite, retain) SKScene *overlaySKScene;
@property (getter=isPlaying, atomic, readwrite) BOOL playing;
@property (nonatomic, readwrite, retain) SCNNode *pointOfView;
@property (nonatomic, readonly) unsigned long long renderingAPI;
@property (nonatomic, readwrite, retain) SCNScene *scene;
@property (nonatomic, readwrite) double sceneTime;
@property (nonatomic, readwrite) BOOL showsStatistics;
@property (nonatomic, readonly) unsigned long long stencilPixelFormat;
@property (atomic, readonly) Class superclass;
@property (nonatomic, readwrite) BOOL syncTimeWithCoreAnimation;
@property (nonatomic, readwrite, copy) SCNTechnique *technique;

+ (id)_kvoKeysForwardedToRenderer;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;

- (struct _CGLContextObject { struct __GLIContextRec {} *x1; struct __GLIFunctionDispatchRec { int (*x_2_1_1)(); int (*x_2_1_2)(); int (*x_2_1_3)(); int (*x_2_1_4)(); int (*x_2_1_5)(); int (*x_2_1_6)(); int (*x_2_1_7)(); int (*x_2_1_8)(); int (*x_2_1_9)(); int (*x_2_1_10)(); int (*x_2_1_11)(); int (*x_2_1_12)(); int (*x_2_1_13)(); int (*x_2_1_14)(); int (*x_2_1_15)(); int (*x_2_1_16)(); int (*x_2_1_17)(); int (*x_2_1_18)(); int (*x_2_1_19)(); int (*x_2_1_20)(); int (*x_2_1_21)(); int (*x_2_1_22)(); int (*x_2_1_23)(); int (*x_2_1_24)(); int (*x_2_1_25)(); int (*x_2_1_26)(); int (*x_2_1_27)(); int (*x_2_1_28)(); int (*x_2_1_29)(); int (*x_2_1_30)(); int (*x_2_1_31)(); int (*x_2_1_32)(); int (*x_2_1_33)(); int (*x_2_1_34)(); int (*x_2_1_35)(); int (*x_2_1_36)(); int (*x_2_1_37)(); int (*x_2_1_38)(); int (*x_2_1_39)(); int (*x_2_1_40)(); int (*x_2_1_41)(); int (*x_2_1_42)(); int (*x_2_1_43)(); int (*x_2_1_44)(); int (*x_2_1_45)(); int (*x_2_1_46)(); int (*x_2_1_47)(); int (*x_2_1_48)(); int (*x_2_1_49)(); int (*x_2_1_50)(); int (*x_2_1_51)(); int (*x_2_1_52)(); int (*x_2_1_53)(); int (*x_2_1_54)(); int (*x_2_1_55)(); } x2; }*)CGLContext;
- (void)SCN_displayLinkCallback:(double)arg1;
- (id)_authoringEnvironment;
- (BOOL)_canJitter;
- (void)_cancelJitterRedisplay;
- (BOOL)_checkAndUpdateDisplayLinkStateIfNeeded;
- (void)_drawAtTime:(double)arg1;
- (BOOL)_isGLLayerBacked;
- (void)_jitterRedisplayWithContext:(struct _CGLContextObject { struct __GLIContextRec {} *x1; struct __GLIFunctionDispatchRec { int (*x_2_1_1)(); int (*x_2_1_2)(); int (*x_2_1_3)(); int (*x_2_1_4)(); int (*x_2_1_5)(); int (*x_2_1_6)(); int (*x_2_1_7)(); int (*x_2_1_8)(); int (*x_2_1_9)(); int (*x_2_1_10)(); int (*x_2_1_11)(); int (*x_2_1_12)(); int (*x_2_1_13)(); int (*x_2_1_14)(); int (*x_2_1_15)(); int (*x_2_1_16)(); int (*x_2_1_17)(); int (*x_2_1_18)(); int (*x_2_1_19)(); int (*x_2_1_20)(); int (*x_2_1_21)(); int (*x_2_1_22)(); int (*x_2_1_23)(); int (*x_2_1_24)(); int (*x_2_1_25)(); int (*x_2_1_26)(); int (*x_2_1_27)(); int (*x_2_1_28)(); int (*x_2_1_29)(); int (*x_2_1_30)(); int (*x_2_1_31)(); int (*x_2_1_32)(); int (*x_2_1_33)(); int (*x_2_1_34)(); int (*x_2_1_35)(); int (*x_2_1_36)(); int (*x_2_1_37)(); int (*x_2_1_38)(); int (*x_2_1_39)(); int (*x_2_1_40)(); int (*x_2_1_41)(); int (*x_2_1_42)(); int (*x_2_1_43)(); int (*x_2_1_44)(); int (*x_2_1_45)(); int (*x_2_1_46)(); int (*x_2_1_47)(); int (*x_2_1_48)(); int (*x_2_1_49)(); int (*x_2_1_50)(); int (*x_2_1_51)(); int (*x_2_1_52)(); int (*x_2_1_53)(); int (*x_2_1_54)(); int (*x_2_1_55)(); } x2; }*)arg1;
- (void)_sceneDidUpdate:(id)arg1;
- (BOOL)_showsAuthoringEnvironment;
- (BOOL)_supportsJitteringSyncRedraw;
- (void)_systemTimeAnimationStarted:(id)arg1;
- (unsigned long long)antialiasingMode;
- (id)audioEngine;
- (id)audioEnvironmentNode;
- (id)audioListener;
- (BOOL)autoenablesDefaultLighting;
- (BOOL)canDrawConcurrently;
- (unsigned long long)colorPixelFormat;
- (id)commandQueue;
- (void)commonInit;
- (id)contentLayer;
- (void*)context;
- (id)currentRenderCommandEncoder;
- (id)currentRenderPassDescriptor;
- (double)currentTime;
- (void)dealloc;
- (unsigned long long)debugOptions;
- (id)delegate;
- (unsigned long long)depthPixelFormat;
- (id)description;
- (id)device;
- (void)display;
- (id)displayLink;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 options:(id)arg2;
- (id)hitTestWithSegmentFromPoint:(struct SCNVector3 { double x1; double x2; double x3; })arg1 toPoint:(struct SCNVector3 { double x1; double x2; double x3; })arg2 options:(id)arg3;
- (id)init;
- (id)initWithLayer:(id)arg1;
- (BOOL)isJitteringEnabled;
- (BOOL)isNodeInsideFrustum:(id)arg1 withPointOfView:(id)arg2;
- (BOOL)isPlaying;
- (id)layer;
- (BOOL)loops;
- (id)nodesInsideFrustumWithPointOfView:(id)arg1;
- (id)overlaySKScene;
- (void)pause;
- (void)pause:(id)arg1;
- (void)pauseDisplayLink;
- (void)play;
- (void)play:(id)arg1;
- (id)pointOfCulling;
- (id)pointOfView;
- (long long)preferredFramesPerSecond;
- (BOOL)prepareObject:(id)arg1 shouldAbortBlock:(id)arg2;
- (void)prepareObjects:(id)arg1 withCompletionHandler:(id)arg2;
- (void)presentScene:(id)arg1 withTransition:(id)arg2 incomingPointOfView:(id)arg3 completionHandler:(id)arg4;
- (struct SCNVector3 { double x1; double x2; double x3; })projectPoint:(struct SCNVector3 { double x1; double x2; double x3; })arg1;
- (void)projectPoints:(struct SCNVector3 { double x1; double x2; double x3; }*)arg1 count:(unsigned long long)arg2;
- (id)renderer;
- (id)rendererOptions;
- (unsigned long long)renderingAPI;
- (BOOL)rendersIntoMaterial;
- (void)resumeDisplayLink;
- (id)scene;
- (double)sceneTime;
- (id)scn_backingLayer;
- (BOOL)scn_inLiveResize;
- (void)setAntialiasingMode:(unsigned long long)arg1;
- (void)setAudioListener:(id)arg1;
- (void)setAutoenablesDefaultLighting:(BOOL)arg1;
- (void)setBackgroundColor:(struct CGColor { }*)arg1;
- (void)setCurrentTime:(double)arg1;
- (void)setDebugOptions:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setJitteringEnabled:(BOOL)arg1;
- (void)setLoops:(BOOL)arg1;
- (void)setNeedsDisplay;
- (void)setOverlaySKScene:(id)arg1;
- (void)setPlaying:(BOOL)arg1;
- (void)setPointOfCulling:(id)arg1;
- (void)setPointOfView:(id)arg1;
- (void)setPreferredFramesPerSecond:(long long)arg1;
- (void)setRenderer:(id)arg1;
- (void)setRendersIntoMaterial:(BOOL)arg1;
- (void)setScene:(id)arg1;
- (void)setSceneTime:(double)arg1;
- (void)setShowsStatistics:(BOOL)arg1;
- (void)setSyncTimeWithCoreAnimation:(BOOL)arg1;
- (void)setTechnique:(id)arg1;
- (void)set_showsAuthoringEnvironment:(BOOL)arg1;
- (BOOL)showsStatistics;
- (unsigned long long)stencilPixelFormat;
- (void)stop;
- (void)stop:(id)arg1;
- (BOOL)syncTimeWithCoreAnimation;
- (id)technique;
- (struct SCNVector3 { double x1; double x2; double x3; })unprojectPoint:(struct SCNVector3 { double x1; double x2; double x3; })arg1;

@end