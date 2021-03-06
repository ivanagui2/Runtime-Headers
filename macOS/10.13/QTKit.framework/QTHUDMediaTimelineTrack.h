/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
 */

@interface QTHUDMediaTimelineTrack : NSObject {
    id  _identifier;
    QTHUDMediaTimelineTrackPreview * _preview;
    id  _representedObject;
    QTHUDMediaTimelineView * _timelineView;
}

@property (nonatomic, readonly) id identifier;
@property (nonatomic, readwrite, retain) QTHUDMediaTimelineTrackPreview *preview;
@property (nonatomic, readwrite, retain) id representedObject;
@property (nonatomic, readwrite) QTHUDMediaTimelineView *timelineView;

- (void)dealloc;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (id)preview;
- (id)representedObject;
- (void)setPreview:(id)arg1;
- (void)setRepresentedObject:(id)arg1;
- (void)setTimelineView:(id)arg1;
- (id)timelineView;

@end
