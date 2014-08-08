/******************************************************************************
 *
 * Name:	GPIO.h
 * Project:	Hermon-2
 * Purpose:	Testing
 *
 ******************************************************************************/

/******************************************************************************
 *
 *  (C)Copyright 2005 - 2011 Marvell. All Rights Reserved.
 *  
 *  THIS IS UNPUBLISHED PROPRIETARY SOURCE CODE OF MARVELL.
 *  The copyright notice above does not evidence any actual or intended 
 *  publication of such source code.
 *  This Module contains Proprietary Information of Marvell and should be
 *  treated as Confidential.
 *  The information in this file is provided for the exclusive use of the 
 *  licensees of Marvell.
 *  Such users have the right to use, modify, and incorporate this code into 
 *  products for purposes authorized by the license agreement provided they 
 *  include this notice and the associated copyright notice with any such
 *  product. 
 *  The information in this file is provided "AS IS" without warranty.
 *
 ******************************************************************************/

/******************************************************************************
 *
 * This file was automatically generated by reg.pl using  *	GPIO.csv
 *
 ******************************************************************************/

/******************************************************************************
 *
 * History:
 *
 ********* PLEASE INSERT THE CVS HISTORY OF THE PREVIOUS VERSION HERE. *********
 *******************************************************************************/

#ifndef	__INC_GPIO_H
#define	__INC_GPIO_H


/*
 *
 *	THE BASE ADDRESSES
 *
 */
#define	GPIO0_BASE	0xD4019000
#define	GPIO1_BASE	0xD4019004
#define	GPIO2_BASE	0xD4019008
#define	GPIO3_BASE	0xD4019100

/*
 *
 *	THE REGISTER DEFINES
 *
 */
#define	GPIO_PLR	(0x0000)	/* 32 bit	GPIO Pin-Level Register */
#define	GPIO_PDR	(0x000C)	/* 32 bit	GPIO Pin Direction Register */
#define	GPIO_PSR	(0x0018)	/* 32 bit	GPIO Pin Output Set Register */
#define	GPIO_PCR	(0x0024)	/* 32 bit	GPIO Pin Output Clear
										 *			Register
										 */
#define	GPIO_RER	(0x0030)	/* 32 bit	GPIO Rising-Edge Detect
										 *			Enable Register
										 */
#define	GPIO_FERX	(0x003C)	/* 32 bit	GPIO Falling-Edge Detect
										 *			Enable Register
										 */
#define	GPIO_EDR	(0x0048)	/* 32 bit	GPIO Edge Detect Status
										 *			Register
										 */
#define	GPIO_SDR	(0x0054)	/* 32 bit	Bit-wise Set of GPIO
										 *			Direction Register
										 */
#define	GPIO_CDR	(0x0060)	/* 32 bit	Bit-wise Clear of GPIO
										 *			Direction Register
										 */
#define	GPIO_SRERX	(0x006c)	/* 32 bit	Bit-wise Set of GPIO Rising
										 *			Edge Detect Enable
										 *			Register
										 */
#define	GPIO_CRERX	(0x0078)	/* 32 bit	Bit-wise Clear of GPIO
										 *			Rising Edge Detect Enable
										 *			Register
										 */
#define	GPIO_SFER	(0x0084)	/* 32 bit	Bit-wise Set of GPIO
										 *			Falling Edge Detect
										 *			Enable Register
										 */
#define	GPIO_CFER	(0x0090)	/* 32 bit	Bit-wise Clear of GPIO
										 *			Falling Edge Detect
										 *			Enable Register
										 */
#define	APMASK		(0x009c)	/* 32 bit	AP Bit-wise Mask of GPIO
										 *			Edge Detect Register
										 */
#define	CPMASK		(0x00a8)	/* 32 bit	CP Bit-wise Mask of GPIO
										 *			Edge Detect Register
										 */

/*
 *
 *	THE BIT DEFINES
 *
 */
