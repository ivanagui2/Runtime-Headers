/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSDocumentMoreIVars : NSObject {
    BOOL  accommodatedDeletion;
    _NSDocumentActivity * activityBeingPerformed;
    BOOL  activityIsContinuing;
    NSObject<OS_dispatch_queue> * activityQueue;
    BOOL  advisoryAutosavingSafetyIsChecked;
    <NSDocumentAlternateContents> * alternateContents;
    unsigned long long  alternateContentsDisassociationReason;
    BOOL  appearsLocked;
    NSURL * autoDuplicateOriginalDocumentURL;
    int  autoID;
    BOOL  automaticDuplicateIsChecked;
    unsigned long long  autosaveElsewhereReason;
    NSURL * autosavedContentsFileURL;
    NSMutableArray * autosavingCheckChangeCounts;
    id  autosavingCheckWaiter;
    BOOL  autosavingCheckingIsDisabledForSaving;
    BOOL  autosavingCheckingIsDisabledForScripting;
    BOOL  autosavingIsImplicitlyCancellable;
    BOOL  autosavingPeriodicallyIsDisabled;
    BOOL  autosavingPossibilityIsChecked;
    BOOL  autosavingSafetyCheckingIsDisabled;
    BOOL  autosavingSafetyIsChecked;
    NSTimer * autosavingTimer;
    NSURL * backupFileURL;
    long long  cleanupOldVersionsDisableCount;
    BOOL  conflictHandlingSheetIsUp;
    BOOL  deferredTimerScheduling;
    BOOL  didBecomeDisconnected;
    BOOL  didChange;
    BOOL  didUpdateAfterReverting;
    struct { 
        long long generationCount; 
        long long changeCount; 
    }  differenceDueToDiscardableChanges;
    struct { 
        long long generationCount; 
        long long changeCount; 
    }  differenceDueToExplicitChanges;
    struct { 
        long long generationCount; 
        long long changeCount; 
    }  differenceDueToRecentChanges;
    struct { 
        long long generationCount; 
        long long changeCount; 
    }  differenceSinceAutosaving;
    struct { 
        long long generationCount; 
        long long changeCount; 
    }  differenceSincePreservingPreviousVersion;
    struct { 
        long long generationCount; 
        long long changeCount; 
    }  differenceSinceSaving;
    BOOL  disabledSuddenTermination;
    long long  diskFullRecoveryAttempts;
    long long  documentUniquingNumber;
    NSURL * duplicateDocumentDestinationURL;
    id  editorCommittingWaiter;
    NSPointerArray * editors;
    id  eventMonitor;
    _NSDocumentFileAccess * fileAccessBeingPerformed;
    NSObject<OS_dispatch_queue> * fileAccessQueue;
    NSString * fileContentsComment;
    unsigned long long  fileContentsPreservationReason;
    NSDate * fileModificationDate;
    NSOperationQueue * filePresenterQueue;
    long long  fileURLSandboxExtensionToken;
    double  firstUnsavedChangeTime;
    BOOL  forciblyEnableSaveAsShouldRevertOption;
    BOOL  hasPresentedMostRecentAutosavingError;
    BOOL  hasPreservedVersionInTemporaryStorage;
    BOOL  ignoreUndoAndRedoNotifications;
    BOOL  isAutoDuplicate;
    BOOL  isAutoDuplicateFromEmailAttachment;
    BOOL  isAutosaveAsDisabled;
    BOOL  isAutosavingBecauseOfTimer;
    BOOL  isDraft;
    BOOL  isDuplicate;
    BOOL  isHandlingConflicts;
    BOOL  isWaitingForWriter;
    NSError * javaLastError;
    struct __CFSet { } * javaVariantMethodsBeingInvoked;
    NSFileVersion * lastOpenedVersion;
    double  lastPreservationTime;
    double  lastUnsavedChangeTime;
    NSError * mostRecentAutosavingError;
    NSFileVersion * mostRecentPreservedVersion;
    BOOL  needsAutomaticDuplicate;
    NSURL * newFileURL;
    NSArray * nonModalErrors;
    NSFileVersion * oldVersion;
    NSURL * originalContentsURLDuringWriting;
    NSString * originalDisplayName;
    NSDocument * originalDocument;
    NSURL * originalDocumentURL;
    NSString * originalFileName;
    NSNumber * originalParentFolderID;
    NSMutableArray * pendingActivities;
    NSMutableArray * pendingFileAccess;
    NSFileVersion * previousSavedVersion;
    BOOL  previousSavedVersionIsChecked;
    NSObject<OS_dispatch_queue> * previousSavedVersionLookupQueue;
    NSString * providerPurposeIdentifier;
    BOOL  readInitialContents;
    unsigned int  recentDocumentID;
    NSSavePanel * savePanel;
    NSNumber * savePanelNameExtensionHidden;
    NSArray * savePanelTagNames;
    BOOL  savingWhileClosing;
    BOOL  scheduledCleanupOldVersions;
    NSPersonNameComponents * sharingOwnerNameComponents;
    unsigned long long  sharingState;
    BOOL  shouldSkipTemporaryVersionStorageAlert;
    BOOL  showAutosaveButton;
    BOOL  suppressSettingFileIsDraft;
    BOOL  suppressWindowTitleDisplayNameEmbellishment;
    NSArray * tagNames;
    id  temporaryVersionStorageIdentifier;
    NSError * temporaryVersionStorageRequirementError;
    BOOL  updateFileWrapperNamesDuringWriting;
    BOOL  userClickedDontSaveInLastRunSavePanel;
    NSConditionLock * userInteractionLock;
    NSFileVersion * versionWithoutRecentChanges;
    BOOL  versionWithoutRecentChangesIsNotLastOpened;
    long long  versionsButtonTransactionCount;
    BOOL  waitingForEditorCommiting;
}

@property (atomic, readwrite) unsigned int recentDocumentID;

- (id)description;
- (unsigned int)recentDocumentID;
- (void)setRecentDocumentID:(unsigned int)arg1;

@end
