/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/Versions/A/SceneKit
 */

@interface SCNRendererOptionsPanelController : NSObjectController {
    SCNView * _3dView;
    unsigned int  _currentSeekStep;
    SCNUIDynamicInspector * _inspector;
    SCNRendererOptionsPanel * _panel;
    NSOutlineView * _sceneGraph;
    BOOL  _viewLocked;
    NSPopUpButton * antialiasingLevels;
    NSTextField * benchResult;
    NSPopUpButton * displayOptions;
    NSButton * freezeButton;
    NSButton * isolate;
    NSComboBox * pointOfCullingComboBox;
    NSComboBox * pointOfViewComboBox;
    NSSlider * seekSlider;
    NSStepper * seekStepper;
}

@property (nonatomic, readwrite, retain) SCNView *view;

- (void).cxx_destruct;
- (void)_expandItem:(id)arg1;
- (void)archiveToDesktop:(id)arg1;
- (void)capture:(id)arg1;
- (void)close:(id)arg1;
- (id)comboBox:(id)arg1 objectValueForItemAtIndex:(long long)arg2;
- (struct __C3DEngineContext { }*)context;
- (void)disablePassesToggle:(id)arg1;
- (void)enableVBL:(id)arg1;
- (void)exportAs:(id)arg1;
- (void)hideSpriteKitOverlaysToggled:(id)arg1;
- (id)init;
- (void)inspectCamera:(id)arg1;
- (void)isolate:(id)arg1;
- (long long)numberOfItemsInComboBox:(id)arg1;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (void)outlineView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 byItem:(id)arg4;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (id)panel;
- (void)recompilePasses;
- (struct __C3DRendererContext { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; float x7; unsigned int x8; struct __C3DTexture {} *x9; struct __C3DStack {} *x10; void *x11; bool x12; bool x13; bool x14; bool x15; bool x16; bool x17; struct __CFDictionary {} *x18; unsigned int x19; struct __CFDictionary {} *x20; struct __CFDictionary {} *x21; struct __CFDictionary {} *x22; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_23_1_1; } x23; void *x24; long long x25; struct __C3DFXProgramObject {} *x26; struct __C3DEngineStats { unsigned int x_27_1_1; unsigned int x_27_1_2; unsigned int x_27_1_3; unsigned int x_27_1_4; unsigned int x_27_1_5; unsigned int x_27_1_6; unsigned int x_27_1_7; unsigned int x_27_1_8; unsigned int x_27_1_9; unsigned int x_27_1_10; unsigned int x_27_1_11; unsigned int x_27_1_12; unsigned int x_27_1_13; unsigned int x_27_1_14; unsigned int x_27_1_15; unsigned int x_27_1_16; unsigned int x_27_1_17; unsigned int x_27_1_18; unsigned int x_27_1_19; unsigned int x_27_1_20; unsigned int x_27_1_21; unsigned int x_27_1_22; unsigned int x_27_1_23; unsigned int x_27_1_24; double x_27_1_25; double x_27_1_26; double x_27_1_27; double x_27_1_28; double x_27_1_29; double x_27_1_30; double x_27_1_31; double x_27_1_32; double x_27_1_33; double x_27_1_34; double x_27_1_35; double x_27_1_36; double x_27_1_37; double x_27_1_38; unsigned int x_27_1_39; unsigned int x_27_1_40; unsigned int x_27_1_41; unsigned int x_27_1_42; unsigned int x_27_1_43; unsigned int x_27_1_44; unsigned int x_27_1_45; unsigned int x_27_1_46; unsigned int x_27_1_47; } x27; }*)rendererContext;
- (void)runBench:(id)arg1;
- (void)sceneDidChange;
- (unsigned long long)seekStep;
- (void)selectAuthoringDisplayMask:(id)arg1;
- (void)selectCamera:(id)arg1;
- (void)selectPointOfCulling:(id)arg1;
- (id)selectedNode;
- (id)selection;
- (void)selectionDidChange:(id)arg1;
- (void)selectionWillChange;
- (void)setAntialiasingLevel:(id)arg1;
- (void)setSeekStep:(unsigned long long)arg1;
- (void)setSuperSampling:(id)arg1;
- (void)setView:(id)arg1;
- (BOOL)showManipulators;
- (void)toggleRetina:(id)arg1;
- (void)updateSeek;
- (id)view;

@end
