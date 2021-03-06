#import "CPTBorderedLayer.h"
#import "CPTTextStyle.h"

/// @file

extern const CGFloat kCPTTextLayerMarginWidth; ///< Margin width around the text.

@interface CPTTextLayer : CPTBorderedLayer {
    @private
    NSString *text;
    CPTTextStyle *textStyle;
    NSAttributedString *attributedText;
}

@property (readwrite, copy, nonatomic) NSString *text;
@property (readwrite, retain, nonatomic) CPTTextStyle *textStyle;
@property (readwrite, copy, nonatomic) NSAttributedString *attributedText;

/// @name Initialization
/// @{
-(id)initWithText:(NSString *)newText;
-(id)initWithText:(NSString *)newText style:(CPTTextStyle *)newStyle;
-(id)initWithAttributedText:(NSAttributedString *)newText;
/// @}

/// @name Layout
/// @{
-(CGSize)sizeThatFits;
-(void)sizeToFit;
/// @}

@end
