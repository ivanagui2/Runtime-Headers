/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreText.framework/Versions/A/CoreText
 */

@interface NSFontCollection : NSObject <NSCoding, NSCopying, NSMutableCopying, NSSecureCoding>

+ (id)_URLForName:(id)arg1 domain:(unsigned long long)arg2 error:(id*)arg3;
+ (id)_URLsForFontCollectionsDirectoriesWithVisibility:(unsigned long long)arg1;
+ (id)_URLsForFontCollectionsInDirectoryAtURL:(id)arg1 includingPropertiesForKeys:(id)arg2 error:(id*)arg3;
+ (id)_collectionAtURL:(id)arg1 error:(id*)arg2;
+ (id)_collectionFromFileWithName:(id)arg1 visibility:(unsigned long long*)arg2;
+ (id)_combineDescriptorsIncluded:(id)arg1 excluded:(id)arg2;
+ (id)_copyArchivedDictionaryFromURL:(id)arg1 error:(id*)arg2;
+ (id)_directoryURLForDomain:(unsigned long long)arg1 error:(id*)arg2;
+ (id)_namesOfFontCollectionsWithVisibility:(unsigned long long)arg1 includingHidden:(BOOL)arg2;
+ (id)_newFromDictionary:(id)arg1;
+ (id)allFontCollectionNames;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)fontCollectionWithAllAvailableDescriptors;
+ (id)fontCollectionWithDescriptors:(id)arg1;
+ (id)fontCollectionWithLocale:(id)arg1;
+ (id)fontCollectionWithName:(id)arg1;
+ (id)fontCollectionWithName:(id)arg1 visibility:(unsigned long long)arg2;
+ (BOOL)hideFontCollectionWithName:(id)arg1 visibility:(unsigned long long)arg2 error:(id*)arg3;
+ (void)initialize;
+ (BOOL)renameFontCollectionWithName:(id)arg1 visibility:(unsigned long long)arg2 toName:(id)arg3 error:(id*)arg4;
+ (BOOL)showFontCollection:(id)arg1 withName:(id)arg2 visibility:(unsigned long long)arg3 error:(id*)arg4;
+ (BOOL)supportsSecureCoding;

- (id)_dictionaryForArchivingWithAttributes:(id)arg1;
- (BOOL)_hasDesignatedName:(id*)arg1 visibility:(unsigned long long*)arg2;
- (void)_replaceDescriptorsFromCollection:(id)arg1;
- (BOOL)_saveToURL:(id)arg1 error:(id*)arg2;
- (id)collectionAttributes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)exclusionDescriptors;
- (id)init;
- (id)initWithAllAvailableDescriptors;
- (id)initWithCoder:(id)arg1;
- (id)initWithDescriptors:(id)arg1;
- (id)initWithLocale:(id)arg1;
- (id)matchingDescriptors;
- (id)matchingDescriptorsForFamily:(id)arg1;
- (id)matchingDescriptorsForFamily:(id)arg1 options:(id)arg2;
- (id)matchingDescriptorsWithOptions:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)queryDescriptors;
- (void)registeredFontsChangedNotification:(id)arg1;

@end
