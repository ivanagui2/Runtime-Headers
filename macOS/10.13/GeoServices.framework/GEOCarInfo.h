/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOCarInfo : PBCodable <NSCopying> {
    int  _brightness;
    NSString * _carName;
    int  _colorRange;
    BOOL  _destinationSharingEnabled;
    int  _deviceConnection;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _engineTypes;
    struct { 
        unsigned int screenResolution : 1; 
        unsigned int brightness : 1; 
        unsigned int colorRange : 1; 
        unsigned int deviceConnection : 1; 
        unsigned int navAidedDrivingStatus : 1; 
        unsigned int destinationSharingEnabled : 1; 
    }  _has;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _inputMethods;
    NSString * _manufacturer;
    NSString * _model;
    int  _navAidedDrivingStatus;
    GEOScreenDimension * _screenDimension;
    struct GEOScreenResolution { 
        double _height; 
        double _width; 
        struct { 
            unsigned int height : 1; 
            unsigned int width : 1; 
        } _has; 
    }  _screenResolution;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readwrite) int brightness;
@property (nonatomic, readwrite, retain) NSString *carName;
@property (nonatomic, readwrite) int colorRange;
@property (nonatomic, readwrite) BOOL destinationSharingEnabled;
@property (nonatomic, readwrite) int deviceConnection;
@property (nonatomic, readonly) int*engineTypes;
@property (nonatomic, readonly) unsigned long long engineTypesCount;
@property (nonatomic, readwrite) BOOL hasBrightness;
@property (nonatomic, readonly) BOOL hasCarName;
@property (nonatomic, readwrite) BOOL hasColorRange;
@property (nonatomic, readwrite) BOOL hasDestinationSharingEnabled;
@property (nonatomic, readwrite) BOOL hasDeviceConnection;
@property (nonatomic, readonly) BOOL hasManufacturer;
@property (nonatomic, readonly) BOOL hasModel;
@property (nonatomic, readwrite) BOOL hasNavAidedDrivingStatus;
@property (nonatomic, readonly) BOOL hasScreenDimension;
@property (nonatomic, readwrite) BOOL hasScreenResolution;
@property (nonatomic, readonly) int*inputMethods;
@property (nonatomic, readonly) unsigned long long inputMethodsCount;
@property (nonatomic, readwrite, retain) NSString *manufacturer;
@property (nonatomic, readwrite, retain) NSString *model;
@property (nonatomic, readwrite) int navAidedDrivingStatus;
@property (nonatomic, readwrite, retain) GEOScreenDimension *screenDimension;
@property (nonatomic, readwrite) struct GEOScreenResolution { double x1; double x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; } screenResolution;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (int)StringAsDeviceConnection:(id)arg1;
- (int)StringAsEngineTypes:(id)arg1;
- (int)StringAsInputMethods:(id)arg1;
- (int)StringAsNavAidedDrivingStatus:(id)arg1;
- (void)addEngineType:(int)arg1;
- (void)addInputMethod:(int)arg1;
- (int)brightness;
- (id)carName;
- (void)clearEngineTypes;
- (void)clearInputMethods;
- (int)colorRange;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (BOOL)destinationSharingEnabled;
- (int)deviceConnection;
- (id)deviceConnectionAsString:(int)arg1;
- (id)dictionaryRepresentation;
- (int)engineTypeAtIndex:(unsigned long long)arg1;
- (int*)engineTypes;
- (id)engineTypesAsString:(int)arg1;
- (unsigned long long)engineTypesCount;
- (BOOL)hasBrightness;
- (BOOL)hasCarName;
- (BOOL)hasColorRange;
- (BOOL)hasDestinationSharingEnabled;
- (BOOL)hasDeviceConnection;
- (BOOL)hasManufacturer;
- (BOOL)hasModel;
- (BOOL)hasNavAidedDrivingStatus;
- (BOOL)hasScreenDimension;
- (BOOL)hasScreenResolution;
- (unsigned long long)hash;
- (int)inputMethodAtIndex:(unsigned long long)arg1;
- (int*)inputMethods;
- (id)inputMethodsAsString:(int)arg1;
- (unsigned long long)inputMethodsCount;
- (BOOL)isEqual:(id)arg1;
- (id)manufacturer;
- (void)mergeFrom:(id)arg1;
- (id)model;
- (int)navAidedDrivingStatus;
- (id)navAidedDrivingStatusAsString:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)screenDimension;
- (struct GEOScreenResolution { double x1; double x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })screenResolution;
- (void)setBrightness:(int)arg1;
- (void)setCarName:(id)arg1;
- (void)setColorRange:(int)arg1;
- (void)setDestinationSharingEnabled:(BOOL)arg1;
- (void)setDeviceConnection:(int)arg1;
- (void)setEngineTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setHasBrightness:(BOOL)arg1;
- (void)setHasColorRange:(BOOL)arg1;
- (void)setHasDestinationSharingEnabled:(BOOL)arg1;
- (void)setHasDeviceConnection:(BOOL)arg1;
- (void)setHasNavAidedDrivingStatus:(BOOL)arg1;
- (void)setHasScreenResolution:(BOOL)arg1;
- (void)setInputMethods:(int*)arg1 count:(unsigned long long)arg2;
- (void)setManufacturer:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setNavAidedDrivingStatus:(int)arg1;
- (void)setScreenDimension:(id)arg1;
- (void)setScreenResolution:(struct GEOScreenResolution { double x1; double x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

// GEOCarInfo (Extras)

+ (id)carInfoWithTraits:(id)arg1;

- (id)initWithTraits:(id)arg1;

@end