/*	GPIO_PLR	0x0000	GPIO Pin-Level Register */
#define	GPIO_PLR_PLX_MSK		SHIFT0(0xffffffff)	/* PL{n} */
#define	GPIO_PLR_PLX_BASE		0

/*	GPIO_PDR	0x000C	GPIO Pin Direction Register */
#define	GPIO_PDR_PDX_MSK		SHIFT0(0xffffffff)	/* PD{n} */
#define	GPIO_PDR_PDX_BASE		0

/*	GPIO_PSR	0x0018	GPIO Pin Output Set Register */
#define	GPIO_PSR_PSX_MSK		SHIFT0(0xffffffff)	/* PS{n} */
#define	GPIO_PSR_PSX_BASE		0

/*	GPIO_PCR	0x0024	GPIO Pin Output Clear Register */
#define	GPIO_PCR_PCX_MSK		SHIFT0(0xffffffff)	/* PC{n} */
#define	GPIO_PCR_PCX_BASE		0

/*	GPIO_RER	0x0030	GPIO Rising-Edge Detect Enable Register */
#define	GPIO_RER_REX_MSK		SHIFT0(0xffffffff)	/* RE{n} */
#define	GPIO_RER_REX_BASE		0

/*	GPIO_FERx	0x003C	GPIO Falling-Edge Detect Enable Register */
#define	GPIO_FERX_FEX_MSK		SHIFT0(0xffffffff)	/* FE{n} */
#define	GPIO_FERX_FEX_BASE		0

/*	GPIO_EDR	0x0048	GPIO Edge Detect Status Register */
#define	GPIO_EDR_EDX_MSK		SHIFT0(0xffffffff)	/* ED{n} */
#define	GPIO_EDR_EDX_BASE		0

/*	GPIO_SDR	0x0054	Bit-wise Set of GPIO Direction Register */
#define	GPIO_SDR_PDX_MSK		SHIFT0(0xffffffff)	/* PD{n} */
#define	GPIO_SDR_PDX_BASE		0

/*	GPIO_CDR	0x0060	Bit-wise Clear of GPIO Direction Register */
#define	GPIO_CDR_PDX_MSK		SHIFT0(0xffffffff)	/* PD{n} */
#define	GPIO_CDR_PDX_BASE		0

/*	GPIO_SRERx	0x006c	Bit-wise Set of GPIO Rising Edge Detect Enable Register */
#define	GPIO_SRERX_PDX_MSK		SHIFT0(0xffffffff)	/* PD{n} */
#define	GPIO_SRERX_PDX_BASE		0

/*	GPIO_CRERx	0x0078	Bit-wise Clear of GPIO Rising Edge Detect Enable
 *						Register
 */
#define	GPIO_CRERX_PDX_MSK		SHIFT0(0xffffffff)	/* PD{n} */
#define	GPIO_CRERX_PDX_BASE		0

/*	GPIO_SFER	0x0084	Bit-wise Set of GPIO Falling Edge Detect Enable
 *						Register
 */
#define	GPIO_SFER_PDX_MSK		SHIFT0(0xffffffff)	/* PD{n} */
#define	GPIO_SFER_PDX_BASE		0

/*	GPIO_CFER	0x0090	Bit-wise Clear of GPIO Falling Edge Detect Enable
 *						Register
 */
#define	GPIO_CFER_PDX_MSK		SHIFT0(0xffffffff)	/* PD{n} */
#define	GPIO_CFER_PDX_BASE		0

/*	APMASK		0x009c	AP Bit-wise Mask of GPIO Edge Detect Register */
#define	APMASK_PDX_MSK		SHIFT0(0xffffffff)	/* PD{n} */
#define	APMASK_PDX_BASE		0

/*	CPMASK		0x00a8	CP Bit-wise Mask of GPIO Edge Detect Register */
#define	CPMASK_PDX_MSK		SHIFT0(0xffffffff)	/* PD{n} */
#define	CPMASK_PDX_BASE		0



/* -------------------- */


#endif	/* __INC_GPIO_H */
