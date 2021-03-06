/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSValueBinderPlugin : _NSBinderPlugin <_NSValueBinderPlugin> {
    unsigned long long  _affectedIndex;
    NSIndexPath * _affectedIndexPath;
    struct __valueBinderPluginFlags { 
        unsigned int _isActionCellPlugin : 1; 
        unsigned int _isFormatterPlugin : 1; 
        unsigned int _isObjectValueInvalidationCapable : 1; 
        unsigned int _reservedValueBinderPlugin : 29; 
    }  _valueBinderPluginFlags;
    Class  _valueClass;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

+ (BOOL)isUsableWithObject:(id)arg1;

- (void)_actionHasBegun:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_actionHasBegun:(id)arg1 atIndexPath:(id)arg2;
- (Class)_valueClass:(id)arg1;
- (void)actionHasBegun:(id)arg1 sender:(id)arg2;
- (void)actionHasEnded:(id)arg1 sender:(id)arg2;
- (unsigned long long)allowedValueBindingMask;
- (BOOL)applyObjectValue:(id*)arg1 forBinding:(id)arg2 operation:(int*)arg3 needToRunAlert:(BOOL*)arg4 error:(id*)arg5;
- (id)binderReferenceObjectValue;
- (BOOL)canIgnoreSettingMinAndMaxForObject:(id)arg1;
- (BOOL)canSupportMinAndMaxForObject:(id)arg1;
- (BOOL)conditionalBehaviorOffByDefault:(id)arg1;
- (void)connectionWasBroken:(id)arg1;
- (void)connectionWasEstablished:(id)arg1;
- (void)dealloc;
- (/* Warning: unhandled struct encoding: '{__NSKeyValueCodingControllerModeType=qQ@}' */ struct __NSKeyValueCodingControllerModeType { long long x1; unsigned long long x2; id x3; })editedMode:(id)arg1 forEditingOrAction:(BOOL)arg2;
- (id)editingBinderForControl:(id)arg1;
- (void)editingHasBegun:(id)arg1;
- (void)editingHasEnded:(id)arg1;
- (void)editingWasAborted:(id)arg1;
- (id)formattedValueInObject:(id)arg1 errorEncountered:(BOOL*)arg2 error:(id*)arg3;
- (id)formatterOfObject:(id)arg1;
- (id)initWithBinder:(id)arg1 object:(id)arg2;
- (void)invalidateObjectValueInObject:(id)arg1;
- (BOOL)isBooleanValueBindingForObject:(id)arg1;
- (BOOL)isObjectTableColumnDataCell:(id)arg1;
- (BOOL)needsAction;
- (BOOL)needsDelegate;
- (id)objectMechanismsRequired;
- (id)objectValueInvalidationCapableObjectForObject:(id)arg1;
- (BOOL)prefersEnabledOverEditable:(id)arg1;
- (BOOL)shouldAlwaysUpdateDisplayValue;
- (BOOL)shouldIgnoreAction:(id)arg1;
- (BOOL)shouldProvideSortDescriptor:(id)arg1 optionsAdvertisingOnly:(BOOL)arg2;
- (void)showValue:(id)arg1 inObject:(id)arg2;
- (id)shownValueInObject:(id)arg1;
- (void)storeMin:(BOOL)arg1 andMax:(BOOL)arg2 ofObject:(id)arg3;
- (BOOL)updateCellOrControl:(id)arg1 forMaxValue:(id)arg2;
- (BOOL)updateCellOrControl:(id)arg1 forMinValue:(id)arg2;
- (Class)valueClass:(id)arg1;
- (Class)valueClass:(id)arg1 forBinding:(id)arg2;
- (id)viewForObject:(id)arg1;

@end
