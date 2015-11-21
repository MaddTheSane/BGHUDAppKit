/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <Cocoa/Cocoa.h>

@interface NSTokenAttachmentCell : NSTextAttachmentCell
{
    id _representedObject;
    id _textColor;
    id _reserved;
    struct {
        unsigned int _selected:1;
        unsigned int _edgeStyle:2;
        unsigned int _reserved:29;
    } _tacFlags;
}

+ (void)initialize;
- (id)initTextCell:(id)fp8;
- (id)init;
- (id)representedObject;
- (void)setRepresentedObject:(id)fp8;
- (int)interiorBackgroundStyle;
- (BOOL)_hasMenu;
- (id)tokenForegroundColor;
- (id)tokenBackgroundColor;
- (id)textColor;
- (void)setTextColor:(id)fp8;
- (id)pullDownImage;
- (id)menu;
- (NSSize)cellSizeForBounds:(NSRect)fp8;
- (NSSize)cellSize;
- (NSRect)drawingRectForBounds:(NSRect)fp8;
- (NSRect)titleRectForBounds:(NSRect)fp8;
- (NSRect)cellFrameForTextContainer:(id)fp8 proposedLineFragment:(NSRect)fp12 glyphPosition:(NSPoint)fp28 characterIndex:(unsigned int)fp36;
- (NSPoint)cellBaselineOffset;
- (NSRect)pullDownRectForBounds:(NSRect)fp8;
- (void)drawTokenWithFrame:(NSRect)fp8 inView:(id)fp24;
- (void)drawInteriorWithFrame:(NSRect)fp8 inView:(id)fp24;
- (void)drawWithFrame:(NSRect)fp8 inView:(id)fp24;
- (void)drawWithFrame:(NSRect)fp8 inView:(id)fp24 characterIndex:(unsigned int)fp28 layoutManager:(id)fp32;
- (void)encodeWithCoder:(id)fp8;
- (id)initWithCoder:(id)fp8;
- (BOOL)wantsToTrackMouseForEvent:(id)fp8 inRect:(NSRect)fp12 ofView:(id)fp28 atCharacterIndex:(unsigned int)fp32;
- (BOOL)trackMouse:(id)fp8 inRect:(NSRect)fp12 ofView:(id)fp28 atCharacterIndex:(unsigned int)fp32 untilMouseUp:(BOOL)fp36;

@end

