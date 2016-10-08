/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSDocumentController : NSObject <NSCoding, NSUserInterfaceValidations> {
    NSArray * _cachedTypeDescriptions;
    id  _documents;
    id  _moreVars;
    NSMutableDictionary * _recents;
    int  _recentsLimit;
}

@property (atomic, readwrite) double autosavingDelay;
@property (atomic, readonly, copy) NSString *currentDirectory;
@property (atomic, readonly) NSDocument *currentDocument;
@property (atomic, readonly) NSString *defaultType;
@property (atomic, readonly, copy) NSArray *documentClassNames;
@property (atomic, readonly, copy) NSArray *documents;
@property (atomic, readonly) BOOL hasEditedDocuments;
@property (atomic, readonly) unsigned long long maximumRecentDocumentCount;
@property (atomic, readonly, copy) NSArray *recentDocumentURLs;

+ (BOOL)_hasOverrideForSelector:(SEL)arg1;
+ (long long)_maximumNumberOfConcurrentlyOpeningDocuments;
+ (void)_setSharedDocumentController:(id)arg1;
+ (void)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(id)arg3;
+ (id)sharedDocumentController;

- (id)URLsFromRunningOpenPanel;
- (BOOL)_appProbablyNeedsWarmedUpSavePanel;
- (void)_appWillBecomeInactive:(id)arg1;
- (void)_appearancePreferencesChanged:(id)arg1;
- (void)_beginBatchedOpeningWithURLs:(id)arg1;
- (BOOL)_canPerformBatchedDocumentOpening;
- (void)_coordinateReadingAndGetAlternateContentsForOpeningDocumentAtURL:(id)arg1 resolvingSymlinks:(BOOL)arg2 thenContinueOnMainThreadWithAccessor:(id)arg3;
- (void)_coordinateReadingForOpeningDocumentAtURL:(id)arg1 resolvingSymlinks:(BOOL)arg2 byAccessor:(id)arg3;
- (id)_defaultType:(BOOL)arg1;
- (void)_didEndAsyncOpeningOrPrinting;
- (void)_dockRestarted;
- (id)_documentForURL:(id)arg1;
- (long long)_editedDocumentCount;
- (id)_errorForMissingDocumentClassWithContentsURL:(id)arg1 ofType:(id)arg2;
- (id)_finishBatchedOpeningAndPresentErrors:(BOOL)arg1;
- (void)_finishOpeningDocument:(id)arg1 andShowWindows:(BOOL)arg2;
- (void)_notePendingRecentDocumentURLsForKey:(id)arg1 documentsSnapshot:(id)arg2;
- (id)_oldMakeDuplicateDocumentWithContentsOfURL:(id)arg1 copying:(BOOL)arg2 displayName:(id)arg3 error:(id*)arg4;
- (void)_openDocumentWithContentsOfURL:(id)arg1 usingProcedure:(id)arg2;
- (void)_openDocumentsWithContentsOfURLs:(id)arg1 display:(BOOL)arg2 presentErrors:(BOOL)arg3;
- (void)_openDocumentsWithContentsOfURLs:(id)arg1 presentErrors:(BOOL)arg2 completionHandler:(id)arg3;
- (id)_openUntitledDocumentOfType:(id)arg1 andDisplay:(BOOL)arg2 error:(id*)arg3;
- (id)_openableTypes;
- (struct OpaqueLSSharedFileListRef { }*)_perAppRecentDocumentFileList;
- (BOOL)_persistenceCanRecreateEmptyUntitledDocumentOfType:(id)arg1;
- (BOOL)_persistenceMustOpenDocumentsThroughApplicationDelegate;
- (id)_presentableFileNameFromURL:(id)arg1;
- (void)_readRecentDocumentDefaultsForKey:(id)arg1;
- (id)_recentDocumentRecordsKeyForMenu:(id)arg1;
- (id)_recentDocumentRecordsKeyForUserInterfaceItem:(id)arg1;
- (BOOL)_refreshRecentDocumentURL:(id)arg1 newURL:(id)arg2 forDocument:(id)arg3;
- (void)_replaceIDForRecentDocument:(id)arg1 withID:(unsigned int)arg2;
- (void)_restorePersistentDocumentWithState:(id)arg1 completionHandler:(id)arg2;
- (void)_setInvokeVersionsForTimeMachine:(BOOL)arg1;
- (id)_setupOpenPanel;
- (void)_something:(id)arg1 didSomething:(BOOL)arg2 soContinue:(id)arg3;
- (void)_ubiquityIdentityChanged:(id)arg1;
- (void)_updateOpenRecentDocumentsWithNewEntries:(id)arg1 documentsSnapshot:(id)arg2;
- (void)_waitForAsyncOpeningOrPrintingToFinishThenContinue:(id)arg1;
- (void)_willBeginAsyncOpeningOrPrinting;
- (id)_willPresentCreationError:(id)arg1;
- (id)_willPresentOpeningError:(id)arg1 forDocumentWithDisplayName:(id)arg2;
- (id)_willPresentOpeningError:(id)arg1 forURL:(id)arg2;
- (id)_willPresentReopeningError:(id)arg1 forURL:(id)arg2 contentsURL:(id)arg3;
- (void)_writeRecentDocumentDefaultsForKey:(id)arg1;
- (void)addDocument:(id)arg1;
- (double)autosavingDelay;
- (void)beginOpenPanel:(id)arg1 forTypes:(id)arg2 completionHandler:(id)arg3;
- (void)beginOpenPanelWithCompletionHandler:(id)arg1;
- (void)clearRecentDocuments:(id)arg1;
- (void)closeAllDocumentsWithDelegate:(id)arg1 didCloseAllSelector:(SEL)arg2 contextInfo:(void*)arg3;
- (id)currentDirectory;
- (id)currentDocument;
- (void)dealloc;
- (id)defaultType;
- (id)displayNameForType:(id)arg1;
- (Class)documentClassForType:(id)arg1;
- (id)documentClassNames;
- (id)documentForURL:(id)arg1;
- (id)documentForWindow:(id)arg1;
- (id)documents;
- (id)duplicateDocumentWithContentsOfURL:(id)arg1 copying:(BOOL)arg2 displayName:(id)arg3 error:(id*)arg4;
- (void)encodeWithCoder:(id)arg1;
- (void)getAlternateContentsForDocumentAtURL:(id)arg1 withFileCoordinationInterrupter:(id)arg2 completionHandler:(id)arg3;
- (BOOL)hasEditedDocuments;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)makeDocumentForURL:(id)arg1 withAlternateContents:(id)arg2 ofType:(id)arg3 error:(id*)arg4;
- (void)makeDocumentForURL:(id)arg1 withContentsOfURL:(id)arg2 alternateContents:(id)arg3 ofType:(id)arg4 completionHandler:(id)arg5;
- (id)makeDocumentForURL:(id)arg1 withContentsOfURL:(id)arg2 ofType:(id)arg3 error:(id*)arg4;
- (void)makeDocumentWithContentsOfURL:(id)arg1 alternateContents:(id)arg2 ofType:(id)arg3 completionHandler:(id)arg4;
- (id)makeDocumentWithContentsOfURL:(id)arg1 ofType:(id)arg2 error:(id*)arg3;
- (id)makeUntitledDocumentOfType:(id)arg1 error:(id*)arg2;
- (unsigned long long)maximumRecentDocumentCount;
- (void)newDocument:(id)arg1;
- (void)newWindowForTab:(id)arg1;
- (void)noteNewRecentDocument:(id)arg1;
- (void)noteNewRecentDocumentURL:(id)arg1;
- (void)openDocument:(id)arg1;
- (void)openDocumentWithContentsOfURL:(id)arg1 display:(BOOL)arg2 completionHandler:(id)arg3;
- (id)openUntitledDocumentAndDisplay:(BOOL)arg1 error:(id*)arg2;
- (BOOL)presentError:(id)arg1;
- (void)presentError:(id)arg1 modalForWindow:(id)arg2 delegate:(id)arg3 didPresentSelector:(SEL)arg4 contextInfo:(void*)arg5;
- (id)recentDocumentURLs;
- (void)removeDocument:(id)arg1;
- (void)reopenDocumentForURL:(id)arg1 withContentsOfURL:(id)arg2 display:(BOOL)arg3 completionHandler:(id)arg4;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)reviewUnsavedDocumentsWithAlertTitle:(id)arg1 cancellable:(BOOL)arg2 delegate:(id)arg3 didReviewAllSelector:(SEL)arg4 contextInfo:(void*)arg5;
- (long long)runModalOpenPanel:(id)arg1 forTypes:(id)arg2;
- (void)saveAllDocuments:(id)arg1;
- (void)setAutosavingDelay:(double)arg1;
- (id)typeForContentsOfURL:(id)arg1 error:(id*)arg2;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (id)willPresentError:(id)arg1;

