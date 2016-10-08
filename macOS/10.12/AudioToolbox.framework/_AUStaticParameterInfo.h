/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AudioToolbox.framework/Versions/A/AudioToolbox
 */

@interface _AUStaticParameterInfo : NSObject <NSSecureCoding> {
    unsigned int  _clumpID;
    unsigned int  _flags;
    float  _maxValue;
    float  _minValue;
    unsigned int  _unit;
    NSString * _unitName;
    NSArray * _valueStrings;
}

@property (nonatomic, readwrite) unsigned int clumpID;
@property (nonatomic, readwrite) unsigned int flags;
@property (nonatomic, readwrite) float maxValue;
@property (nonatomic, readwrite) float minValue;
@property (nonatomic, readwrite) unsigned int unit;
@property (nonatomic, readwrite, retain) NSString *unitName;
@property (nonatomic, readwrite, retain) NSArray *valueStrings;

+ (BOOL)supportsSecureCoding;

- (unsigned int)clumpID;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)flags;
- (id)initWithCoder:(id)arg1;
- (float)maxValue;
- (float)minValue;
- (void)setClumpID:(unsigned int)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setMaxValue:(float)arg1;
- (void)setMinValue:(float)arg1;
- (void)setUnit:(unsigned int)arg1;
- (void)setUnitName:(id)arg1;
- (void)setValueStrings:(id)arg1;
- (unsigned int)unit;
- (id)unitName;
- (id)valueStrings;

@end