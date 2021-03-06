/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCSCN_NodeReserved : NSObject {
    NSMutableDictionary * _animations;
    QCSCN_Camera * _camera;
    unsigned int  _cameraLoaded;
    QCSCN_Geometry * _geometry;
    unsigned int  _geometryLoaded;
    BOOL  _hidden;
    NSString * _identifier;
    QCSCN_Light * _light;
    unsigned int  _lightLoaded;
    QCSCN_Morpher * _morpher;
    unsigned int  _morpherLoaded;
    NSString * _name;
    struct __C3DNode { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; struct __CFDictionary {} *x_1_1_2; } x1; struct __C3DNode {} *x2; struct __CFArray {} *x3; struct __C3DSceneID {} *x4; struct __C3DTransforms {} *x5; float x6; bool x7; struct _SCNVector3 { double x_8_1_1; double x_8_1_2; double x_8_1_3; } x8[2]; struct _SCNVector3 { double x_9_1_1; double x_9_1_2; double x_9_1_3; } x9[2]; struct __C3DTransforms {} *x10; float x11; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; } * _node;
    float  _opacity;
    QCSCN_Node * _parent;
    unsigned int  _presentationInstance;
    id  _rendererDelegate;
    int  _renderingOrder;
    struct __C3DScene { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; struct __CFDictionary {} *x_1_1_2; } x1; struct __C3DSceneID {} *x2; struct __C3DNode {} *x3; struct __C3DAnimationManager {} *x4; double x5; double x6; double x7; double x8; struct __CFDictionary {} *x9; struct _SCNVector3 { double x_10_1_1; double x_10_1_2; double x_10_1_3; } x10; struct __C3DFXDeformerManager {} *x11; struct _opaque_pthread_mutex_t { long long x_12_1_1; BOOL x_12_1_2[56]; } x12; } * _sceneRef;
    QCSCN_Skinner * _skinner;
    unsigned int  _skinnerLoaded;
    NSMutableArray * _subnodes;
    struct __C3DTransforms { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct C3DMatrix4x4 { union { double x_1_2_1[16]; double x_1_2_2[4][4]; } x_2_1_1; } x2; struct C3DMatrix4x4 { union { double x_1_2_1[16]; double x_1_2_2[4][4]; } x_3_1_1; } x3; struct _SCNVector3 { double x_4_1_1; double x_4_1_2; double x_4_1_3; } x4; struct __C3DRotation {} *x5; struct _SCNVector3 { double x_6_1_1; double x_6_1_2; double x_6_1_3; } x6; struct __C3DTransforms {} *x7; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; void *x14; } * _transform;
    NSMutableDictionary * _valueForKey;
}

- (void)dealloc;
- (void)finalize;
- (id)init;

@end
