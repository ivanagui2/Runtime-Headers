/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IconServices.framework/Versions/A/IconServices
 */

@interface ISImage : NSObject {
    NSData * _data;
}

@property (atomic, readonly) BOOL hasData;

+ (struct CGImage { }*)newCGImageWithCacheFileURL:(id)arg1;
+ (struct CGImage { }*)newCGImageWithDataSource:(id)arg1;

- (void).cxx_destruct;
- (void)_getImageBuffer:(void**)arg1 size:(unsigned long long*)arg2;
- (struct { unsigned int x1; float x2; float x3; unsigned int x4; unsigned int x5; }*)_header;
- (struct CGImageBlockSet { }*)copyCGImageBlockSetWithProvider:(struct CGImageProvider { }*)arg1;
- (BOOL)hasData;
- (id)initWithData:(id)arg1;

// ISImage (Util)

+ (struct CGColorSpace { }*)defaultCGColorSpace;
+ (id)imageDestinationPropertiesForScale:(unsigned int)arg1;
+ (BOOL)writeCGImage:(struct CGImage { }*)arg1 toURL:(id)arg2;

@end
