/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
 */

@interface NSCollectionViewLayoutAttributes : NSObject <NSCopying> {
    double  _alpha;
    struct CGPoint { 
        double x; 
        double y; 
    }  _center;
    NSString * _elementKind;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frame;
    NSIndexPath * _indexPath;
    NSString * _isCloneString;
    struct { 
        unsigned int isCellKind : 1; 
        unsigned int isDecorationView : 1; 
        unsigned int isHidden : 1; 
        unsigned int isClone : 1; 
        unsigned int isInterItemGap : 1; 
    }  _layoutFlags;
    NSString * _reuseIdentifier;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    struct CATransform3D { 
        double m11; 
        double m12; 
        double m13; 
        double m14; 
        double m21; 
        double m22; 
        double m23; 
        double m24; 
        double m31; 
        double m32; 
        double m33; 
        double m34; 
        double m41; 
        double m42; 
        double m43; 
        double m44; 
    }  _transform;
    long long  _zIndex;
}

@property (nonatomic, readwrite) double alpha;
@property (nonatomic, readwrite) struct CGPoint { double x1; double x2; } center;
@property (nonatomic, readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (getter=isHidden, nonatomic, readwrite) BOOL hidden;
@property (nonatomic, readwrite, retain) NSIndexPath *indexPath;
@property (nonatomic, readonly) unsigned long long representedElementCategory;
@property (nonatomic, readonly) NSString *representedElementKind;
@property (nonatomic, readwrite) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readwrite) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transform;
@property (nonatomic, readwrite) struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; } transform3D;
@property (nonatomic, readwrite) long long zIndex;

+ (id)layoutAttributesForDecorationViewOfKind:(id)arg1 withIndexPath:(id)arg2;
+ (id)layoutAttributesForInterItemGapBeforeIndexPath:(id)arg1;
+ (id)layoutAttributesForItemWithIndexPath:(id)arg1;
+ (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 withIndexPath:(id)arg2;

- (id)_elementKind;
- (BOOL)_isCell;
- (BOOL)_isClone;
- (BOOL)_isDecorationView;
- (BOOL)_isEquivalentTo:(id)arg1;
- (BOOL)_isSupplementaryView;
- (BOOL)_isTransitionVisibleTo:(id)arg1;
- (id)_reuseIdentifier;
- (void)_setElementKind:(id)arg1;
- (void)_setIsClone:(BOOL)arg1;
- (void)_setReuseIdentifier:(id)arg1;
- (double)alpha;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (struct CGPoint { double x1; double x2; })center;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (double)fractionIntoEndZone;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (unsigned long long)hash;
- (id)indexPath;
- (id)init;
- (id)initialLayoutAttributesForInsertedDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFloating;
- (BOOL)isHidden;
- (unsigned long long)representedElementCategory;
- (id)representedElementKind;
- (void)setAlpha:(double)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setFloating:(BOOL)arg1;
- (void)setFractionIntoEndZone:(double)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setIndexPath:(id)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTransform3D:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg1;
- (void)setTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setZIndex:(long long)arg1;
- (struct CGSize { double x1; double x2; })size;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })transform3D;
- (long long)zIndex;

@end