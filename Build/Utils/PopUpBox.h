#ifndef __POPUP_BOX
#define __POPUP_BOX

#include "Types.h"

#define MAX_POPUP_BOX_COUNT 20
#define MAX_POPUP_BOX_STRING_COUNT 50		// worst case = 45: move menu with 20 soldiers, each on different squad + overhead

// PopUpBox Flags
#define POPUP_BOX_FLAG_CLIP_TEXT 1
#define POPUP_BOX_FLAG_CENTER_TEXT 2
#define POPUP_BOX_FLAG_RESIZE 4
#define POPUP_BOX_FLAG_CAN_HIGHLIGHT_SHADED_LINES 8

#define NO_POPUP_BOX -1

INT32 CreatePopUpBox(SGPRect Dimensions, SGPPoint Position, UINT32 uiFlags);

void SetMargins(INT32 hBoxHandle, UINT32 uiLeft, UINT32 uiTop, UINT32 uiBottom,
								UINT32 uiRight);
UINT32 GetTopMarginSize( INT32 hBoxHandle );
void SetLineSpace(INT32 hBoxHandle, UINT32 uiLineSpace);
UINT32 GetLineSpace( INT32 hBoxHandle );
void SetBoxBuffer(INT32 hBoxHandle, UINT32 uiBuffer);
void SetBoxPosition(INT32 hBoxHandle,SGPPoint Position);
void GetBoxPosition( INT32 hBoxHandle, SGPPoint *Position );
UINT32 GetNumberOfLinesOfTextInBox( INT32 hBoxHandle );
void SetBoxSize( INT32 hBoxHandle, SGPRect Dimensions );
void GetBoxSize(  INT32 hBoxHandle, SGPRect *Dimensions );
void SetBorderType(INT32 hBoxHandle,INT32 BorderObjectIndex);
void SetBackGroundSurface(INT32 hBoxHandle, INT32 BackGroundSurfaceIndex);
void AddMonoString(INT32 *hStringHandle, const wchar_t *pString);
void SetBoxFont(INT32 hBoxHandle, UINT32 uiFont);
UINT32 GetBoxFont( INT32 hBoxHandle );
void SetBoxForeground(INT32 hBoxHandle, UINT8 ubColor);
void SetBoxBackground(INT32 hBoxHandle, UINT8 ubColor);
void SetBoxHighLight(INT32 hBoxHandle, UINT8 ubColor);
void SetBoxShade(INT32 hBoxHandle, UINT8 ubColor);
void ShadeStringInBox( INT32 hBoxHandle, INT32 iLineNumber );
void UnShadeStringInBox( INT32 hBoxHandle, INT32 iLineNumber );
void HighLightBoxLine( INT32 hBoxHandle, INT32 iLineNumber );
void UnHighLightLine(INT32 hStringHandle);
void UnHighLightBox(INT32 hBoxHandle);
void RemoveAllCurrentBoxStrings( void );
void RemoveBox(INT32 hBoxHandle);
void ShowBox(INT32 hBoxHandle);
void HideBox(INT32 hBoxHandle);
void DisplayBoxes(UINT32 uiBuffer);
void DisplayOnePopupBox( UINT32 uiIndex, UINT32 uiBuffer );
void SetCurrentBox(INT32 hBoxHandle);

// resize this box to the text it contains
void ResizeBoxToText(INT32 hBoxHandle);

// force update/redraw of this boxes background
void ForceUpDateOfBox( UINT32 uiIndex );

// force redraw of ALL boxes
void MarkAllBoxesAsAltered( void );


// is the box being displayed?
BOOLEAN IsBoxShown( UINT32 uiHandle );


// is this line in the current box set to a shaded state ?
BOOLEAN GetBoxShadeFlag( INT32 hBoxHandle, INT32 iLineNumber );

// set boxes foreground color
void SetBoxLineForeground( INT32 iBox, INT32 iStringValue, UINT8 ubColor );

// hide all visible boxes
void HideAllBoxes( void );

// add the second column monocrome string
void AddSecondColumnMonoString( INT32 *hStringHandle, const wchar_t *pString );

// set the 2nd column font for this box
void SetBoxSecondColumnFont(INT32 hBoxHandle, UINT32 uiFont);

// set the minimum offset
void SetBoxSecondColumnMinimumOffset( INT32 hBoxHandle, UINT32 uiWidth );

// now on a box wide basis, one if recomened to use this function after adding all the strings..rather than on an individual basis
void SetBoxSecondColumnForeground(INT32 hBoxHandle, UINT8 ubColor);
void SetBoxSecondColumnBackground(INT32 hBoxHandle, UINT8 ubColor);
void SetBoxSecondColumnHighLight(INT32 hBoxHandle, UINT8 ubColor);
void SetBoxSecondColumnShade(INT32 hBoxHandle, UINT8 ubColor);


// secondary shades for boxes
void UnSecondaryShadeStringInBox( INT32 hBoxHandle, INT32 iLineNumber );
void SecondaryShadeStringInBox( INT32 hBoxHandle, INT32 iLineNumber );
void SetBoxSecondaryShade( INT32 iBox, UINT8 ubColor );


// min width for box
void SpecifyBoxMinWidth( INT32 hBoxHandle, INT32 iMinWidth );

#endif
