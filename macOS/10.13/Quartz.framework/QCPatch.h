/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCPatch : GFGraph {
    unsigned long long  _activeCount;
    QCBooleanPort * _enableInput;
    BOOL  _enabled;
    unsigned long long  _executionFlags;
    struct _QCPatchExecutionInfo { double x1; unsigned long long x2; double x3; double x4; id x5; BOOL x6; } * _executionInfo;
    int  _executionMode;
    void * _observationInfo;
    id  _proExtension;
    QCRenderState * _renderState;
    QCPatchRenderingInfo * _renderingInfo;
    QCRenderingManager * _renderingManager;
    QCNumberPort * _timeInput;
    int  _timebase;
    double  _unused31;
    unsigned long long  _unused32;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (void)initialize;

- (void)applyFunctionOnSubpatches:(int (*)arg1 context:(void*)arg2 recursive:(BOOL)arg3;
- (id)consumerSubpatches;
- (id)customInputPorts;
- (id)customOutputPorts;
- (unsigned long long)orderForConsumerSubpatch:(id)arg1;
- (void)setOrder:(unsigned long long)arg1 forConsumerSubpatch:(id)arg2;
- (void)setTimebase:(int)arg1;
- (id)systemInputPorts;
- (id)systemOutputPorts;
- (int)timebase;

// QCPatch (Customization)

+ (BOOL)allowsSubpatchesWithIdentifier:(id)arg1;
+ (id)cachedStateArrays;
+ (int)executionModeWithIdentifier:(id)arg1;
+ (BOOL)isSafe;
+ (id)serializedStateKeysWithIdentifier:(id)arg1;
+ (id)stateArrays;
+ (id)stateKeysWithIdentifier:(id)arg1;
+ (BOOL)supportsOptimizedExecutionForIdentifier:(id)arg1;
+ (int)timeModeWithIdentifier:(id)arg1;
+ (BOOL)usesLocalContextForIdentifier:(id)arg1;

- (void)cleanup:(id)arg1;
- (void)disable:(id)arg1;
- (void)enable:(id)arg1;
- (BOOL)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3;
- (void)invalidateDodForSubpatches;
- (double)nextExecutionTime:(id)arg1 time:(double)arg2 arguments:(id)arg3;
- (double)nextExecutionTimeForSubpatches:(id)arg1 time:(double)arg2 arguments:(id)arg3;
- (void)receiveMessage:(id)arg1 name:(id)arg2 attributes:(id)arg3;
- (id)serializedValueForStateKey:(id)arg1;
- (void)setSerializedValue:(id)arg1 forStateKey:(id)arg2;
- (BOOL)setup:(id)arg1;

// QCPatch (Execution)

- (void)abortExecution;
- (BOOL)isExecutionSuspended;
- (void)resumeExecution;
- (void)suspendExecution;

// QCPatch (Extensions)

+ (id)validateResourceURL:(id)arg1 withOptions:(id)arg2;

- (void)_drawDirtyRect;
- (BOOL)beginLocalContext;
- (id)dataWithContentsOfURL:(id)arg1 error:(id*)arg2;
- (BOOL)debuggingMode;
- (void)endLocalContext;
- (BOOL)executeSubpatches:(double)arg1 arguments:(id)arg2;
- (BOOL)inSafeMode;
- (id)safeURLFromString:(id)arg1;
- (id)safeURLFromURL:(id)arg1;
- (void)setCustomizedName:(id)arg1;
- (void)setForceInputsUpdate;
- (void)setNeedsExecution;
- (BOOL)shouldAbortExecution;
- (void)updateTimebase:(int)arg1;

// QCPatch (File)

+ (BOOL)canInstantiateWithFile:(id)arg1;
+ (id)instantiateWithFile:(id)arg1;

// QCPatch (Override)

+ (id)_keyFromName:(id)arg1;
+ (Class)_listClass;
+ (Class)baseClass;
+ (Class)connectionClass;
+ (Class)nodeClassDescriptionClass;
+ (Class)proxyPortClass;
+ (BOOL)shouldLoadAttributes;

- (id)_baseKey;
- (void)_logMessage:(id)arg1;
- (BOOL)addNode:(id)arg1 forKey:(id)arg2;
- (BOOL)canAddNode:(id)arg1;
- (BOOL)canCreateConnectionFromPort:(id)arg1 toPort:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createConnectionFromPort:(id)arg1 toPort:(id)arg2 forKey:(id)arg3;
- (id)createInputPortWithArguments:(id)arg1 forKey:(id)arg2;
- (id)createOutputPortWithArguments:(id)arg1 forKey:(id)arg2;
- (id)createProxyPortWithOriginalPort:(id)arg1 forKey:(id)arg2;
- (id)customInputPorts;
- (id)customOutputPorts;
- (void)dealloc;
- (void)deleteConnectionForKey:(id)arg1;
- (void)deleteInputPortForKey:(id)arg1;
- (void)deleteOutputPortForKey:(id)arg1;
- (void)deleteProxyPortForKey:(id)arg1;
- (int)directionForPort:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)finalize;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (void)nodeDidAddToGraph:(id)arg1;
- (void*)observationInfo;
- (id)proxyPortForOriginalPort:(id)arg1;
- (void)removeNodeForKey:(id)arg1;
- (void)setInputPortOrder:(unsigned long long)arg1 forKey:(id)arg2;
- (void)setNilValueForKey:(id)arg1;
- (void)setObservationInfo:(void*)arg1;
- (void)setOutputPortOrder:(unsigned long long)arg1 forKey:(id)arg2;
- (BOOL)setState:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)state;
- (void)stateUpdated;
- (id)valueForKey:(id)arg1;

