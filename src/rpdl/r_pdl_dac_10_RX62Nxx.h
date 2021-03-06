/*""FILE COMMENT""*************************************************************
* System Name	: DAC API for RX62Nxx
* File Name		: r_pdl_dac_10_RX62Nxx.h
* Version		: 1.11
* Contents		: DAC header
* Customer		:
* Model			:
* Order			:
* CPU			: RX
* Compiler		: RXC
* OS			: Nothing
* Programmer	:
* Note			:
*******************************************************************************
* Copyright, 2014. Renesas Electronics Corporation and Renesas Solutions Corp.
*******************************************************************************
* History		: 2014.07.16
*				: Ver 1.11
*				: CS release
*""FILE COMMENT END""*********************************************************/

#ifndef R_PDL_DAC_10_RX62Nxx_H
#define R_PDL_DAC_10_RX62Nxx_H

/* Library prototypes */
bool R_DAC_10_CreateAll(
	const uint8_t,
	const uint16_t,
	const uint16_t
);
bool R_DAC_10_DestroyAll(
	const uint8_t
);
bool R_DAC_10_WriteAll(
	const uint8_t,
	const uint16_t,
	const uint16_t
);

/* Macro definitions */

#define R_DAC_10_Create(a, b, c) \
( \
R_DAC_10_CreateAll( (a), (b), (c) ) \
)

#define R_DAC_10_Destroy(a) \
( \
R_DAC_10_DestroyAll( (a) ) \
)

#define R_DAC_10_Write(a, b, c) \
( \
R_DAC_10_WriteAll( (a), (b), (c) ) \
)

#endif
/* End of file */