// NSDocumentController (NSCompatibility)

- (void)_invalidateTypeDescriptionCache;
- (id)_resolveTypeAlias:(id)arg1;
- (id)_types;
- (id)_typesForDocumentClass:(Class)arg1 includeEditors:(BOOL)arg2 includeViewers:(BOOL)arg3 includeExportable:(BOOL)arg4;

// NSDocumentController (NSDeprecated)

- (id)_openDocumentFileAt:(id)arg1 display:(BOOL)arg2;
- (id)_openableFileExtensions;
- (id)documentForFileName:(id)arg1;
- (id)fileExtensionsFromType:(id)arg1;
- (id)fileNamesFromRunningOpenPanel;
- (id)makeDocumentWithContentsOfFile:(id)arg1 ofType:(id)arg2;
- (id)makeDocumentWithContentsOfURL:(id)arg1 ofType:(id)arg2;
- (id)makeUntitledDocumentOfType:(id)arg1;
- (id)openDocumentWithContentsOfFile:(id)arg1 display:(BOOL)arg2;
- (id)openDocumentWithContentsOfURL:(id)arg1 display:(BOOL)arg2;
- (id)openDocumentWithContentsOfURL:(id)arg1 display:(BOOL)arg2 error:(id*)arg3;
- (id)openUntitledDocumentOfType:(id)arg1 display:(BOOL)arg2;
- (BOOL)reopenDocumentForURL:(id)arg1 withContentsOfURL:(id)arg2 error:(id*)arg3;
- (void)setShouldCreateUI:(BOOL)arg1;
- (BOOL)shouldCreateUI;
- (id)typeFromFileExtension:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;

