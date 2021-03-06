/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
 */

@interface IOBluetoothSDPServiceRecord : NSObject <NSCoding> {
    NSDictionary * mAttributeDictionary;
    IOBluetoothDevice * mDeviceForService;
    NSArray * sortedAttributes;
}

@property (atomic, readwrite, copy) NSDictionary *attributes;
@property (atomic, readwrite, retain) IOBluetoothDevice *device;
@property (atomic, readonly) IOBluetoothSDPUUID *serviceUUID;
@property (atomic, readwrite, copy) NSArray *sortedAttributes;

+ (id)publishedServiceRecordWithDictionary:(id)arg1;
+ (id)withSDPServiceRecordRef:(struct OpaqueIOBluetoothObjectRef { }*)arg1;
+ (id)withServiceDictionary:(id)arg1 device:(id)arg2;

- (id)attributes;
- (void)dealloc;
- (id)description;
- (id)device;
- (void)encodeWithCoder:(id)arg1;
- (id)getAttributeDataElement:(unsigned short)arg1;
- (id)getAttributes;
- (id)getDevice;
- (int)getL2CAPPSM:(unsigned short*)arg1;
- (int)getRFCOMMChannelID:(char *)arg1;
- (struct OpaqueIOBluetoothObjectRef { }*)getSDPServiceRecordRef;
- (id)getServiceName;
- (int)getServiceRecordHandle:(unsigned int*)arg1;
- (BOOL)hasServiceFromArray:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithServiceDictionary:(id)arg1 device:(id)arg2;
- (BOOL)matchesSearchArray:(id)arg1;
- (BOOL)matchesUUID16:(unsigned short)arg1;
- (BOOL)matchesUUIDArray:(id)arg1;
- (oneway void)release;
- (int)removeServiceRecord;
- (id)replacementObjectForPortCoder:(id)arg1;
- (id)serviceUUID;
- (void)setAttributes:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)setSortedAttributes:(id)arg1;
- (id)shortDescription;
- (id)sortedAttributes;
- (BOOL)usesL2CAPPSM:(unsigned short)arg1;
- (BOOL)usesRFCOMMChannelID:(unsigned char)arg1;

// IOBluetoothSDPServiceRecord (HandsFreeSDPServiceRecordAdditions)

- (unsigned short)handsFreeSupportedFeatures;

@end
