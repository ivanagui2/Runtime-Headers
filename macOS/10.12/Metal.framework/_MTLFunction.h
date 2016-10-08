/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Versions/A/Metal
 */

@interface _MTLFunction : NSObject <MTLFunctionSPI> {
    NSObject<OS_dispatch_data> * _constantData;
    <MTLDevice> * _device;
    NSDictionary * _functionConstantDictionary;
    NSArray * _functionConstants;
    unsigned long long  _functionType;
    NSString * _label;
    /* Warning: unhandled struct encoding: '{MTLLibraryData=^^?i@}' */ struct MTLLibraryData { int (**x1)(); int x2; id x3; } * _libraryData;
    NSString * _name;
    id  _vendorPrivate;
    NSArray * _vertexAttributes;
}

@property (atomic, readonly) unsigned long long bitCodeOffset;
@property (atomic, readonly) unsigned char bitcodeType;
@property (atomic, readonly) NSObject<OS_dispatch_data> *constantData;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) <MTLDevice> *device;
@property (atomic, readwrite, copy) NSString *filePath;
@property (atomic, readwrite) NSArray *functionConstants;
@property (atomic, readonly) NSDictionary *functionConstantsDictionary;
@property (atomic, readonly) unsigned long long functionType;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite, copy) NSString *label;
@property (atomic, readonly) /* Warning: unhandled struct encoding: '{MTLLibraryData=^^?i@}' */ struct MTLLibraryData { int (**x1)(); int x2; id x3; }*libraryData;
@property (atomic, readwrite) long long lineNumber;
@property (atomic, readonly) NSString *name;
@property (atomic, readonly) BOOL needsFunctionConstantValues;
@property (atomic, readonly) long long patchControlPointCount;
@property (atomic, readonly) unsigned long long patchType;
@property (atomic, readonly) unsigned long long renderTargetArrayIndexType;
@property (atomic, readonly) NSArray *stageInputAttributes;
@property (atomic, readonly) Class superclass;
@property (atomic, readonly) id vendorPrivate;
@property (atomic, readwrite) NSArray *vertexAttributes;

- (unsigned long long)bitCodeFileSize;
- (const struct { unsigned char x1[32]; }*)bitCodeHash;
- (id)constantData;
- (void)dealloc;
- (id)description;
- (id)device;
- (id)functionConstantsDictionary;
- (unsigned long long)functionType;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 libraryData:(/* Warning: unhandled struct encoding: '{MTLLibraryData=^^?i@}' */ struct MTLLibraryData { int (**x1)(); int x2; id x3; }*)arg3 device:(id)arg4;
- (id)label;
- (/* Warning: unhandled struct encoding: '{MTLLibraryData=^^?i@}' */ struct MTLLibraryData { int (**x1)(); int x2; id x3; }*)libraryData;
- (id)name;
- (void)newSpecializedFunctionWithConstants:(id)arg1 completionHandler:(id)arg2;
- (id)newSpecializedFunctionWithConstants:(id)arg1 error:(id*)arg2;
- (void)setLabel:(id)arg1;
- (void)setVendorPrivate:(id)arg1;
- (id)vendorPrivate;

@end