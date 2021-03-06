/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Carbon.framework/Versions/A/Frameworks/Ink.framework/Versions/A/Ink
 */

@interface InkClientSideEvent : NSObject {
    BOOL  _NSEventSourceEvent;
    struct OpaqueEventRef { } * _carbonEventRef;
    struct __CGEvent { } * _cgEventRef;
    BOOL  _cgEventRefIsFake;
    BOOL  _cgEventRefLoaded;
    unsigned long long  _dispatchCommand;
    NSEvent * _event;
    unsigned int  _eventManagerResult;
    unsigned long long  _eventTypeOverride;
    BOOL  _explicitlySentFromInkServer;
    struct CGPoint { 
        double x; 
        double y; 
    }  _globalHIMouseLocation;
    struct CGPoint { 
        double x; 
        double y; 
    }  _globalNSMouseLocation;
    BOOL  _hasKeyFocus;
    InkContext * _inkContext;
    BOOL  _mousePointCached;
    unsigned short  _overridePressure;
    BOOL  _overridetabletData;
    BOOL  _shouldOverRideEventType;
    unsigned int  _tabletEventType;
    BOOL  _tabletEventTypeCached;
    struct TabletPointRec { 
        int absX; 
        int absY; 
        int absZ; 
        unsigned short buttons; 
        unsigned short pressure; 
        short tiltX; 
        short tiltY; 
        unsigned short rotation; 
        short tangentialPressure; 
        unsigned short deviceID; 
        short vendor1; 
        short vendor2; 
        short vendor3; 
    }  _tabletPointRec;
}

@property (atomic, readwrite) BOOL cgEventRefIsFake;
@property (atomic, readwrite) unsigned long long dispatchCommand;
@property (atomic, readwrite) unsigned int eventManagerResult;
@property (atomic, readwrite) unsigned long long eventTypeOverride;
@property (atomic, readwrite) BOOL explicitlySentFromInkServer;
@property (atomic, readwrite) struct CGPoint { double x1; double x2; } globalHIMouseLocation;
@property (atomic, readwrite) struct CGPoint { double x1; double x2; } globalNSMouseLocation;
@property (atomic, readwrite) BOOL hasKeyFocus;
@property (atomic, readwrite) BOOL mousePointCached;
@property (atomic, readwrite, retain) NSEvent *nsEvent;
@property (atomic, readwrite) BOOL nsEventSource;
@property (atomic, readwrite) unsigned short overridePressure;
@property (atomic, readwrite) BOOL overrideTabletData;
@property (atomic, readwrite) float pressure;
@property (atomic, readwrite) BOOL shouldOverRideEventType;
@property (atomic, readwrite) unsigned int tabletEventType;
@property (atomic, readwrite) BOOL tabletEventTypeCached;

- (BOOL)HasCGEventFlag:(unsigned int)arg1;
- (BOOL)HasValidInkButtonDown;
- (void)LogEventDetails;
- (BOOL)buttonNumber;
- (unsigned int)carbonEventKind;
- (struct __CGEvent { }*)cgEventRef;
- (BOOL)cgEventRefIsFake;
- (unsigned int)cgEventType;
- (double)cgsEventTime;
- (BOOL)connectionIDMatches:(unsigned int)arg1;
- (void)dealloc;
- (unsigned int)determineEarlyDisposition;
- (unsigned short)determineEventTargetWithCurrentTarget:(unsigned short)arg1 withContextPSN:(struct ProcessSerialNumber { unsigned int x1; unsigned int x2; })arg2;
- (unsigned long long)dispatchCommand;
- (BOOL)eventIsInProcessName:(id)arg1;
- (BOOL)eventLocationIsOnMenuClassWindow;
- (BOOL)eventLocationIsOverWindowWithConnectionID:(unsigned int)arg1;
- (unsigned int)eventManagerResult;
- (const void*)eventRef;
- (unsigned long long)eventTypeOverride;
- (BOOL)explicitlySentFromInkServer;
- (void)finalize;
- (void)fixPressureForEventType;
- (struct CGPoint { double x1; double x2; })globalHIMouseLocation;
- (struct CGPoint { double x1; double x2; })globalNSMouseLocation;
- (BOOL)hasEventParameterKey:(unsigned int)arg1;
- (BOOL)hasKeyFocus;
- (void)initCommon;
- (id)initWithCarbonEvent:(struct OpaqueEventRef { }*)arg1 andInkContext:(id)arg2;
- (id)initWithInkClientSideEvent:(id)arg1 andInkContext:(id)arg2;
- (id)initWithNSEvent:(id)arg1 andInkContext:(id)arg2;
- (BOOL)isCarbonMouseEventType:(unsigned int)arg1 useModifiedEventType:(BOOL)arg2;
- (BOOL)isEnteringProximity;
- (BOOL)isSimulatingValidInkEvent;
- (BOOL)isTabletEventSubType:(unsigned int)arg1;
- (unsigned int)modifiedEventType;
- (unsigned long long)modifierFlags;
- (BOOL)mousePointCached;
- (id)nsEvent;
- (BOOL)nsEventSource;
- (unsigned short)overridePressure;
- (BOOL)overrideTabletData;
- (float)pressure;
- (void)repostCGEventToCGConnection:(unsigned int)arg1 markAsReposted:(BOOL)arg2;
- (void)resetCarbonEvent:(struct OpaqueEventRef { }*)arg1;
- (void)resetNSEvent:(id)arg1;
- (void)setCgEventRefIsFake:(BOOL)arg1;
- (void)setDispatchCommand:(unsigned long long)arg1;
- (void)setEventManagerResult:(unsigned int)arg1;
- (int)setEventParameterKey:(unsigned int)arg1;
- (void)setEventTypeOverride:(unsigned long long)arg1;
- (void)setExplicitlySentFromInkServer:(BOOL)arg1;
- (void)setGlobalHIMouseLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setGlobalNSMouseLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setHasKeyFocus:(BOOL)arg1;
- (void)setMousePointCached:(BOOL)arg1;
- (void)setNsEvent:(id)arg1;
- (void)setNsEventSource:(BOOL)arg1;
- (void)setOverridePressure:(unsigned short)arg1;
- (void)setOverrideTabletData:(BOOL)arg1;
- (void)setPressure:(float)arg1;
- (void)setShouldOverRideEventType:(BOOL)arg1;
- (void)setTabletEventType:(unsigned int)arg1;
- (void)setTabletEventTypeCached:(BOOL)arg1;
- (BOOL)shouldOverRideEventType;
- (void)simulateInvalidMouseEventForInkOnDemand:(BOOL)arg1;
- (void)simulateNonTabletPointEventForInkInAirRequireMouseUp:(BOOL)arg1;
- (void)simulateTabletPointEventForInkInAir:(BOOL)arg1;
- (void)simulateTabletPointForMouseUsingModifiedType:(BOOL)arg1;
- (unsigned long long)subtype;
- (unsigned short)tabletButtonMask;
- (unsigned int)tabletEventType;
- (BOOL)tabletEventTypeCached;
- (struct TabletPointRec { int x1; int x2; int x3; unsigned short x4; unsigned short x5; short x6; short x7; unsigned short x8; short x9; unsigned short x10; short x11; short x12; short x13; }*)tabletPointRecPtr;
- (unsigned short)uint16_pressure;
- (BOOL)wasDispatchedByInkServer;
- (BOOL)willRepostInkPadIntersectingEventForInInkPadBounds:(BOOL)arg1;

@end
