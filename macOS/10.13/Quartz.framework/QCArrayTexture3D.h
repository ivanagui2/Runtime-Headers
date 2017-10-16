/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCArrayTexture3D : QCArray {
    QCCGLContext * _context;
    unsigned long long  _depth;
    unsigned long long  _height;
    unsigned int  _name;
    void * _unused2;
    unsigned long long  _width;
}

@property (atomic, readonly) QCCGLContext *context;
@property (atomic, readonly) unsigned int name;

- (unsigned long long)byteSize;
- (id)context;
- (void)dealloc;
- (void)finalize;
- (void)finalize_QCArrayTexture3D;
- (id)initWithArray:(id)arg1 context:(id)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 depth:(unsigned long long)arg5 elementSize:(unsigned long long)arg6 type:(int)arg7 options:(id)arg8;
- (id)initWithContext:(id)arg1 baseAddress:(void*)arg2 releaseCallback:(int (*)arg3 releaseInfo:(void*)arg4 width:(unsigned long long)arg5 height:(unsigned long long)arg6 depth:(unsigned long long)arg7 elementSize:(unsigned long long)arg8 type:(int)arg9 options:(id)arg10;
- (id)initWithContext:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 depth:(unsigned long long)arg4 elementSize:(unsigned long long)arg5 type:(int)arg6 options:(id)arg7;
- (unsigned int)name;

// QCArrayTexture3D (Extensions)

- (void)bindTexture3DToContext:(id)arg1 textureUnit:(unsigned int)arg2 savedState:(struct { unsigned char x1; int x2; int x3; void *x4[4]; }*)arg3;
- (void)bindTexture3DToContext:(id)arg1 textureUnit:(unsigned int)arg2 savedState:(struct { unsigned char x1; int x2; int x3; void *x4[4]; }*)arg3 enableTexture:(BOOL)arg4;
- (void)unbindTexture3DFromContext:(id)arg1 textureUnit:(unsigned int)arg2 savedState:(struct { unsigned char x1; int x2; int x3; void *x4[4]; }*)arg3;
- (void)unbindTexture3DFromContext:(id)arg1 textureUnit:(unsigned int)arg2 savedState:(struct { unsigned char x1; int x2; int x3; void *x4[4]; }*)arg3 enableTexture:(BOOL)arg4;

@end