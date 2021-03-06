/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarAgentLink.framework/Versions/A/CalendarAgentLink
 */

@interface ABRemoteSearchElement : NSObject <NSSecureCoding> {
    NSArray * _children;
    long long  _comparison;
    long long  _conjunction;
    BOOL  _diacriticInsensitive;
    BOOL  _isNegation;
    NSString * _publicClassString;
    NSString * _searchKey;
    NSString * _searchLabel;
    BOOL  _searchPeople;
    NSString * _searchProperty;
    id  _searchValue;
    unsigned long long  _type;
}

@property (atomic, readwrite, retain) NSArray *children;
@property (atomic, readwrite) long long comparison;
@property (atomic, readwrite) long long conjunction;
@property (atomic, readwrite) BOOL diacriticInsensitive;
@property (atomic, readwrite) BOOL isNegation;
@property (atomic, readwrite, retain) NSString *publicClassString;
@property (atomic, readwrite, retain) NSString *searchKey;
@property (atomic, readwrite, retain) NSString *searchLabel;
@property (atomic, readwrite) BOOL searchPeople;
@property (atomic, readwrite, retain) NSString *searchProperty;
@property (atomic, readwrite, retain) id searchValue;
@property (atomic, readwrite) unsigned long long type;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)children;
- (long long)comparison;
- (long long)conjunction;
- (BOOL)diacriticInsensitive;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isNegation;
- (id)publicClassString;
- (id)searchKey;
- (id)searchLabel;
- (BOOL)searchPeople;
- (id)searchProperty;
- (id)searchValue;
- (void)setChildren:(id)arg1;
- (void)setComparison:(long long)arg1;
- (void)setConjunction:(long long)arg1;
- (void)setDiacriticInsensitive:(BOOL)arg1;
- (void)setIsNegation:(BOOL)arg1;
- (void)setPublicClassString:(id)arg1;
- (void)setSearchKey:(id)arg1;
- (void)setSearchLabel:(id)arg1;
- (void)setSearchPeople:(BOOL)arg1;
- (void)setSearchProperty:(id)arg1;
- (void)setSearchValue:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
