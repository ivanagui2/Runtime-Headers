/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
 */

@interface NSPropertyMapping : NSObject {
    NSString * _name;
    struct __propertyMappingFlags { 
        unsigned int _isInUse : 1; 
        unsigned int _reservedPropertyMapping : 31; 
    }  _propertyMappingFlags;
    NSArray * _propertyTransforms;
    void * _reserved;
    NSArray * _transformValidations;
    NSDictionary * _userInfo;
    NSExpression * _valueExpression;
}

@property (atomic, readwrite, copy) NSString *name;
@property (atomic, readwrite, retain) NSDictionary *userInfo;
@property (atomic, readwrite, retain) NSExpression *valueExpression;

+ (void)initialize;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setValueExpression:(id)arg1;
- (id)userInfo;
- (id)valueExpression;

// NSPropertyMapping (_NSInternalMethods)

- (void)_createCachesAndOptimizeState;
- (id)_initWithDestinationName:(id)arg1 valueExpression:(id)arg2;
- (id)_propertyTransforms;
- (void)_setIsEditable:(BOOL)arg1;
- (void)_setPropertyTransforms:(id)arg1;
- (void)_setTransformValidations:(id)arg1;
- (void)_throwIfNotEditable;
- (id)_transformValidations;
- (id)initWithName:(id)arg1 valueExpression:(id)arg2;
- (BOOL)isEditable;

@end
