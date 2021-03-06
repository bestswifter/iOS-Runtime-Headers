/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDStyle : NSObject <EDImmutableObject, NSCopying> {
    unsigned int mAlignmentInfoIndex;
    bool mAlignmentInfoOverridden;
    unsigned int mBordersIndex;
    bool mBordersOverridden;
    unsigned int mContentFormatId;
    bool mContentFormatOverridden;
    bool mDoNotModify;
    unsigned int mFillIndex;
    bool mFillOverridden;
    unsigned int mFontIndex;
    bool mFontOverridden;
    unsigned int mIndex;
    unsigned int mParentIndex;
    EDProtection *mProtection;
    bool mProtectionOverridden;
    EDResources *mResources;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)styleWithResources:(id)arg1;

- (id)alignmentInfo;
- (unsigned int)alignmentInfoIndex;
- (id)borders;
- (unsigned int)bordersIndex;
- (id)contentFormat;
- (unsigned int)contentFormatId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)fill;
- (unsigned int)fillIndex;
- (id)font;
- (unsigned int)fontIndex;
- (unsigned int)hash;
- (unsigned int)index;
- (id)initWithResources:(id)arg1;
- (bool)isAlignmentInfoOverridden;
- (bool)isBordersOverridden;
- (bool)isCenterAcrossAligned;
- (bool)isContentFormatOverridden;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToStyle:(id)arg1;
- (BOOL)isEquivalentToStyle:(id)arg1;
- (bool)isFillOverridden;
- (bool)isFontOverridden;
- (bool)isProtectionOverridden;
- (id)parent;
- (unsigned int)parentIndex;
- (id)protection;
- (void)setAlignmentInfo:(id)arg1;
- (void)setAlignmentInfoIndex:(unsigned int)arg1;
- (void)setAlignmentInfoOverridden:(bool)arg1;
- (void)setBorders:(id)arg1;
- (void)setBordersIndex:(unsigned int)arg1;
- (void)setBordersOverridden:(bool)arg1;
- (void)setContentFormat:(id)arg1;
- (void)setContentFormatId:(unsigned int)arg1;
- (void)setContentFormatOverridden:(bool)arg1;
- (void)setDoNotModify:(bool)arg1;
- (void)setFill:(id)arg1;
- (void)setFillIndex:(unsigned int)arg1;
- (void)setFillOverridden:(bool)arg1;
- (void)setFont:(id)arg1;
- (void)setFontIndex:(unsigned int)arg1;
- (void)setFontOverridden:(bool)arg1;
- (void)setIndex:(unsigned int)arg1;
- (void)setParent:(id)arg1;
- (void)setParentIndex:(unsigned int)arg1;
- (void)setProtection:(id)arg1;
- (void)setProtectionOverridden:(bool)arg1;

@end