// QCPatch (Private)

+ (BOOL)setShouldLoadAttributes:(BOOL)arg1;

- (void)_QCArrayResetSize:(id)arg1 newSize:(unsigned long long)arg2;
- (BOOL)__execute:(double)arg1 arguments:(id)arg2;
- (BOOL)__isPatchInUse:(id)arg1;
- (void)_activate;
- (unsigned long long)_activeCount;
- (int)_checkExecutionMode;
- (void)_cleanup;
- (void)_deactivate;
- (void)_disable;
- (void)_enable;
- (id)_enableInput;
- (BOOL)_enabled;
- (BOOL)_execute:(double)arg1 arguments:(id)arg2;
- (BOOL)_executeSubpatches:(double)arg1 arguments:(id)arg2;
- (int)_executionFlags;
- (int)_executionMode;
- (void)_forwardRenderingFlag;
- (void)_invalidateDodForSubpatches;
- (void)_invalidateExecutionMode;
- (void)_invalidateTimeMode;
- (double)_nextExecutionTime;
- (double)_nextExecutionTime:(double)arg1 arguments:(id)arg2;
- (BOOL)_renderAtTime:(double)arg1 arguments:(id)arg2;
- (id)_renderState;
- (id)_renderingInfo;
- (void)_resetExecution;
- (void)_resetExecutionFlags;
- (BOOL)_setup:(id)arg1 state:(id)arg2;
- (id)performanceCounters;

// QCPatch (PrivateRuntime)

- (BOOL)prerenderAtTime:(double)arg1 imageSizeHint:(struct CGSize { double x1; double x2; })arg2 arguments:(id)arg3;

// QCPatch (QCInspector)

+ (Class)inspectorClassWithIdentifier:(id)arg1;
+ (id)inspectorNibNameWithIdentifier:(id)arg1;

// QCPatch (QCNodeManager)

+ (id)_privateAttributesWithIdentifier:(id)arg1;
+ (id)_publicAttributesWithIdentifier:(id)arg1;

// QCPatch (QCOpenGLContext)

- (BOOL)checkForGLError;

// QCPatch (QCProFX)

+ (BOOL)getMatrixFrom:(id)arg1 toPatch:(id)arg2 matrix:(double*)arg3 ignoreWithin:(id)arg4 includeFromTransform:(bool)arg5;

