/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Carbon.framework/Versions/A/Frameworks/HIToolbox.framework/Versions/A/HIToolbox
 */

@interface CDImageData : NSObject {
    unsigned int  _flags;
    NSArray * _imageComponents;
    id  _imageComponentsBlock;
    unsigned int  _pasteboardIndex;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _screenFrame;
}

@property (atomic, readonly) unsigned int flags;
@property (atomic, readwrite, retain) NSArray *imageComponents;
@property (atomic, readwrite, copy) id imageComponentsBlock;
@property (atomic, readwrite) unsigned int pasteboardIndex;
@property (atomic, readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } screenFrame;

- (id)componentAtIndex:(long long)arg1;
- (struct __CFDictionary { }*)createDictionaryRepresentationInCAContext:(id)arg1;
- (void)dealloc;
- (void)deleteSlotsForCAContext:(id)arg1;
- (id)description;
- (unsigned int)flags;
- (unsigned int)getExistingSlotIDForCAProxyIfPresent:(id)arg1;
- (BOOL)hasCalledInComponents;
- (id)imageComponents;
- (id)imageComponentsAsBlock;
- (id)imageComponentsBlock;
- (id)init;
- (id)initWithDict:(struct __CFDictionary { }*)arg1;
- (unsigned int)pasteboardIndex;
- (BOOL)recoverSlotIDsForReusedSlotProxiesFrom:(struct __CFDictionary { }*)arg1 usingKey:(struct __CFNumber { }*)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })screenFrame;
- (void)setImageComponents:(id)arg1;
- (void)setImageComponentsBlock:(id)arg1;
- (void)setPasteboardIndex:(unsigned int)arg1;
- (void)setScreenFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
