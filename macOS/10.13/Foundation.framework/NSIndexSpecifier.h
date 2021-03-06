/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface NSIndexSpecifier : NSScriptObjectSpecifier {
    long long  _index;
}

@property (atomic, readwrite) long long index;

+ (id)_containerAtIndex:(unsigned long long*)arg1 traversingBackward:(BOOL)arg2 inContainerTree:(id)arg3 ofDepth:(unsigned long long)arg4;
+ (BOOL)_fromContainerInfo:(const struct { id x1; BOOL x2; BOOL x3; }*)arg1 andKeyCode:(unsigned int)arg2 getAdjustedContainerInfo:(struct { id x1; BOOL x2; BOOL x3; }*)arg3 andKey:(id*)arg4;

- (id)_initFromRecord:(id)arg1;
- (id)_moreCompleteVariantOfTypeDescription:(id)arg1;
- (BOOL)_putKeyFormAndDataInRecord:(id)arg1;
- (id)_simpleDescription;
- (unsigned long long)_specifiedIndexOfObjectInContainer:(id)arg1;
- (unsigned long long)_specifiedObjectTreeDepth;
- (BOOL)_specifiesCollection;
- (BOOL)_specifiesMultipleIndexedObjectsPerContainer;
- (BOOL)_specifiesSingleIndexedObjectPerContainer;
- (id)_typeDescription;
- (void)encodeWithCoder:(id)arg1;
- (long long)index;
- (id)initWithCoder:(id)arg1;
- (id)initWithContainerClassDescription:(id)arg1 containerSpecifier:(id)arg2 key:(id)arg3;
- (id)initWithContainerClassDescription:(id)arg1 containerSpecifier:(id)arg2 key:(id)arg3 index:(long long)arg4;
- (id)keyClassDescription;
- (id)objectsByEvaluatingWithContainers:(id)arg1;
- (void)setIndex:(long long)arg1;

@end