- (BOOL)getMatrix:(double*)arg1;
- (id)getNthInputImagePort:(unsigned int)arg1;
- (id)getNthInputPort:(unsigned int)arg1;
- (unsigned long long)getNumberOfInputImagePorts;
- (unsigned long long)getNumberOfInputPorts;
- (double*)getTransform;
- (struct { unsigned char x1[16]; })md5WithTime:(double)arg1 arguments:(id)arg2;
- (BOOL)patchIsInMacro:(id)arg1;
- (BOOL)patchSetsTransform;
- (void)setPatchSetsTransform:(BOOL)arg1;

// QCPatch (Registry)

+ (id)createPatchWithName:(id)arg1;
+ (void)loadPlugInAtPath:(id)arg1;
+ (void)loadPlugInsInFolder:(id)arg1;
+ (void)loadPlugInsInLibrary:(id)arg1;
+ (id)patchAttributesWithName:(id)arg1;
+ (id)patchManager;
+ (id)patchNames;
+ (id)patchWithName:(id)arg1;
+ (void)registerPatch:(id)arg1 withName:(id)arg2;

// QCPatch (Runtime)

- (BOOL)isPausedRendering;
- (BOOL)isRendering;
- (double)nextExecutionTime:(double)arg1 arguments:(id)arg2;
- (void)pauseRendering;
- (BOOL)render:(double)arg1 arguments:(id)arg2;
- (id)renderingContext;
- (int)renderingFlags;
- (void)resumeRendering;
- (void)setRenderingFlags:(int)arg1;
- (BOOL)startRendering:(id)arg1 options:(id)arg2;
- (void)stopRendering;

// QCPatch (Search)

- (id)findSubpatchesWithName:(id)arg1 options:(unsigned long long)arg2;

// QCPatch (StateKeys)

- (BOOL)boolForStateKey:(id)arg1;
- (double)doubleForStateKey:(id)arg1;
- (long long)integerForStateKey:(id)arg1;
- (BOOL)isStateKey:(id)arg1;
- (void)setBool:(BOOL)arg1 forStateKey:(id)arg2;
- (void)setDouble:(double)arg1 forStateKey:(id)arg2;
- (void)setInteger:(long long)arg1 forStateKey:(id)arg2;
- (void)setValue:(id)arg1 forStateKey:(id)arg2;
- (id)valueForStateKey:(id)arg1;

// QCPatch (UserInterface)

+ (Class)inspectorClassWithIdentifier:(id)arg1;
+ (id)inspectorNibNameWithIdentifier:(id)arg1;

- (void)__setValue:(id)arg1 forPortKey:(id)arg2;
- (void)_setIndex:(id)arg1 forPort:(id)arg2;
- (void)_setKey:(id)arg1 forPort:(id)arg2;
- (Class)graphViewClass;
- (id)nodeActorForView:(id)arg1;
- (id)selectedNodes;

// QCPatch (Wrappers)

- (BOOL)addSubpatch:(id)arg1;
- (BOOL)canAddSubpatch:(id)arg1;
- (BOOL)canPublishPort:(id)arg1;
- (id)createInputWithPortClass:(Class)arg1 forKey:(id)arg2 attributes:(id)arg3;
- (id)createInputWithPortClass:(Class)arg1 forKey:(id)arg2 attributes:(id)arg3 arguments:(id)arg4 order:(unsigned long long)arg5;
- (id)createOutputWithPortClass:(Class)arg1 forKey:(id)arg2 attributes:(id)arg3;
- (id)createOutputWithPortClass:(Class)arg1 forKey:(id)arg2 attributes:(id)arg3 arguments:(id)arg4 order:(unsigned long long)arg5;
- (void)deleteInputForKey:(id)arg1;
- (void)deleteOutputForKey:(id)arg1;
- (id)inputs;
- (id)isPortPublished:(id)arg1;
- (id)keyForSubpatch:(id)arg1;
- (id)outputs;
- (id)parentPatch;
- (id)pathForSubpatch:(id)arg1;
- (id)publishPort:(id)arg1;
- (void)removeSubpatch:(id)arg1;
- (void)setInputOrder:(unsigned long long)arg1 forKey:(id)arg2;
- (void)setOutputOrder:(unsigned long long)arg1 forKey:(id)arg2;
- (id)subpatchForKey:(id)arg1;
- (id)subpatchForPath:(id)arg1;
- (id)subpatches;
- (void)unpublishPort:(id)arg1;

@end