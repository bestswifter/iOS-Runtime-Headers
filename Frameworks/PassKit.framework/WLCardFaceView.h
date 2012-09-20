/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class NSArray, WLCardColorProfile, UIImageView, NSMutableArray, WLCardFaceTemplate, UIView, UIImage, <WLCardFaceDelegate>, NSMutableSet, PKPass, WLBarCodeStickerView;

@interface WLCardFaceView : WLEasyToHitCustomView  {
    PKPass *_card;
    WLCardColorProfile *_colorProfile;
    UIView *_contentView;
    UIImageView *_backgroundView;
    UIImage *_faceImage;
    UIImage *_partialFaceImage;
    UIImageView *_dimmingView;
    NSMutableArray *_headerBucketViews;
    NSMutableArray *_bodyBucketViews;
    WLBarCodeStickerView *_barcodeView;
    int _contentViewCreatedRegions;
    int _invariantViewCreatedRegions;
    WLCardFaceTemplate *_faceTemplate;
    NSArray *_buckets;
    int _template;
    <WLCardFaceDelegate> *_delegate;
    BOOL _allowBackgroundPlaceHolders;
    int _backgroundMode;
    int _visibleRegions;
    BOOL _clipsContent;
    float _clippedContentHeight;
    NSMutableSet *_headerInvariantViews;
    NSMutableSet *_bodyInvariantViews;
    NSMutableSet *_headerContentViews;
    NSMutableSet *_bodyContentViews;
}

@property <WLCardFaceDelegate> * delegate;
@property int backgroundMode;
@property int visibleRegions;
@property BOOL clipsContent;
@property BOOL allowBackgroundPlaceHolders;
@property float clippedContentHeight;
@property(readonly) UIView * contentView;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } contentBounds;
@property(readonly) PKPass * card;
@property(readonly) WLCardColorProfile * colorProfile;
@property(readonly) NSMutableSet * headerInvariantViews;
@property(readonly) NSMutableSet * bodyInvariantViews;
@property(readonly) NSMutableSet * headerContentViews;
@property(readonly) NSMutableSet * bodyContentViews;
@property(readonly) NSArray * buckets;
@property(readonly) BOOL isFrontFace;
@property int template;
@property(retain) NSMutableArray * headerBucketViews;

+ (id)newBackFaceViewForTemplate:(int)arg1 tall:(BOOL)arg2;
+ (id)newFrontFaceViewForTemplate:(int)arg1;
+ (Class)_faceClassForTemplate:(int)arg1 front:(BOOL)arg2;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentBounds;
- (id)headerContentViews;
- (id)bodyInvariantViews;
- (id)headerInvariantViews;
- (void)setHeaderBucketViews:(id)arg1;
- (id)headerBucketViews;
- (void)setClippedContentHeight:(float)arg1;
- (float)clippedContentHeight;
- (BOOL)clipsContent;
- (int)visibleRegions;
- (void)setBackgroundMode:(int)arg1;
- (void)setAllowBackgroundPlaceHolders:(BOOL)arg1;
- (BOOL)allowBackgroundPlaceHolders;
- (int)template;
- (id)buckets;
- (void)presentDiff:(id)arg1 completion:(id)arg2;
- (void)createContentViewsWithFade:(BOOL)arg1;
- (void)setDimmer:(float)arg1 animated:(BOOL)arg2;
- (void)setClipsContent:(BOOL)arg1;
- (void)setVisibleRegions:(int)arg1;
- (void)setCard:(id)arg1 colorProfile:(id)arg2;
- (int)backgroundMode;
- (void)createHeaderContentViews;
- (void)createBodyInvariantViews;
- (void)createHeaderInvariantViews;
- (int)_backgroundForBucketTemplate:(id)arg1;
- (id)_relevantBuckets;
- (void)_setContentViewsAlpha:(float)arg1;
- (BOOL)isFrontFace;
- (void)_setShowsBackgroundView:(BOOL)arg1;
- (void)_setShowsBodyViews:(BOOL)arg1;
- (void)_setShowsHeaderViews:(BOOL)arg1;
- (void)_createContentViewsForRegions:(int)arg1;
- (void)_createInvariantViewsForRegions:(int)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })shadowInsets;
- (void)setTemplate:(int)arg1;
- (id)cardFaceTemplate;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })barcodeFrame;
- (id)bodyContentViews;
- (id)colorProfile;
- (void)createBodyContentViews;
- (id)card;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (struct CGSize { float x1; float x2; })contentSize;
- (id)contentView;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })alignmentRectInsets;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end