/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore
 */

@interface CABehavior : NSObject <NSCopying, NSSecureCoding> {
    void * _attr;
    unsigned int  _refcount;
    unsigned int  _uid;
}

@property (atomic, readwrite) <CABehaviorDelegate> *delegate;
@property (getter=isEnabled, atomic, readwrite) BOOL enabled;
@property (atomic, readwrite, copy) NSString *name;
@property (atomic, readwrite, copy) NSDictionary *style;

+ (void)CAMLParserStartElement:(id)arg1;
+ (id)CA_attributes;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (int (*)CA_getterForProperty:(const struct _CAPropertyInfo { unsigned int x1; SEL x2[2]; unsigned int x3 : 16; unsigned int x4 : 16; char *x5; struct __CFString {} *x6; }*)arg1;
+ (int (*)CA_setterForProperty:(const struct _CAPropertyInfo { unsigned int x1; SEL x2[2]; unsigned int x3 : 16; unsigned int x4 : 16; char *x5; struct __CFString {} *x6; }*)arg1;
+ (id)attributesForKey:(id)arg1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)behavior;
+ (id)defaultValueForKey:(id)arg1;
+ (id)properties;
+ (BOOL)resolveInstanceMethod:(SEL)arg1;
+ (BOOL)supportsSecureCoding;

- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (id)CAMLTypeForKey:(id)arg1;
- (void)_setCARenderBehavior:(struct Behavior { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; unsigned int x3; struct Ref<CA::Render::String> { struct String {} *x_4_1_1; } x4; unsigned int x5; unsigned int x6; unsigned int x7 : 8; unsigned int x8 : 8; struct Ref<const CA::Render::Behavior> { struct Behavior {} *x_9_1_1; } x9; }*)arg1;
- (BOOL)allowsWeakReference;
- (id)attributesForKeyPath:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)delegate;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEnabled;
- (id)name;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (BOOL)retainWeakReference;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setName:(id)arg1;
- (void)setStyle:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (BOOL)shouldArchiveValueForKey:(id)arg1;
- (id)style;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;

@end