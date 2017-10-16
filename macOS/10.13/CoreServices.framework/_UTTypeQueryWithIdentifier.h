/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices
 */

@interface _UTTypeQueryWithIdentifier : _UTTypeQuery {
    BOOL  _dynamic;
    NSString * _identifier;
    BOOL  _valid;
}

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (BOOL)_canResolveLocallyWithoutMappingDatabase;
- (void)_enumerateWithXPCConnection:(id)arg1 block:(id)arg2;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (BOOL)isEqual:(id)arg1;

// _UTTypeQueryWithIdentifier (Private)

- (BOOL)getLocallyResolvedType:(id*)arg1 orErrorWithoutMappingDatabase:(id*)arg2;

@end