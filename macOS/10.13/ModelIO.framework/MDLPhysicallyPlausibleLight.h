/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ModelIO.framework/Versions/A/ModelIO
 */

@interface MDLPhysicallyPlausibleLight : MDLLight {
    float  _attenuationEndDistance;
    float  _attenuationFalloffExponent;
    float  _attenuationStartDistance;
    float  _innerConeAngle;
    float  _lumens;
    float  _outerConeAngle;
}

@property (nonatomic, readwrite) float attenuationEndDistance;
@property (nonatomic, readwrite) float attenuationFalloffExponent;
@property (nonatomic, readwrite) float attenuationStartDistance;
@property (nonatomic, readwrite) struct CGColor { }*color;
@property (nonatomic, readwrite) float innerConeAngle;
@property (nonatomic, readwrite) float lumens;
@property (nonatomic, readwrite) float outerConeAngle;

- (float)attenuationEndDistance;
- (float)attenuationFalloffExponent;
- (float)attenuationStartDistance;
- (struct CGColor { }*)color;
- (id)init;
- (float)innerConeAngle;
- (float)lumens;
- (float)outerConeAngle;
- (void)setAttenuationEndDistance:(float)arg1;
- (void)setAttenuationFalloffExponent:(float)arg1;
- (void)setAttenuationStartDistance:(float)arg1;
- (void)setColor:(struct CGColor { }*)arg1;
- (void)setColorByTemperature:(float)arg1;
- (void)setInnerConeAngle:(float)arg1;
- (void)setLumens:(float)arg1;
- (void)setOuterConeAngle:(float)arg1;

@end