// NSDocumentController (NSDeprecatedLongAgo)

- (BOOL)closeAllDocuments;
- (BOOL)reviewUnsavedDocumentsWithAlertTitle:(id)arg1 cancellable:(BOOL)arg2;

// NSDocumentController (NSInternal)

+ (id)_recentMenuItemTitlesFromLocationComponentChains:(id)arg1 includingIcons:(BOOL)arg2;
+ (id)_recentMenuItemTitlesFromRecentDocumentInfos:(id)arg1 includingIcons:(BOOL)arg2;
+ (BOOL)_resolveAutoreopenRecord:(id)arg1 intoDocumentURL:(id*)arg2 contentsURL:(id*)arg3 tryAgainLater:(BOOL*)arg4;
+ (void)_restoreAuxiliaryStateFromAutoreopenRecord:(id)arg1 toDocument:(id)arg2;
+ (Class)_seamlessDocumentCloserClass;
+ (Class)_seamlessDocumentOpenerClass;
+ (id)_sharedDocumentControllerNoCreate;

- (void)__closeAllDocumentsWithDelegate:(id)arg1 shouldTerminateSelector:(SEL)arg2;
- (BOOL)_allDocumentClassesAutosaveInPlace;
- (BOOL)_anyDocumentClassAutosavesInPlace;
- (BOOL)_anyDocumentClassPreservesVersions;
- (BOOL)_anyDocumentClassUsesUbiquitousStorage;
- (BOOL)_appPersistenceIsJustOff;
- (void)_autoreopenDocumentsFromRecords:(id)arg1 withCompletionHandler:(id)arg2;
- (void)_autoreopenDocumentsIgnoringExpendable:(BOOL)arg1 withCompletionHandler:(id)arg2;
- (id)_autosaveDirectoryURLCreateIfNecessary:(BOOL)arg1;
- (id)_autosaveRecordPathCreateIfNecessary:(BOOL)arg1;
- (BOOL)_autosavingContentsURLIsReserved:(id)arg1;
- (void)_closeAllDocumentsWithDelegate:(id)arg1 shouldTerminateSelector:(SEL)arg2;
- (unsigned long long)_countOfOpeningDocuments;
- (id)_createAutoreopenRecordForDocument:(id)arg1 withoutException:(BOOL)arg2;
- (id)_customizationOfError:(id)arg1 withDescription:(id)arg2 recoverySuggestion:(id)arg3 recoveryOptions:(id)arg4 recoveryAttempter:(id)arg5;
- (void)_depopulateOpenRecentMenu:(id)arg1;
- (id)_documentBeingDuplicated;
- (void)_documentDidEndAsynchronouslyPreservingVersion:(id)arg1;
- (id)_documentForAction:(SEL)arg1;
- (void)_documentWillBeginAsynchronouslyPreservingVersion:(id)arg1;
- (id)_fixedFailureReasonFromError:(id)arg1;
- (void)_getReadableNotWritable:(BOOL)arg1 types:(id)arg2 forDocumentClass:(Class)arg3;
- (unsigned long long)_indexOfOpeningDocument:(id)arg1;
- (void)_installOpenRecentMenus;
- (void)_invalidateRecentDocumentInfosForVolumeURL:(id)arg1;
- (void)_invalidateUnresolvedRecentDocumentInfos;
- (BOOL)_isAutoreopening;
- (BOOL)_isInaccessibleUbiquitousItemAtURL:(id)arg1;
- (BOOL)_isMainThreadBlockedByWaiter;
- (BOOL)_isNativeType:(id)arg1 forDocumentClass:(Class)arg2;
- (BOOL)_isPurgedItemAtURL:(id)arg1;
- (void)_noteAutoreopenStateChangedForDocument:(id)arg1;
- (void)_noteAutosavedContentsOfDocument:(id)arg1;
- (void)_notePendingRecentDocumentURLsIfNecessary;
- (void)_onMainThreadInvokeWorker:(id)arg1;
- (BOOL)_openFile:(id)arg1;
- (BOOL)_openUntitled;
- (void)_permitAutoreopeningOfDocuments;
- (void)_popMainThreadUnblockerThenContinue:(id)arg1;
- (void)_populateOpenRecentMenu:(id)arg1 includingIcons:(BOOL)arg2;
- (void)_populateRevertToMenu:(id)arg1;
- (void)_printDocumentsWithContentsOfURLs:(id)arg1 settings:(id)arg2 showPrintPanels:(BOOL)arg3 completionHandler:(id)arg4;
- (id)_pushMainThreadUnblocker:(id)arg1;
- (id)_recentDocumentInfoForKey:(id)arg1;
- (void)_reserveAutosavingContentsURL:(id)arg1;
- (id)_resolveRecentDocumentsForKey:(id)arg1 asynchronousUpdater:(id)arg2;
- (void)_resumeMainThreadUnblocker:(id)arg1;
- (void)_setDocumentBeingDuplicated:(id)arg1;
- (void)_setRevertToMenuHidden:(BOOL)arg1;
- (void)_setShouldInvertImplicitTabbingBehavior:(BOOL)arg1;
- (void)_setTabPlusButtonWasClicked:(BOOL)arg1;
- (BOOL)_shouldInvertImplicitTabbingBehavior;
- (BOOL)_showOpenPanel;
- (void)_suspendMainThreadUnblocker:(id)arg1 thenContinueWhenComplete:(id)arg2;
- (BOOL)_tabPlusButtonWasClicked;
- (id)_typeDescriptionForName:(id)arg1;
- (id)_typeDescriptions;
- (long long)_uniqueNumberForDocument:(id)arg1;
- (void)_unreserveAutosavingContentsURL:(id)arg1;
- (void)_updateMenu:(id)arg1 withRecentDocumentInfos:(id)arg2 includingIcons:(BOOL)arg3;
- (void)_updateSuddenTermination;
- (void)_updateTitleForMenuItem:(id)arg1 originalTitle:(id)arg2;
- (int)_utiUsage;
- (id)_willPresentOpenForPrintingError:(id)arg1 forURL:(id)arg2;
- (id)_windowAboveWindowOfOpeningDocumentAtIndex:(unsigned long long)arg1 orMakeKey:(BOOL*)arg2;
- (void)_writeAutoreopenRecords:(id)arg1;
- (void)_writeAutoreopenRecordsForOpenDocuments;

// NSDocumentController (NSJavaInternal)

+ (BOOL)_isJavaSubclass;

- (id)_invokeJavaOverrideForSelector:(SEL)arg1 withErrorAndOtherArguments:(id*)arg2;
- (id)_javaLastError;
- (void)_setJavaLastError:(id)arg1;
- (id)initJava1;
- (id)initJava2;

// NSDocumentController (NSPrivate)

- (void)__noteNewRecentDocumentURL:(id)arg1 forKey:(id)arg2;
- (void)_mountedVolumesDidChange:(id)arg1;
- (void)_noteNewRecentDocumentURL:(id)arg1 forKey:(id)arg2;
- (void)_noteRecentDocumentInfoRemoved:(id)arg1 forKey:(id)arg2;
- (void)_openRecentDocument:(id)arg1;
- (id)_recentDocumentRecordsKeyForMenuTag:(long long)arg1;
- (id)_recentDocumentURLsForKey:(id)arg1;
- (void)_startResolvingRecentDocumentURLsForKey:(id)arg1 includingResolved:(BOOL)arg2 preliminaryResultsHandler:(id)arg3 completionHandler:(id)arg4;

@end