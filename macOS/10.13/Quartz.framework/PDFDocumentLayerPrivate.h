/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/PDFKit.framework/Versions/A/PDFKit
 */

@interface PDFDocumentLayerPrivate : NSObject {
    NSMutableDictionary * allPageWidgets;
    NSMutableDictionary * backgroundPageLayers;
    NSMutableDictionary * backgroundPageQualities;
    PDFCoachMarkManager * coachMarkManager;
    long long  displayMode;
    PDFDocument * document;
    NSObject<PDFPageLayerGeometryInterface> * geometryInterface;
    NSMutableDictionary * loadedPageLayers;
    PDFPageBackgroundManager * pageBackgroundManager;
    PDFRenderingProperties * renderingProperties;
    PDFSelection * searchSelection;
    NSMutableArray * searchSelectionLayers;
    PDFSelection * selection;
    NSMutableArray * selectionLayers;
    PDFTimer * updatePageLayerEffectsTimer;
    PDFTimer * updateTimer;
    PDFViewLayout * viewLayout;
}

- (void).cxx_destruct;

@end