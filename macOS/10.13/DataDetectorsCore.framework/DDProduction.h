/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/Versions/A/DataDetectorsCore
 */

@interface DDProduction : NSObject {
    struct __DDDotedProduction { struct __DDProduction {} *x1; unsigned char x2; unsigned int x3; unsigned short x4; } * _dottedProductions;
    long long * _graphOfWeakNT;
    long long  _index;
    NSArray * _items;
    DDLocation * _location;
    DDNonTerminal * _nonTerminal;
    long long  _numberOfDottedProductions;
}

@property (atomic, readwrite) long long index;
@property (atomic, readwrite, retain) DDLocation *location;

- (BOOL)checkDottedProductionIndex:(long long)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionWithMarkerPos:(int)arg1;
- (struct __DDDotedProduction { struct __DDProduction {} *x1; unsigned char x2; unsigned int x3; unsigned short x4; }*)dottedProductions;
- (void)encodeWithCoder:(id)arg1;
- (long long)index;
- (id)initWithCoder:(id)arg1;
- (id)initWithSymbols:(id)arg1 nonTerminal:(id)arg2;
- (id)location;
- (id)locationDescription;
- (id)locationFilename;
- (struct __DDExpressionPosition { int x1; int x2; int x3; int x4; })locationPosition;
- (id)nonTerminal;
- (long long)numberOfDottedProduction;
- (long long)numberOfWeakNTBeforeIndex:(long long)arg1;
- (void)recalculateWeakNTGraphAndDottedProdNumber;
- (void)setDottedProductions:(struct __DDDotedProduction { struct __DDProduction {} *x1; unsigned char x2; unsigned int x3; unsigned short x4; }*)arg1;
- (void)setIndex:(long long)arg1;
- (void)setLocation:(id)arg1;
- (void)setSymbols:(id)arg1;
- (id)symbols;

@end