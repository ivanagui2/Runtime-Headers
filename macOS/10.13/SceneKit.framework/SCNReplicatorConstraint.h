/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/Versions/A/SceneKit
 */

@interface SCNReplicatorConstraint : SCNConstraint {
    struct SCNVector4 { 
        double x; 
        double y; 
        double z; 
        double w; 
    }  _orientationOffset;
    struct SCNVector3 { 
        double x; 
        double y; 
        double z; 
    }  _positionOffset;
    BOOL  _replicateOrientation;
    BOOL  _replicatePosition;
    BOOL  _replicateScale;
    struct SCNVector3 { 
        double x; 
        double y; 
        double z; 
    }  _scaleOffset;
    SCNNode * _target;
}

@property (nonatomic, readwrite) struct SCNVector4 { double x1; double x2; double x3; double x4; } orientationOffset;
@property (nonatomic, readwrite) struct SCNVector3 { double x1; double x2; double x3; } positionOffset;
@property (nonatomic, readwrite) BOOL replicatesOrientation;
@property (nonatomic, readwrite) BOOL replicatesPosition;
@property (nonatomic, readwrite) BOOL replicatesScale;
@property (nonatomic, readwrite) struct SCNVector3 { double x1; double x2; double x3; } scaleOffset;
@property (nonatomic, readwrite, retain) SCNNode *target;

+ (id)replicatorConstraint;
+ (id)replicatorConstraintWithTarget:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void)_customDecodingOfSCNReplicatorConstraint:(id)arg1;
- (void)_customEncodingOfSCNReplicatorConstraint:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (struct SCNVector4 { double x1; double x2; double x3; double x4; })orientationOffset;
- (struct SCNVector3 { double x1; double x2; double x3; })positionOffset;
- (BOOL)replicatesOrientation;
- (BOOL)replicatesPosition;
- (BOOL)replicatesScale;
- (struct SCNVector3 { double x1; double x2; double x3; })scaleOffset;
- (void)setOrientationOffset:(struct SCNVector4 { double x1; double x2; double x3; double x4; })arg1;
- (void)setPositionOffset:(struct SCNVector3 { double x1; double x2; double x3; })arg1;
- (void)setReplicatesOrientation:(BOOL)arg1;
- (void)setReplicatesPosition:(BOOL)arg1;
- (void)setReplicatesScale:(BOOL)arg1;
- (void)setScaleOffset:(struct SCNVector3 { double x1; double x2; double x3; })arg1;
- (void)setTarget:(id)arg1;
- (id)target;

@end
