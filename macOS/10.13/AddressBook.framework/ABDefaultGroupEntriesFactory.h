/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABDefaultGroupEntriesFactory : ABAbstractGroupEntriesFactory {
    BOOL  _includeLastImport;
}

@property (atomic, readwrite) BOOL includeLastImport;

- (BOOL)includeLastImport;
- (id)makeGroupEntries;
- (id)makeGroupEntriesWithHidingPolicy:(id)arg1;
- (void)setIncludeLastImport:(BOOL)arg1;

@end