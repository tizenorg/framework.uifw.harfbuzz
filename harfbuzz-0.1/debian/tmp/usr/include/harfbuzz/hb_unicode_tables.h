
/*
 * Copyright (C) 2010  Samsung India Software Operations Pvt. Ltd.
 *
 * This is part of HarfBuzz, an OpenType Layout engine library.
 *
 * Permission is hereby granted, without written agreement and without
 * license or royalty fees, to use, copy, modify, and distribute this
 * software and its documentation for any purpose, provided that the
 * above copyright notice and the following two paragraphs appear in
 * all copies of this software.
 *
 * IN NO EVENT SHALL THE COPYRIGHT HOLDER BE LIABLE TO ANY PARTY FOR
 * DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES
 * ARISING OUT OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN
 * IF THE COPYRIGHT HOLDER HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH
 * DAMAGE.
 *
 * THE COPYRIGHT HOLDER SPECIFICALLY DISCLAIMS ANY WARRANTIES, INCLUDING,
 * BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND
 * FITNESS FOR A PARTICULAR PURPOSE.  THE SOFTWARE PROVIDED HEREUNDER IS
 * ON AN "AS IS" BASIS, AND THE COPYRIGHT HOLDER HAS NO OBLIGATION TO
 * PROVIDE MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS.
 */

#ifndef __hb_unicode_tables_h__
#define __hb_unicode_tables_h__

#include "math.h"
#include "harfbuzz-shaper.h"
#include "harfbuzz-shaper-private.h"

typedef struct
{
	HB_UShort scriptID;//it can be sript id if subtable is null, else size of subtable
	HB_Script *pSubTable;

}unicodeScriptTableStruct;

HB_Script subTableThanaSyriac[] = 
{
	HB_Script_Syriac,//0x00
	HB_Script_Syriac,
	HB_Script_Syriac,
	HB_Script_Syriac,

	HB_Script_Syriac,
	HB_Script_Syriac,
	HB_Script_Syriac,
	HB_Script_Syriac,

	HB_Script_Syriac,//0x08
	HB_Script_Syriac,
	HB_Script_Syriac,
	HB_Script_Syriac,

	HB_Script_Syriac,
	HB_Script_Syriac,
	HB_Script_Syriac,
	HB_Script_Syriac,


	HB_Script_Syriac,//0x10
	HB_Script_Syriac,
	HB_Script_Syriac,
	HB_Script_Syriac,

	HB_Script_Syriac,
	HB_Script_Syriac,
	HB_Script_Syriac,
	HB_Script_Syriac,


	HB_Script_Syriac,//0x18
	HB_Script_Syriac,
	HB_Script_Syriac,
	HB_Script_Syriac,

	HB_Script_Syriac,
	HB_Script_Syriac,
	HB_Script_Syriac,
	HB_Script_Syriac,


	HB_Script_Syriac,//0x20
	HB_Script_Syriac,
	HB_Script_Syriac,
	HB_Script_Syriac,

	HB_Script_Syriac,
	HB_Script_Syriac,
	HB_Script_Syriac,
	HB_Script_Syriac,

	HB_Script_Syriac,//0x28
	HB_Script_Syriac,
	HB_Script_Syriac,
	HB_Script_Syriac,

	HB_Script_Syriac,
	HB_Script_Syriac,
	HB_Script_Syriac,
	HB_Script_Syriac,


	HB_Script_Syriac,//0x30
	HB_Script_Syriac,
	HB_Script_Syriac,
	HB_Script_Syriac,

	HB_Script_Syriac,
	HB_Script_Syriac,
	HB_Script_Syriac,
	HB_Script_Syriac,

	HB_Script_Syriac,//0x38
	HB_Script_Syriac,
	HB_Script_Syriac,
	HB_Script_Syriac,

	HB_Script_Syriac,
	HB_Script_Syriac,
	HB_Script_Syriac,
	HB_Script_Syriac,

	HB_Script_Syriac,//0x40
	HB_Script_Syriac,
	HB_Script_Syriac,
	HB_Script_Syriac,

	HB_Script_Syriac,
	HB_Script_Syriac,
	HB_Script_Syriac,
	HB_Script_Syriac,


	HB_Script_Syriac,//0x48
	HB_Script_Syriac,
	HB_Script_Syriac,
	HB_Script_Syriac,

	HB_Script_Syriac,
	HB_Script_Syriac,
	HB_Script_Syriac,
	HB_Script_Syriac,//0x4f

	HB_Script_Common,//0x50
	HB_Script_Common,
	HB_Script_Common,
	HB_Script_Common,

	HB_Script_Common,
	HB_Script_Common,
	HB_Script_Common,
	HB_Script_Common,

	HB_Script_Common,//0x58
	HB_Script_Common,
	HB_Script_Common,
	HB_Script_Common,

	HB_Script_Common,
	HB_Script_Common,
	HB_Script_Common,
	HB_Script_Common,

	HB_Script_Common,//0x60
	HB_Script_Common,
	HB_Script_Common,
	HB_Script_Common,

	HB_Script_Common,
	HB_Script_Common,
	HB_Script_Common,
	HB_Script_Common,

	HB_Script_Common,//0x68
	HB_Script_Common,
	HB_Script_Common,
	HB_Script_Common,

	HB_Script_Common,
	HB_Script_Common,
	HB_Script_Common,
	HB_Script_Common,

	HB_Script_Common,//0x70
	HB_Script_Common,
	HB_Script_Common,
	HB_Script_Common,

	HB_Script_Common,
	HB_Script_Common,
	HB_Script_Common,
	HB_Script_Common,

	HB_Script_Common,//0x78
	HB_Script_Common,
	HB_Script_Common,
	HB_Script_Common,

	HB_Script_Common,
	HB_Script_Common,
	HB_Script_Common,
	HB_Script_Common,

	HB_Script_Thaana,//0x80
	HB_Script_Thaana,
	HB_Script_Thaana,
	HB_Script_Thaana,

	HB_Script_Thaana,
	HB_Script_Thaana,
	HB_Script_Thaana,
	HB_Script_Thaana,

	HB_Script_Thaana,//0x88
	HB_Script_Thaana,
	HB_Script_Thaana,
	HB_Script_Thaana,

	HB_Script_Thaana,
	HB_Script_Thaana,
	HB_Script_Thaana,
	HB_Script_Thaana,

	HB_Script_Thaana,//0x90
	HB_Script_Thaana,
	HB_Script_Thaana,
	HB_Script_Thaana,

	HB_Script_Thaana,
	HB_Script_Thaana,
	HB_Script_Thaana,
	HB_Script_Thaana,

	HB_Script_Thaana,//0x98
	HB_Script_Thaana,
	HB_Script_Thaana,
	HB_Script_Thaana,

	HB_Script_Thaana,
	HB_Script_Thaana,
	HB_Script_Thaana,
	HB_Script_Thaana,

	HB_Script_Thaana,//0xa0
	HB_Script_Thaana,
	HB_Script_Thaana,
	HB_Script_Thaana,

	HB_Script_Thaana,
	HB_Script_Thaana,
	HB_Script_Thaana,
	HB_Script_Thaana,

	HB_Script_Thaana,//0xa8
	HB_Script_Thaana,
	HB_Script_Thaana,
	HB_Script_Thaana,

	HB_Script_Thaana,
	HB_Script_Thaana,
	HB_Script_Thaana,
	HB_Script_Thaana,

	HB_Script_Thaana,//0xb0
	HB_Script_Thaana,
	HB_Script_Thaana,
	HB_Script_Thaana,

	HB_Script_Thaana,
	HB_Script_Thaana,
	HB_Script_Thaana,
	HB_Script_Thaana,

	HB_Script_Thaana,//0xb8
	HB_Script_Thaana,
	HB_Script_Thaana,
	HB_Script_Thaana,

	HB_Script_Thaana,
	HB_Script_Thaana,
	HB_Script_Thaana,
	HB_Script_Thaana,//0xbf
};

HB_Script subTableDevaBengali[] = 
{
	HB_Script_Devanagari,//0x00
	HB_Script_Devanagari,
	HB_Script_Devanagari,
	HB_Script_Devanagari,

	HB_Script_Devanagari,
	HB_Script_Devanagari,
	HB_Script_Devanagari,
	HB_Script_Devanagari,

	HB_Script_Devanagari,//0x08
	HB_Script_Devanagari,
	HB_Script_Devanagari,
	HB_Script_Devanagari,

	HB_Script_Devanagari,
	HB_Script_Devanagari,
	HB_Script_Devanagari,
	HB_Script_Devanagari,


	HB_Script_Devanagari,//0x10
	HB_Script_Devanagari,
	HB_Script_Devanagari,
	HB_Script_Devanagari,

	HB_Script_Devanagari,
	HB_Script_Devanagari,
	HB_Script_Devanagari,
	HB_Script_Devanagari,


	HB_Script_Devanagari,//0x18
	HB_Script_Devanagari,
	HB_Script_Devanagari,
	HB_Script_Devanagari,

	HB_Script_Devanagari,
	HB_Script_Devanagari,
	HB_Script_Devanagari,
	HB_Script_Devanagari,


	HB_Script_Devanagari,//0x20
	HB_Script_Devanagari,
	HB_Script_Devanagari,
	HB_Script_Devanagari,

	HB_Script_Devanagari,
	HB_Script_Devanagari,
	HB_Script_Devanagari,
	HB_Script_Devanagari,

	HB_Script_Devanagari,//0x28
	HB_Script_Devanagari,
	HB_Script_Devanagari,
	HB_Script_Devanagari,

	HB_Script_Devanagari,
	HB_Script_Devanagari,
	HB_Script_Devanagari,
	HB_Script_Devanagari,


	HB_Script_Devanagari,//0x30
	HB_Script_Devanagari,
	HB_Script_Devanagari,
	HB_Script_Devanagari,

	HB_Script_Devanagari,
	HB_Script_Devanagari,
	HB_Script_Devanagari,
	HB_Script_Devanagari,

	HB_Script_Devanagari,//0x38
	HB_Script_Devanagari,
	HB_Script_Devanagari,
	HB_Script_Devanagari,

	HB_Script_Devanagari,
	HB_Script_Devanagari,
	HB_Script_Devanagari,
	HB_Script_Devanagari,

	HB_Script_Devanagari,//0x40
	HB_Script_Devanagari,
	HB_Script_Devanagari,
	HB_Script_Devanagari,

	HB_Script_Devanagari,
	HB_Script_Devanagari,
	HB_Script_Devanagari,
	HB_Script_Devanagari,


	HB_Script_Devanagari,//0x48
	HB_Script_Devanagari,
	HB_Script_Devanagari,
	HB_Script_Devanagari,

	HB_Script_Devanagari,
	HB_Script_Devanagari,
	HB_Script_Devanagari,
	HB_Script_Devanagari,//0x4f

	HB_Script_Devanagari,//0x50
	HB_Script_Devanagari,
	HB_Script_Devanagari,
	HB_Script_Devanagari,

	HB_Script_Devanagari,
	HB_Script_Devanagari,
	HB_Script_Devanagari,
	HB_Script_Devanagari,

	HB_Script_Devanagari,//0x58
	HB_Script_Devanagari,
	HB_Script_Devanagari,
	HB_Script_Devanagari,

	HB_Script_Devanagari,
	HB_Script_Devanagari,
	HB_Script_Devanagari,
	HB_Script_Devanagari,


	HB_Script_Devanagari,//0x60
	HB_Script_Devanagari,
	HB_Script_Devanagari,
	HB_Script_Devanagari,

	HB_Script_Devanagari,
	HB_Script_Devanagari,
	HB_Script_Devanagari,
	HB_Script_Devanagari,


	HB_Script_Devanagari,//0x68
	HB_Script_Devanagari,
	HB_Script_Devanagari,
	HB_Script_Devanagari,

	HB_Script_Devanagari,
	HB_Script_Devanagari,
	HB_Script_Devanagari,
	HB_Script_Devanagari,


	HB_Script_Devanagari,//0x70
	HB_Script_Devanagari,
	HB_Script_Devanagari,
	HB_Script_Devanagari,

	HB_Script_Devanagari,
	HB_Script_Devanagari,
	HB_Script_Devanagari,
	HB_Script_Devanagari,

	HB_Script_Devanagari,//0x78
	HB_Script_Devanagari,
	HB_Script_Devanagari,
	HB_Script_Devanagari,

	HB_Script_Devanagari,
	HB_Script_Devanagari,
	HB_Script_Devanagari,
	HB_Script_Devanagari,//0x7f


	HB_Script_Bengali,//0x80
	HB_Script_Bengali,
	HB_Script_Bengali,
	HB_Script_Bengali,

	HB_Script_Bengali,
	HB_Script_Bengali,
	HB_Script_Bengali,
	HB_Script_Bengali,

	HB_Script_Bengali,//0x88
	HB_Script_Bengali,
	HB_Script_Bengali,
	HB_Script_Bengali,

	HB_Script_Bengali,
	HB_Script_Bengali,
	HB_Script_Bengali,
	HB_Script_Bengali,

	HB_Script_Bengali,//0x90
	HB_Script_Bengali,
	HB_Script_Bengali,
	HB_Script_Bengali,

	HB_Script_Bengali,
	HB_Script_Bengali,
	HB_Script_Bengali,
	HB_Script_Bengali,


	HB_Script_Bengali,//0x98
	HB_Script_Bengali,
	HB_Script_Bengali,
	HB_Script_Bengali,

	HB_Script_Bengali,
	HB_Script_Bengali,
	HB_Script_Bengali,
	HB_Script_Bengali,

	HB_Script_Bengali,//0xa0
	HB_Script_Bengali,
	HB_Script_Bengali,
	HB_Script_Bengali,

	HB_Script_Bengali,
	HB_Script_Bengali,
	HB_Script_Bengali,
	HB_Script_Bengali,

	HB_Script_Bengali,//0xa8
	HB_Script_Bengali,
	HB_Script_Bengali,
	HB_Script_Bengali,

	HB_Script_Bengali,
	HB_Script_Bengali,
	HB_Script_Bengali,
	HB_Script_Bengali,

	HB_Script_Bengali,//0xb0
	HB_Script_Bengali,
	HB_Script_Bengali,
	HB_Script_Bengali,

	HB_Script_Bengali,
	HB_Script_Bengali,
	HB_Script_Bengali,
	HB_Script_Bengali,


	HB_Script_Bengali,//0xb8
	HB_Script_Bengali,
	HB_Script_Bengali,
	HB_Script_Bengali,

	HB_Script_Bengali,
	HB_Script_Bengali,
	HB_Script_Bengali,
	HB_Script_Bengali,

	HB_Script_Bengali,//0xc0
	HB_Script_Bengali,
	HB_Script_Bengali,
	HB_Script_Bengali,

	HB_Script_Bengali,
	HB_Script_Bengali,
	HB_Script_Bengali,
	HB_Script_Bengali,


	HB_Script_Bengali,//0xc8
	HB_Script_Bengali,
	HB_Script_Bengali,
	HB_Script_Bengali,

	HB_Script_Bengali,
	HB_Script_Bengali,
	HB_Script_Bengali,
	HB_Script_Bengali,

	HB_Script_Bengali,//0xd0
	HB_Script_Bengali,
	HB_Script_Bengali,
	HB_Script_Bengali,

	HB_Script_Bengali,
	HB_Script_Bengali,
	HB_Script_Bengali,
	HB_Script_Bengali,

	HB_Script_Bengali,//0xd8
	HB_Script_Bengali,
	HB_Script_Bengali,
	HB_Script_Bengali,

	HB_Script_Bengali,
	HB_Script_Bengali,
	HB_Script_Bengali,
	HB_Script_Bengali,

	HB_Script_Bengali,//0xe0
	HB_Script_Bengali,
	HB_Script_Bengali,
	HB_Script_Bengali,

	HB_Script_Bengali,
	HB_Script_Bengali,
	HB_Script_Bengali,
	HB_Script_Bengali,


	HB_Script_Bengali,//0xe8
	HB_Script_Bengali,
	HB_Script_Bengali,
	HB_Script_Bengali,

	HB_Script_Bengali,
	HB_Script_Bengali,
	HB_Script_Bengali,
	HB_Script_Bengali,

	HB_Script_Bengali,//0xf0
	HB_Script_Bengali,
	HB_Script_Bengali,
	HB_Script_Bengali,

	HB_Script_Bengali,
	HB_Script_Bengali,
	HB_Script_Bengali,
	HB_Script_Bengali,

	HB_Script_Bengali,//0xf8
	HB_Script_Bengali,
	HB_Script_Bengali,
	HB_Script_Bengali,

	HB_Script_Bengali,
	HB_Script_Bengali,
	HB_Script_Bengali,
	HB_Script_Bengali,//0xff

};


HB_Script subTableGuruGuarati[]=
{
	HB_Script_Gurmukhi,//0x00
	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,

	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,

	HB_Script_Gurmukhi,//0x08
	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,

	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,


	HB_Script_Gurmukhi,//0x10
	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,

	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,


	HB_Script_Gurmukhi,//0x18
	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,

	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,


	HB_Script_Gurmukhi,//0x20
	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,

	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,

	HB_Script_Gurmukhi,//0x28
	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,

	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,


	HB_Script_Gurmukhi,//0x30
	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,

	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,

	HB_Script_Gurmukhi,//0x38
	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,

	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,

	HB_Script_Gurmukhi,//0x40
	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,

	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,


	HB_Script_Gurmukhi,//0x48
	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,

	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,//0x4f

	HB_Script_Gurmukhi,//0x50
	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,

	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,

	HB_Script_Gurmukhi,//0x58
	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,

	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,


	HB_Script_Gurmukhi,//0x60
	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,

	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,


	HB_Script_Gurmukhi,//0x68
	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,

	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,


	HB_Script_Gurmukhi,//0x70
	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,

	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,

	HB_Script_Gurmukhi,//0x78
	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,

	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,
	HB_Script_Gurmukhi,//0x7f


	HB_Script_Gujarati,//0x80
	HB_Script_Gujarati,
	HB_Script_Gujarati,
	HB_Script_Gujarati,

	HB_Script_Gujarati,
	HB_Script_Gujarati,
	HB_Script_Gujarati,
	HB_Script_Gujarati,

	HB_Script_Gujarati,//0x88
	HB_Script_Gujarati,
	HB_Script_Gujarati,
	HB_Script_Gujarati,

	HB_Script_Gujarati,
	HB_Script_Gujarati,
	HB_Script_Gujarati,
	HB_Script_Gujarati,

	HB_Script_Gujarati,//0x90
	HB_Script_Gujarati,
	HB_Script_Gujarati,
	HB_Script_Gujarati,

	HB_Script_Gujarati,
	HB_Script_Gujarati,
	HB_Script_Gujarati,
	HB_Script_Gujarati,


	HB_Script_Gujarati,//0x98
	HB_Script_Gujarati,
	HB_Script_Gujarati,
	HB_Script_Gujarati,

	HB_Script_Gujarati,
	HB_Script_Gujarati,
	HB_Script_Gujarati,
	HB_Script_Gujarati,

	HB_Script_Gujarati,//0xa0
	HB_Script_Gujarati,
	HB_Script_Gujarati,
	HB_Script_Gujarati,

	HB_Script_Gujarati,
	HB_Script_Gujarati,
	HB_Script_Gujarati,
	HB_Script_Gujarati,

	HB_Script_Gujarati,//0xa8
	HB_Script_Gujarati,
	HB_Script_Gujarati,
	HB_Script_Gujarati,

	HB_Script_Gujarati,
	HB_Script_Gujarati,
	HB_Script_Gujarati,
	HB_Script_Gujarati,

	HB_Script_Gujarati,//0xb0
	HB_Script_Gujarati,
	HB_Script_Gujarati,
	HB_Script_Gujarati,

	HB_Script_Gujarati,
	HB_Script_Gujarati,
	HB_Script_Gujarati,
	HB_Script_Gujarati,


	HB_Script_Gujarati,//0xb8
	HB_Script_Gujarati,
	HB_Script_Gujarati,
	HB_Script_Gujarati,

	HB_Script_Gujarati,
	HB_Script_Gujarati,
	HB_Script_Gujarati,
	HB_Script_Gujarati,

	HB_Script_Gujarati,//0xc0
	HB_Script_Gujarati,
	HB_Script_Gujarati,
	HB_Script_Gujarati,

	HB_Script_Gujarati,
	HB_Script_Gujarati,
	HB_Script_Gujarati,
	HB_Script_Gujarati,


	HB_Script_Gujarati,//0xc8
	HB_Script_Gujarati,
	HB_Script_Gujarati,
	HB_Script_Gujarati,

	HB_Script_Gujarati,
	HB_Script_Gujarati,
	HB_Script_Gujarati,
	HB_Script_Gujarati,

	HB_Script_Gujarati,//0xd0
	HB_Script_Gujarati,
	HB_Script_Gujarati,
	HB_Script_Gujarati,

	HB_Script_Gujarati,
	HB_Script_Gujarati,
	HB_Script_Gujarati,
	HB_Script_Gujarati,

	HB_Script_Gujarati,//0xd8
	HB_Script_Gujarati,
	HB_Script_Gujarati,
	HB_Script_Gujarati,

	HB_Script_Gujarati,
	HB_Script_Gujarati,
	HB_Script_Gujarati,
	HB_Script_Gujarati,

	HB_Script_Gujarati,//0xe0
	HB_Script_Gujarati,
	HB_Script_Gujarati,
	HB_Script_Gujarati,

	HB_Script_Gujarati,
	HB_Script_Gujarati,
	HB_Script_Gujarati,
	HB_Script_Gujarati,


	HB_Script_Gujarati,//0xe8
	HB_Script_Gujarati,
	HB_Script_Gujarati,
	HB_Script_Gujarati,

	HB_Script_Gujarati,
	HB_Script_Gujarati,
	HB_Script_Gujarati,
	HB_Script_Gujarati,

	HB_Script_Gujarati,//0xf0
	HB_Script_Gujarati,
	HB_Script_Gujarati,
	HB_Script_Gujarati,

	HB_Script_Gujarati,
	HB_Script_Gujarati,
	HB_Script_Gujarati,
	HB_Script_Gujarati,

	HB_Script_Gujarati,//0xf8
	HB_Script_Gujarati,
	HB_Script_Gujarati,
	HB_Script_Gujarati,

	HB_Script_Gujarati,
	HB_Script_Gujarati,
	HB_Script_Gujarati,
	HB_Script_Gujarati,//0xff

};

HB_Script subTableOriyaTamil[]=
{
	HB_Script_Oriya,//0x00
	HB_Script_Oriya,
	HB_Script_Oriya,
	HB_Script_Oriya,

	HB_Script_Oriya,
	HB_Script_Oriya,
	HB_Script_Oriya,
	HB_Script_Oriya,

	HB_Script_Oriya,//0x08
	HB_Script_Oriya,
	HB_Script_Oriya,
	HB_Script_Oriya,

	HB_Script_Oriya,
	HB_Script_Oriya,
	HB_Script_Oriya,
	HB_Script_Oriya,


	HB_Script_Oriya,//0x10
	HB_Script_Oriya,
	HB_Script_Oriya,
	HB_Script_Oriya,

	HB_Script_Oriya,
	HB_Script_Oriya,
	HB_Script_Oriya,
	HB_Script_Oriya,


	HB_Script_Oriya,//0x18
	HB_Script_Oriya,
	HB_Script_Oriya,
	HB_Script_Oriya,

	HB_Script_Oriya,
	HB_Script_Oriya,
	HB_Script_Oriya,
	HB_Script_Oriya,


	HB_Script_Oriya,//0x20
	HB_Script_Oriya,
	HB_Script_Oriya,
	HB_Script_Oriya,

	HB_Script_Oriya,
	HB_Script_Oriya,
	HB_Script_Oriya,
	HB_Script_Oriya,

	HB_Script_Oriya,//0x28
	HB_Script_Oriya,
	HB_Script_Oriya,
	HB_Script_Oriya,

	HB_Script_Oriya,
	HB_Script_Oriya,
	HB_Script_Oriya,
	HB_Script_Oriya,


	HB_Script_Oriya,//0x30
	HB_Script_Oriya,
	HB_Script_Oriya,
	HB_Script_Oriya,

	HB_Script_Oriya,
	HB_Script_Oriya,
	HB_Script_Oriya,
	HB_Script_Oriya,

	HB_Script_Oriya,//0x38
	HB_Script_Oriya,
	HB_Script_Oriya,
	HB_Script_Oriya,

	HB_Script_Oriya,
	HB_Script_Oriya,
	HB_Script_Oriya,
	HB_Script_Oriya,

	HB_Script_Oriya,//0x40
	HB_Script_Oriya,
	HB_Script_Oriya,
	HB_Script_Oriya,

	HB_Script_Oriya,
	HB_Script_Oriya,
	HB_Script_Oriya,
	HB_Script_Oriya,


	HB_Script_Oriya,//0x48
	HB_Script_Oriya,
	HB_Script_Oriya,
	HB_Script_Oriya,

	HB_Script_Oriya,
	HB_Script_Oriya,
	HB_Script_Oriya,
	HB_Script_Oriya,//0x4f

	HB_Script_Oriya,//0x50
	HB_Script_Oriya,
	HB_Script_Oriya,
	HB_Script_Oriya,

	HB_Script_Oriya,
	HB_Script_Oriya,
	HB_Script_Oriya,
	HB_Script_Oriya,

	HB_Script_Oriya,//0x58
	HB_Script_Oriya,
	HB_Script_Oriya,
	HB_Script_Oriya,

	HB_Script_Oriya,
	HB_Script_Oriya,
	HB_Script_Oriya,
	HB_Script_Oriya,


	HB_Script_Oriya,//0x60
	HB_Script_Oriya,
	HB_Script_Oriya,
	HB_Script_Oriya,

	HB_Script_Oriya,
	HB_Script_Oriya,
	HB_Script_Oriya,
	HB_Script_Oriya,


	HB_Script_Oriya,//0x68
	HB_Script_Oriya,
	HB_Script_Oriya,
	HB_Script_Oriya,

	HB_Script_Oriya,
	HB_Script_Oriya,
	HB_Script_Oriya,
	HB_Script_Oriya,


	HB_Script_Oriya,//0x70
	HB_Script_Oriya,
	HB_Script_Oriya,
	HB_Script_Oriya,

	HB_Script_Oriya,
	HB_Script_Oriya,
	HB_Script_Oriya,
	HB_Script_Oriya,

	HB_Script_Oriya,//0x78
	HB_Script_Oriya,
	HB_Script_Oriya,
	HB_Script_Oriya,

	HB_Script_Oriya,
	HB_Script_Oriya,
	HB_Script_Oriya,
	HB_Script_Oriya,//0x7f


	HB_Script_Tamil,//0x80
	HB_Script_Tamil,
	HB_Script_Tamil,
	HB_Script_Tamil,

	HB_Script_Tamil,
	HB_Script_Tamil,
	HB_Script_Tamil,
	HB_Script_Tamil,

	HB_Script_Tamil,//0x88
	HB_Script_Tamil,
	HB_Script_Tamil,
	HB_Script_Tamil,

	HB_Script_Tamil,
	HB_Script_Tamil,
	HB_Script_Tamil,
	HB_Script_Tamil,

	HB_Script_Tamil,//0x90
	HB_Script_Tamil,
	HB_Script_Tamil,
	HB_Script_Tamil,

	HB_Script_Tamil,
	HB_Script_Tamil,
	HB_Script_Tamil,
	HB_Script_Tamil,


	HB_Script_Tamil,//0x98
	HB_Script_Tamil,
	HB_Script_Tamil,
	HB_Script_Tamil,

	HB_Script_Tamil,
	HB_Script_Tamil,
	HB_Script_Tamil,
	HB_Script_Tamil,

	HB_Script_Tamil,//0xa0
	HB_Script_Tamil,
	HB_Script_Tamil,
	HB_Script_Tamil,

	HB_Script_Tamil,
	HB_Script_Tamil,
	HB_Script_Tamil,
	HB_Script_Tamil,

	HB_Script_Tamil,//0xa8
	HB_Script_Tamil,
	HB_Script_Tamil,
	HB_Script_Tamil,

	HB_Script_Tamil,
	HB_Script_Tamil,
	HB_Script_Tamil,
	HB_Script_Tamil,

	HB_Script_Tamil,//0xb0
	HB_Script_Tamil,
	HB_Script_Tamil,
	HB_Script_Tamil,

	HB_Script_Tamil,
	HB_Script_Tamil,
	HB_Script_Tamil,
	HB_Script_Tamil,


	HB_Script_Tamil,//0xb8
	HB_Script_Tamil,
	HB_Script_Tamil,
	HB_Script_Tamil,

	HB_Script_Tamil,
	HB_Script_Tamil,
	HB_Script_Tamil,
	HB_Script_Tamil,

	HB_Script_Tamil,//0xc0
	HB_Script_Tamil,
	HB_Script_Tamil,
	HB_Script_Tamil,

	HB_Script_Tamil,
	HB_Script_Tamil,
	HB_Script_Tamil,
	HB_Script_Tamil,


	HB_Script_Tamil,//0xc8
	HB_Script_Tamil,
	HB_Script_Tamil,
	HB_Script_Tamil,

	HB_Script_Tamil,
	HB_Script_Tamil,
	HB_Script_Tamil,
	HB_Script_Tamil,

	HB_Script_Tamil,//0xd0
	HB_Script_Tamil,
	HB_Script_Tamil,
	HB_Script_Tamil,

	HB_Script_Tamil,
	HB_Script_Tamil,
	HB_Script_Tamil,
	HB_Script_Tamil,

	HB_Script_Tamil,//0xd8
	HB_Script_Tamil,
	HB_Script_Tamil,
	HB_Script_Tamil,

	HB_Script_Tamil,
	HB_Script_Tamil,
	HB_Script_Tamil,
	HB_Script_Tamil,

	HB_Script_Tamil,//0xe0
	HB_Script_Tamil,
	HB_Script_Tamil,
	HB_Script_Tamil,

	HB_Script_Tamil,
	HB_Script_Tamil,
	HB_Script_Tamil,
	HB_Script_Tamil,


	HB_Script_Tamil,//0xe8
	HB_Script_Tamil,
	HB_Script_Tamil,
	HB_Script_Tamil,

	HB_Script_Tamil,
	HB_Script_Tamil,
	HB_Script_Tamil,
	HB_Script_Tamil,

	HB_Script_Tamil,//0xf0
	HB_Script_Tamil,
	HB_Script_Tamil,
	HB_Script_Tamil,

	HB_Script_Tamil,
	HB_Script_Tamil,
	HB_Script_Tamil,
	HB_Script_Tamil,

	HB_Script_Tamil,//0xf8
	HB_Script_Tamil,
	HB_Script_Tamil,
	HB_Script_Tamil,

	HB_Script_Tamil,
	HB_Script_Tamil,
	HB_Script_Tamil,
	HB_Script_Tamil,//0xff

};


HB_Script subTableTelukannada[]=
{
	HB_Script_Telugu,//0x00
	HB_Script_Telugu,
	HB_Script_Telugu,
	HB_Script_Telugu,

	HB_Script_Telugu,
	HB_Script_Telugu,
	HB_Script_Telugu,
	HB_Script_Telugu,

	HB_Script_Telugu,//0x08
	HB_Script_Telugu,
	HB_Script_Telugu,
	HB_Script_Telugu,

	HB_Script_Telugu,
	HB_Script_Telugu,
	HB_Script_Telugu,
	HB_Script_Telugu,


	HB_Script_Telugu,//0x10
	HB_Script_Telugu,
	HB_Script_Telugu,
	HB_Script_Telugu,

	HB_Script_Telugu,
	HB_Script_Telugu,
	HB_Script_Telugu,
	HB_Script_Telugu,


	HB_Script_Telugu,//0x18
	HB_Script_Telugu,
	HB_Script_Telugu,
	HB_Script_Telugu,

	HB_Script_Telugu,
	HB_Script_Telugu,
	HB_Script_Telugu,
	HB_Script_Telugu,


	HB_Script_Telugu,//0x20
	HB_Script_Telugu,
	HB_Script_Telugu,
	HB_Script_Telugu,

	HB_Script_Telugu,
	HB_Script_Telugu,
	HB_Script_Telugu,
	HB_Script_Telugu,

	HB_Script_Telugu,//0x28
	HB_Script_Telugu,
	HB_Script_Telugu,
	HB_Script_Telugu,

	HB_Script_Telugu,
	HB_Script_Telugu,
	HB_Script_Telugu,
	HB_Script_Telugu,


	HB_Script_Telugu,//0x30
	HB_Script_Telugu,
	HB_Script_Telugu,
	HB_Script_Telugu,

	HB_Script_Telugu,
	HB_Script_Telugu,
	HB_Script_Telugu,
	HB_Script_Telugu,

	HB_Script_Telugu,//0x38
	HB_Script_Telugu,
	HB_Script_Telugu,
	HB_Script_Telugu,

	HB_Script_Telugu,
	HB_Script_Telugu,
	HB_Script_Telugu,
	HB_Script_Telugu,

	HB_Script_Telugu,//0x40
	HB_Script_Telugu,
	HB_Script_Telugu,
	HB_Script_Telugu,

	HB_Script_Telugu,
	HB_Script_Telugu,
	HB_Script_Telugu,
	HB_Script_Telugu,


	HB_Script_Telugu,//0x48
	HB_Script_Telugu,
	HB_Script_Telugu,
	HB_Script_Telugu,

	HB_Script_Telugu,
	HB_Script_Telugu,
	HB_Script_Telugu,
	HB_Script_Telugu,//0x4f

	HB_Script_Telugu,//0x50
	HB_Script_Telugu,
	HB_Script_Telugu,
	HB_Script_Telugu,

	HB_Script_Telugu,
	HB_Script_Telugu,
	HB_Script_Telugu,
	HB_Script_Telugu,

	HB_Script_Telugu,//0x58
	HB_Script_Telugu,
	HB_Script_Telugu,
	HB_Script_Telugu,

	HB_Script_Telugu,
	HB_Script_Telugu,
	HB_Script_Telugu,
	HB_Script_Telugu,


	HB_Script_Telugu,//0x60
	HB_Script_Telugu,
	HB_Script_Telugu,
	HB_Script_Telugu,

	HB_Script_Telugu,
	HB_Script_Telugu,
	HB_Script_Telugu,
	HB_Script_Telugu,


	HB_Script_Telugu,//0x68
	HB_Script_Telugu,
	HB_Script_Telugu,
	HB_Script_Telugu,

	HB_Script_Telugu,
	HB_Script_Telugu,
	HB_Script_Telugu,
	HB_Script_Telugu,


	HB_Script_Telugu,//0x70
	HB_Script_Telugu,
	HB_Script_Telugu,
	HB_Script_Telugu,

	HB_Script_Telugu,
	HB_Script_Telugu,
	HB_Script_Telugu,
	HB_Script_Telugu,

	HB_Script_Telugu,//0x78
	HB_Script_Telugu,
	HB_Script_Telugu,
	HB_Script_Telugu,

	HB_Script_Telugu,
	HB_Script_Telugu,
	HB_Script_Telugu,
	HB_Script_Telugu,//0x7f


	HB_Script_Kannada,//0x80
	HB_Script_Kannada,
	HB_Script_Kannada,
	HB_Script_Kannada,

	HB_Script_Kannada,
	HB_Script_Kannada,
	HB_Script_Kannada,
	HB_Script_Kannada,

	HB_Script_Kannada,//0x88
	HB_Script_Kannada,
	HB_Script_Kannada,
	HB_Script_Kannada,

	HB_Script_Kannada,
	HB_Script_Kannada,
	HB_Script_Kannada,
	HB_Script_Kannada,

	HB_Script_Kannada,//0x90
	HB_Script_Kannada,
	HB_Script_Kannada,
	HB_Script_Kannada,

	HB_Script_Kannada,
	HB_Script_Kannada,
	HB_Script_Kannada,
	HB_Script_Kannada,


	HB_Script_Kannada,//0x98
	HB_Script_Kannada,
	HB_Script_Kannada,
	HB_Script_Kannada,

	HB_Script_Kannada,
	HB_Script_Kannada,
	HB_Script_Kannada,
	HB_Script_Kannada,

	HB_Script_Kannada,//0xa0
	HB_Script_Kannada,
	HB_Script_Kannada,
	HB_Script_Kannada,

	HB_Script_Kannada,
	HB_Script_Kannada,
	HB_Script_Kannada,
	HB_Script_Kannada,

	HB_Script_Kannada,//0xa8
	HB_Script_Kannada,
	HB_Script_Kannada,
	HB_Script_Kannada,

	HB_Script_Kannada,
	HB_Script_Kannada,
	HB_Script_Kannada,
	HB_Script_Kannada,

	HB_Script_Kannada,//0xb0
	HB_Script_Kannada,
	HB_Script_Kannada,
	HB_Script_Kannada,

	HB_Script_Kannada,
	HB_Script_Kannada,
	HB_Script_Kannada,
	HB_Script_Kannada,


	HB_Script_Kannada,//0xb8
	HB_Script_Kannada,
	HB_Script_Kannada,
	HB_Script_Kannada,

	HB_Script_Kannada,
	HB_Script_Kannada,
	HB_Script_Kannada,
	HB_Script_Kannada,

	HB_Script_Kannada,//0xc0
	HB_Script_Kannada,
	HB_Script_Kannada,
	HB_Script_Kannada,

	HB_Script_Kannada,
	HB_Script_Kannada,
	HB_Script_Kannada,
	HB_Script_Kannada,


	HB_Script_Kannada,//0xc8
	HB_Script_Kannada,
	HB_Script_Kannada,
	HB_Script_Kannada,

	HB_Script_Kannada,
	HB_Script_Kannada,
	HB_Script_Kannada,
	HB_Script_Kannada,

	HB_Script_Kannada,//0xd0
	HB_Script_Kannada,
	HB_Script_Kannada,
	HB_Script_Kannada,

	HB_Script_Kannada,
	HB_Script_Kannada,
	HB_Script_Kannada,
	HB_Script_Kannada,

	HB_Script_Kannada,//0xd8
	HB_Script_Kannada,
	HB_Script_Kannada,
	HB_Script_Kannada,

	HB_Script_Kannada,
	HB_Script_Kannada,
	HB_Script_Kannada,
	HB_Script_Kannada,

	HB_Script_Kannada,//0xe0
	HB_Script_Kannada,
	HB_Script_Kannada,
	HB_Script_Kannada,

	HB_Script_Kannada,
	HB_Script_Kannada,
	HB_Script_Kannada,
	HB_Script_Kannada,


	HB_Script_Kannada,//0xe8
	HB_Script_Kannada,
	HB_Script_Kannada,
	HB_Script_Kannada,

	HB_Script_Kannada,
	HB_Script_Kannada,
	HB_Script_Kannada,
	HB_Script_Kannada,

	HB_Script_Kannada,//0xf0
	HB_Script_Kannada,
	HB_Script_Kannada,
	HB_Script_Kannada,

	HB_Script_Kannada,
	HB_Script_Kannada,
	HB_Script_Kannada,
	HB_Script_Kannada,

	HB_Script_Kannada,//0xf8
	HB_Script_Kannada,
	HB_Script_Kannada,
	HB_Script_Kannada,

	HB_Script_Kannada,
	HB_Script_Kannada,
	HB_Script_Kannada,
	HB_Script_Kannada,//0xff

};

HB_Script subTableMalSinhala[]=
{
	HB_Script_Malayalam,//0x00
	HB_Script_Malayalam,
	HB_Script_Malayalam,
	HB_Script_Malayalam,

	HB_Script_Malayalam,
	HB_Script_Malayalam,
	HB_Script_Malayalam,
	HB_Script_Malayalam,

	HB_Script_Malayalam,//0x08
	HB_Script_Malayalam,
	HB_Script_Malayalam,
	HB_Script_Malayalam,

	HB_Script_Malayalam,
	HB_Script_Malayalam,
	HB_Script_Malayalam,
	HB_Script_Malayalam,


	HB_Script_Malayalam,//0x10
	HB_Script_Malayalam,
	HB_Script_Malayalam,
	HB_Script_Malayalam,

	HB_Script_Malayalam,
	HB_Script_Malayalam,
	HB_Script_Malayalam,
	HB_Script_Malayalam,


	HB_Script_Malayalam,//0x18
	HB_Script_Malayalam,
	HB_Script_Malayalam,
	HB_Script_Malayalam,

	HB_Script_Malayalam,
	HB_Script_Malayalam,
	HB_Script_Malayalam,
	HB_Script_Malayalam,


	HB_Script_Malayalam,//0x20
	HB_Script_Malayalam,
	HB_Script_Malayalam,
	HB_Script_Malayalam,

	HB_Script_Malayalam,
	HB_Script_Malayalam,
	HB_Script_Malayalam,
	HB_Script_Malayalam,

	HB_Script_Malayalam,//0x28
	HB_Script_Malayalam,
	HB_Script_Malayalam,
	HB_Script_Malayalam,

	HB_Script_Malayalam,
	HB_Script_Malayalam,
	HB_Script_Malayalam,
	HB_Script_Malayalam,


	HB_Script_Malayalam,//0x30
	HB_Script_Malayalam,
	HB_Script_Malayalam,
	HB_Script_Malayalam,

	HB_Script_Malayalam,
	HB_Script_Malayalam,
	HB_Script_Malayalam,
	HB_Script_Malayalam,

	HB_Script_Malayalam,//0x38
	HB_Script_Malayalam,
	HB_Script_Malayalam,
	HB_Script_Malayalam,

	HB_Script_Malayalam,
	HB_Script_Malayalam,
	HB_Script_Malayalam,
	HB_Script_Malayalam,

	HB_Script_Malayalam,//0x40
	HB_Script_Malayalam,
	HB_Script_Malayalam,
	HB_Script_Malayalam,

	HB_Script_Malayalam,
	HB_Script_Malayalam,
	HB_Script_Malayalam,
	HB_Script_Malayalam,


	HB_Script_Malayalam,//0x48
	HB_Script_Malayalam,
	HB_Script_Malayalam,
	HB_Script_Malayalam,

	HB_Script_Malayalam,
	HB_Script_Malayalam,
	HB_Script_Malayalam,
	HB_Script_Malayalam,//0x4f

	HB_Script_Malayalam,//0x50
	HB_Script_Malayalam,
	HB_Script_Malayalam,
	HB_Script_Malayalam,

	HB_Script_Malayalam,
	HB_Script_Malayalam,
	HB_Script_Malayalam,
	HB_Script_Malayalam,

	HB_Script_Malayalam,//0x58
	HB_Script_Malayalam,
	HB_Script_Malayalam,
	HB_Script_Malayalam,

	HB_Script_Malayalam,
	HB_Script_Malayalam,
	HB_Script_Malayalam,
	HB_Script_Malayalam,


	HB_Script_Malayalam,//0x60
	HB_Script_Malayalam,
	HB_Script_Malayalam,
	HB_Script_Malayalam,

	HB_Script_Malayalam,
	HB_Script_Malayalam,
	HB_Script_Malayalam,
	HB_Script_Malayalam,


	HB_Script_Malayalam,//0x68
	HB_Script_Malayalam,
	HB_Script_Malayalam,
	HB_Script_Malayalam,

	HB_Script_Malayalam,
	HB_Script_Malayalam,
	HB_Script_Malayalam,
	HB_Script_Malayalam,


	HB_Script_Malayalam,//0x70
	HB_Script_Malayalam,
	HB_Script_Malayalam,
	HB_Script_Malayalam,

	HB_Script_Malayalam,
	HB_Script_Malayalam,
	HB_Script_Malayalam,
	HB_Script_Malayalam,

	HB_Script_Malayalam,//0x78
	HB_Script_Malayalam,
	HB_Script_Malayalam,
	HB_Script_Malayalam,

	HB_Script_Malayalam,
	HB_Script_Malayalam,
	HB_Script_Malayalam,
	HB_Script_Malayalam,//0x7f


	HB_Script_Sinhala,//0x80
	HB_Script_Sinhala,
	HB_Script_Sinhala,
	HB_Script_Sinhala,

	HB_Script_Sinhala,
	HB_Script_Sinhala,
	HB_Script_Sinhala,
	HB_Script_Sinhala,

	HB_Script_Sinhala,//0x88
	HB_Script_Sinhala,
	HB_Script_Sinhala,
	HB_Script_Sinhala,

	HB_Script_Sinhala,
	HB_Script_Sinhala,
	HB_Script_Sinhala,
	HB_Script_Sinhala,

	HB_Script_Sinhala,//0x90
	HB_Script_Sinhala,
	HB_Script_Sinhala,
	HB_Script_Sinhala,

	HB_Script_Sinhala,
	HB_Script_Sinhala,
	HB_Script_Sinhala,
	HB_Script_Sinhala,


	HB_Script_Sinhala,//0x98
	HB_Script_Sinhala,
	HB_Script_Sinhala,
	HB_Script_Sinhala,

	HB_Script_Sinhala,
	HB_Script_Sinhala,
	HB_Script_Sinhala,
	HB_Script_Sinhala,

	HB_Script_Sinhala,//0xa0
	HB_Script_Sinhala,
	HB_Script_Sinhala,
	HB_Script_Sinhala,

	HB_Script_Sinhala,
	HB_Script_Sinhala,
	HB_Script_Sinhala,
	HB_Script_Sinhala,

	HB_Script_Sinhala,//0xa8
	HB_Script_Sinhala,
	HB_Script_Sinhala,
	HB_Script_Sinhala,

	HB_Script_Sinhala,
	HB_Script_Sinhala,
	HB_Script_Sinhala,
	HB_Script_Sinhala,

	HB_Script_Sinhala,//0xb0
	HB_Script_Sinhala,
	HB_Script_Sinhala,
	HB_Script_Sinhala,

	HB_Script_Sinhala,
	HB_Script_Sinhala,
	HB_Script_Sinhala,
	HB_Script_Sinhala,


	HB_Script_Sinhala,//0xb8
	HB_Script_Sinhala,
	HB_Script_Sinhala,
	HB_Script_Sinhala,

	HB_Script_Sinhala,
	HB_Script_Sinhala,
	HB_Script_Sinhala,
	HB_Script_Sinhala,

	HB_Script_Sinhala,//0xc0
	HB_Script_Sinhala,
	HB_Script_Sinhala,
	HB_Script_Sinhala,

	HB_Script_Sinhala,
	HB_Script_Sinhala,
	HB_Script_Sinhala,
	HB_Script_Sinhala,


	HB_Script_Sinhala,//0xc8
	HB_Script_Sinhala,
	HB_Script_Sinhala,
	HB_Script_Sinhala,

	HB_Script_Sinhala,
	HB_Script_Sinhala,
	HB_Script_Sinhala,
	HB_Script_Sinhala,

	HB_Script_Sinhala,//0xd0
	HB_Script_Sinhala,
	HB_Script_Sinhala,
	HB_Script_Sinhala,

	HB_Script_Sinhala,
	HB_Script_Sinhala,
	HB_Script_Sinhala,
	HB_Script_Sinhala,

	HB_Script_Sinhala,//0xd8
	HB_Script_Sinhala,
	HB_Script_Sinhala,
	HB_Script_Sinhala,

	HB_Script_Sinhala,
	HB_Script_Sinhala,
	HB_Script_Sinhala,
	HB_Script_Sinhala,

	HB_Script_Sinhala,//0xe0
	HB_Script_Sinhala,
	HB_Script_Sinhala,
	HB_Script_Sinhala,

	HB_Script_Sinhala,
	HB_Script_Sinhala,
	HB_Script_Sinhala,
	HB_Script_Sinhala,


	HB_Script_Sinhala,//0xe8
	HB_Script_Sinhala,
	HB_Script_Sinhala,
	HB_Script_Sinhala,

	HB_Script_Sinhala,
	HB_Script_Sinhala,
	HB_Script_Sinhala,
	HB_Script_Sinhala,

	HB_Script_Sinhala,//0xf0
	HB_Script_Sinhala,
	HB_Script_Sinhala,
	HB_Script_Sinhala,

	HB_Script_Sinhala,
	HB_Script_Sinhala,
	HB_Script_Sinhala,
	HB_Script_Sinhala,

	HB_Script_Sinhala,//0xf8
	HB_Script_Sinhala,
	HB_Script_Sinhala,
	HB_Script_Sinhala,

	HB_Script_Sinhala,
	HB_Script_Sinhala,
	HB_Script_Sinhala,
	HB_Script_Sinhala,//0xff

};

HB_Script subTableThaiLao[]=
{
	HB_Script_Thai,//0x00
	HB_Script_Thai,
	HB_Script_Thai,
	HB_Script_Thai,

	HB_Script_Thai,
	HB_Script_Thai,
	HB_Script_Thai,
	HB_Script_Thai,

	HB_Script_Thai,//0x08
	HB_Script_Thai,
	HB_Script_Thai,
	HB_Script_Thai,

	HB_Script_Thai,
	HB_Script_Thai,
	HB_Script_Thai,
	HB_Script_Thai,


	HB_Script_Thai,//0x10
	HB_Script_Thai,
	HB_Script_Thai,
	HB_Script_Thai,

	HB_Script_Thai,
	HB_Script_Thai,
	HB_Script_Thai,
	HB_Script_Thai,


	HB_Script_Thai,//0x18
	HB_Script_Thai,
	HB_Script_Thai,
	HB_Script_Thai,

	HB_Script_Thai,
	HB_Script_Thai,
	HB_Script_Thai,
	HB_Script_Thai,


	HB_Script_Thai,//0x20
	HB_Script_Thai,
	HB_Script_Thai,
	HB_Script_Thai,

	HB_Script_Thai,
	HB_Script_Thai,
	HB_Script_Thai,
	HB_Script_Thai,

	HB_Script_Thai,//0x28
	HB_Script_Thai,
	HB_Script_Thai,
	HB_Script_Thai,

	HB_Script_Thai,
	HB_Script_Thai,
	HB_Script_Thai,
	HB_Script_Thai,


	HB_Script_Thai,//0x30
	HB_Script_Thai,
	HB_Script_Thai,
	HB_Script_Thai,

	HB_Script_Thai,
	HB_Script_Thai,
	HB_Script_Thai,
	HB_Script_Thai,

	HB_Script_Thai,//0x38
	HB_Script_Thai,
	HB_Script_Thai,
	HB_Script_Thai,

	HB_Script_Thai,
	HB_Script_Thai,
	HB_Script_Thai,
	HB_Script_Thai,

	HB_Script_Thai,//0x40
	HB_Script_Thai,
	HB_Script_Thai,
	HB_Script_Thai,

	HB_Script_Thai,
	HB_Script_Thai,
	HB_Script_Thai,
	HB_Script_Thai,


	HB_Script_Thai,//0x48
	HB_Script_Thai,
	HB_Script_Thai,
	HB_Script_Thai,

	HB_Script_Thai,
	HB_Script_Thai,
	HB_Script_Thai,
	HB_Script_Thai,//0x4f

	HB_Script_Thai,//0x50
	HB_Script_Thai,
	HB_Script_Thai,
	HB_Script_Thai,

	HB_Script_Thai,
	HB_Script_Thai,
	HB_Script_Thai,
	HB_Script_Thai,

	HB_Script_Thai,//0x58
	HB_Script_Thai,
	HB_Script_Thai,
	HB_Script_Thai,

	HB_Script_Thai,
	HB_Script_Thai,
	HB_Script_Thai,
	HB_Script_Thai,


	HB_Script_Thai,//0x60
	HB_Script_Thai,
	HB_Script_Thai,
	HB_Script_Thai,

	HB_Script_Thai,
	HB_Script_Thai,
	HB_Script_Thai,
	HB_Script_Thai,


	HB_Script_Thai,//0x68
	HB_Script_Thai,
	HB_Script_Thai,
	HB_Script_Thai,

	HB_Script_Thai,
	HB_Script_Thai,
	HB_Script_Thai,
	HB_Script_Thai,


	HB_Script_Thai,//0x70
	HB_Script_Thai,
	HB_Script_Thai,
	HB_Script_Thai,

	HB_Script_Thai,
	HB_Script_Thai,
	HB_Script_Thai,
	HB_Script_Thai,

	HB_Script_Thai,//0x78
	HB_Script_Thai,
	HB_Script_Thai,
	HB_Script_Thai,

	HB_Script_Thai,
	HB_Script_Thai,
	HB_Script_Thai,
	HB_Script_Thai,//0x7f


	HB_Script_Lao,//0x80
	HB_Script_Lao,
	HB_Script_Lao,
	HB_Script_Lao,

	HB_Script_Lao,
	HB_Script_Lao,
	HB_Script_Lao,
	HB_Script_Lao,

	HB_Script_Lao,//0x88
	HB_Script_Lao,
	HB_Script_Lao,
	HB_Script_Lao,

	HB_Script_Lao,
	HB_Script_Lao,
	HB_Script_Lao,
	HB_Script_Lao,

	HB_Script_Lao,//0x90
	HB_Script_Lao,
	HB_Script_Lao,
	HB_Script_Lao,

	HB_Script_Lao,
	HB_Script_Lao,
	HB_Script_Lao,
	HB_Script_Lao,


	HB_Script_Lao,//0x98
	HB_Script_Lao,
	HB_Script_Lao,
	HB_Script_Lao,

	HB_Script_Lao,
	HB_Script_Lao,
	HB_Script_Lao,
	HB_Script_Lao,

	HB_Script_Lao,//0xa0
	HB_Script_Lao,
	HB_Script_Lao,
	HB_Script_Lao,

	HB_Script_Lao,
	HB_Script_Lao,
	HB_Script_Lao,
	HB_Script_Lao,

	HB_Script_Lao,//0xa8
	HB_Script_Lao,
	HB_Script_Lao,
	HB_Script_Lao,

	HB_Script_Lao,
	HB_Script_Lao,
	HB_Script_Lao,
	HB_Script_Lao,

	HB_Script_Lao,//0xb0
	HB_Script_Lao,
	HB_Script_Lao,
	HB_Script_Lao,

	HB_Script_Lao,
	HB_Script_Lao,
	HB_Script_Lao,
	HB_Script_Lao,


	HB_Script_Lao,//0xb8
	HB_Script_Lao,
	HB_Script_Lao,
	HB_Script_Lao,

	HB_Script_Lao,
	HB_Script_Lao,
	HB_Script_Lao,
	HB_Script_Lao,

	HB_Script_Lao,//0xc0
	HB_Script_Lao,
	HB_Script_Lao,
	HB_Script_Lao,

	HB_Script_Lao,
	HB_Script_Lao,
	HB_Script_Lao,
	HB_Script_Lao,


	HB_Script_Lao,//0xc8
	HB_Script_Lao,
	HB_Script_Lao,
	HB_Script_Lao,

	HB_Script_Lao,
	HB_Script_Lao,
	HB_Script_Lao,
	HB_Script_Lao,

	HB_Script_Lao,//0xd0
	HB_Script_Lao,
	HB_Script_Lao,
	HB_Script_Lao,

	HB_Script_Lao,
	HB_Script_Lao,
	HB_Script_Lao,
	HB_Script_Lao,

	HB_Script_Lao,//0xd8
	HB_Script_Lao,
	HB_Script_Lao,
	HB_Script_Lao,

	HB_Script_Lao,
	HB_Script_Lao,
	HB_Script_Lao,
	HB_Script_Lao,

	HB_Script_Lao,//0xe0
	HB_Script_Lao,
	HB_Script_Lao,
	HB_Script_Lao,

	HB_Script_Lao,
	HB_Script_Lao,
	HB_Script_Lao,
	HB_Script_Lao,


	HB_Script_Lao,//0xe8
	HB_Script_Lao,
	HB_Script_Lao,
	HB_Script_Lao,

	HB_Script_Lao,
	HB_Script_Lao,
	HB_Script_Lao,
	HB_Script_Lao,

	HB_Script_Lao,//0xf0
	HB_Script_Lao,
	HB_Script_Lao,
	HB_Script_Lao,

	HB_Script_Lao,
	HB_Script_Lao,
	HB_Script_Lao,
	HB_Script_Lao,

	HB_Script_Lao,//0xf8
	HB_Script_Lao,
	HB_Script_Lao,
	HB_Script_Lao,

	HB_Script_Lao,
	HB_Script_Lao,
	HB_Script_Lao,
	HB_Script_Lao,//0xff

};

HB_Script subTableMyanGeorgian[] =
{
	HB_Script_Myanmar,//0x00
	HB_Script_Myanmar,
	HB_Script_Myanmar,
	HB_Script_Myanmar,

	HB_Script_Myanmar,
	HB_Script_Myanmar,
	HB_Script_Myanmar,
	HB_Script_Myanmar,

	HB_Script_Myanmar,//0x08
	HB_Script_Myanmar,
	HB_Script_Myanmar,
	HB_Script_Myanmar,

	HB_Script_Myanmar,
	HB_Script_Myanmar,
	HB_Script_Myanmar,
	HB_Script_Myanmar,


	HB_Script_Myanmar,//0x10
	HB_Script_Myanmar,
	HB_Script_Myanmar,
	HB_Script_Myanmar,

	HB_Script_Myanmar,
	HB_Script_Myanmar,
	HB_Script_Myanmar,
	HB_Script_Myanmar,


	HB_Script_Myanmar,//0x18
	HB_Script_Myanmar,
	HB_Script_Myanmar,
	HB_Script_Myanmar,

	HB_Script_Myanmar,
	HB_Script_Myanmar,
	HB_Script_Myanmar,
	HB_Script_Myanmar,


	HB_Script_Myanmar,//0x20
	HB_Script_Myanmar,
	HB_Script_Myanmar,
	HB_Script_Myanmar,

	HB_Script_Myanmar,
	HB_Script_Myanmar,
	HB_Script_Myanmar,
	HB_Script_Myanmar,

	HB_Script_Myanmar,//0x28
	HB_Script_Myanmar,
	HB_Script_Myanmar,
	HB_Script_Myanmar,

	HB_Script_Myanmar,
	HB_Script_Myanmar,
	HB_Script_Myanmar,
	HB_Script_Myanmar,


	HB_Script_Myanmar,//0x30
	HB_Script_Myanmar,
	HB_Script_Myanmar,
	HB_Script_Myanmar,

	HB_Script_Myanmar,
	HB_Script_Myanmar,
	HB_Script_Myanmar,
	HB_Script_Myanmar,

	HB_Script_Myanmar,//0x38
	HB_Script_Myanmar,
	HB_Script_Myanmar,
	HB_Script_Myanmar,

	HB_Script_Myanmar,
	HB_Script_Myanmar,
	HB_Script_Myanmar,
	HB_Script_Myanmar,

	HB_Script_Myanmar,//0x40
	HB_Script_Myanmar,
	HB_Script_Myanmar,
	HB_Script_Myanmar,

	HB_Script_Myanmar,
	HB_Script_Myanmar,
	HB_Script_Myanmar,
	HB_Script_Myanmar,


	HB_Script_Myanmar,//0x48
	HB_Script_Myanmar,
	HB_Script_Myanmar,
	HB_Script_Myanmar,

	HB_Script_Myanmar,
	HB_Script_Myanmar,
	HB_Script_Myanmar,
	HB_Script_Myanmar,//0x4f

	HB_Script_Myanmar,//0x50
	HB_Script_Myanmar,
	HB_Script_Myanmar,
	HB_Script_Myanmar,

	HB_Script_Myanmar,
	HB_Script_Myanmar,
	HB_Script_Myanmar,
	HB_Script_Myanmar,

	HB_Script_Myanmar,//0x58
	HB_Script_Myanmar,
	HB_Script_Myanmar,
	HB_Script_Myanmar,

	HB_Script_Myanmar,
	HB_Script_Myanmar,
	HB_Script_Myanmar,
	HB_Script_Myanmar,


	HB_Script_Myanmar,//0x60
	HB_Script_Myanmar,
	HB_Script_Myanmar,
	HB_Script_Myanmar,

	HB_Script_Myanmar,
	HB_Script_Myanmar,
	HB_Script_Myanmar,
	HB_Script_Myanmar,


	HB_Script_Myanmar,//0x68
	HB_Script_Myanmar,
	HB_Script_Myanmar,
	HB_Script_Myanmar,

	HB_Script_Myanmar,
	HB_Script_Myanmar,
	HB_Script_Myanmar,
	HB_Script_Myanmar,


	HB_Script_Myanmar,//0x70
	HB_Script_Myanmar,
	HB_Script_Myanmar,
	HB_Script_Myanmar,

	HB_Script_Myanmar,
	HB_Script_Myanmar,
	HB_Script_Myanmar,
	HB_Script_Myanmar,

	HB_Script_Myanmar,//0x78
	HB_Script_Myanmar,
	HB_Script_Myanmar,
	HB_Script_Myanmar,

	HB_Script_Myanmar,
	HB_Script_Myanmar,
	HB_Script_Myanmar,
	HB_Script_Myanmar,//0x7f


	HB_Script_Myanmar,//0x80
	HB_Script_Myanmar,
	HB_Script_Myanmar,
	HB_Script_Myanmar,

	HB_Script_Myanmar,
	HB_Script_Myanmar,
	HB_Script_Myanmar,
	HB_Script_Myanmar,

	HB_Script_Myanmar,//0x88
	HB_Script_Myanmar,
	HB_Script_Myanmar,
	HB_Script_Myanmar,

	HB_Script_Myanmar,
	HB_Script_Myanmar,
	HB_Script_Myanmar,
	HB_Script_Myanmar,

	HB_Script_Myanmar,//0x90
	HB_Script_Myanmar,
	HB_Script_Myanmar,
	HB_Script_Myanmar,

	HB_Script_Myanmar,
	HB_Script_Myanmar,
	HB_Script_Myanmar,
	HB_Script_Myanmar,


	HB_Script_Myanmar,//0x98
	HB_Script_Myanmar,
	HB_Script_Myanmar,
	HB_Script_Myanmar,

	HB_Script_Myanmar,
	HB_Script_Myanmar,
	HB_Script_Myanmar,
	HB_Script_Myanmar,

	HB_Script_Georgian,//0xa0
	HB_Script_Georgian,
	HB_Script_Georgian,
	HB_Script_Georgian,

	HB_Script_Georgian,
	HB_Script_Georgian,
	HB_Script_Georgian,
	HB_Script_Georgian,

	HB_Script_Georgian,//0xa8
	HB_Script_Georgian,
	HB_Script_Georgian,
	HB_Script_Georgian,

	HB_Script_Georgian,
	HB_Script_Georgian,
	HB_Script_Georgian,
	HB_Script_Georgian,

	HB_Script_Georgian,//0xb0
	HB_Script_Georgian,
	HB_Script_Georgian,
	HB_Script_Georgian,

	HB_Script_Georgian,
	HB_Script_Georgian,
	HB_Script_Georgian,
	HB_Script_Georgian,


	HB_Script_Georgian,//0xb8
	HB_Script_Georgian,
	HB_Script_Georgian,
	HB_Script_Georgian,

	HB_Script_Georgian,
	HB_Script_Georgian,
	HB_Script_Georgian,
	HB_Script_Georgian,

	HB_Script_Georgian,//0xc0
	HB_Script_Georgian,
	HB_Script_Georgian,
	HB_Script_Georgian,

	HB_Script_Georgian,
	HB_Script_Georgian,
	HB_Script_Georgian,
	HB_Script_Georgian,


	HB_Script_Georgian,//0xc8
	HB_Script_Georgian,
	HB_Script_Georgian,
	HB_Script_Georgian,

	HB_Script_Georgian,
	HB_Script_Georgian,
	HB_Script_Georgian,
	HB_Script_Georgian,

	HB_Script_Georgian,//0xd0
	HB_Script_Georgian,
	HB_Script_Georgian,
	HB_Script_Georgian,

	HB_Script_Georgian,
	HB_Script_Georgian,
	HB_Script_Georgian,
	HB_Script_Georgian,

	HB_Script_Georgian,//0xd8
	HB_Script_Georgian,
	HB_Script_Georgian,
	HB_Script_Georgian,

	HB_Script_Georgian,
	HB_Script_Georgian,
	HB_Script_Georgian,
	HB_Script_Georgian,

	HB_Script_Georgian,//0xe0
	HB_Script_Georgian,
	HB_Script_Georgian,
	HB_Script_Georgian,

	HB_Script_Georgian,
	HB_Script_Georgian,
	HB_Script_Georgian,
	HB_Script_Georgian,


	HB_Script_Georgian,//0xe8
	HB_Script_Georgian,
	HB_Script_Georgian,
	HB_Script_Georgian,

	HB_Script_Georgian,
	HB_Script_Georgian,
	HB_Script_Georgian,
	HB_Script_Georgian,

	HB_Script_Georgian,//0xf0
	HB_Script_Georgian,
	HB_Script_Georgian,
	HB_Script_Georgian,

	HB_Script_Georgian,
	HB_Script_Georgian,
	HB_Script_Georgian,
	HB_Script_Georgian,

	HB_Script_Georgian,//0xf8
	HB_Script_Georgian,
	HB_Script_Georgian,
	HB_Script_Georgian,

	HB_Script_Georgian,
	HB_Script_Georgian,
	HB_Script_Georgian,
	HB_Script_Georgian,//0xff

};

HB_Script subTableOghamRunic[] = 
{
	HB_Script_Ogham,//0x00
	HB_Script_Ogham,
	HB_Script_Ogham,
	HB_Script_Ogham,

	HB_Script_Ogham,
	HB_Script_Ogham,
	HB_Script_Ogham,
	HB_Script_Ogham,

	HB_Script_Ogham,//0x08
	HB_Script_Ogham,
	HB_Script_Ogham,
	HB_Script_Ogham,

	HB_Script_Ogham,
	HB_Script_Ogham,
	HB_Script_Ogham,
	HB_Script_Ogham,


	HB_Script_Ogham,//0x10
	HB_Script_Ogham,
	HB_Script_Ogham,
	HB_Script_Ogham,

	HB_Script_Ogham,
	HB_Script_Ogham,
	HB_Script_Ogham,
	HB_Script_Ogham,


	HB_Script_Ogham,//0x18
	HB_Script_Ogham,
	HB_Script_Ogham,
	HB_Script_Ogham,

	HB_Script_Ogham,
	HB_Script_Ogham,
	HB_Script_Ogham,
	HB_Script_Ogham,


	HB_Script_Ogham,//0x20
	HB_Script_Ogham,
	HB_Script_Ogham,
	HB_Script_Ogham,

	HB_Script_Ogham,
	HB_Script_Ogham,
	HB_Script_Ogham,
	HB_Script_Ogham,

	HB_Script_Ogham,//0x28
	HB_Script_Ogham,
	HB_Script_Ogham,
	HB_Script_Ogham,

	HB_Script_Ogham,
	HB_Script_Ogham,
	HB_Script_Ogham,
	HB_Script_Ogham,


	HB_Script_Ogham,//0x30
	HB_Script_Ogham,
	HB_Script_Ogham,
	HB_Script_Ogham,

	HB_Script_Ogham,
	HB_Script_Ogham,
	HB_Script_Ogham,
	HB_Script_Ogham,

	HB_Script_Ogham,//0x38
	HB_Script_Ogham,
	HB_Script_Ogham,
	HB_Script_Ogham,

	HB_Script_Ogham,
	HB_Script_Ogham,
	HB_Script_Ogham,
	HB_Script_Ogham,

	HB_Script_Ogham,//0x40
	HB_Script_Ogham,
	HB_Script_Ogham,
	HB_Script_Ogham,

	HB_Script_Ogham,
	HB_Script_Ogham,
	HB_Script_Ogham,
	HB_Script_Ogham,


	HB_Script_Ogham,//0x48
	HB_Script_Ogham,
	HB_Script_Ogham,
	HB_Script_Ogham,

	HB_Script_Ogham,
	HB_Script_Ogham,
	HB_Script_Ogham,
	HB_Script_Ogham,//0x4f

	HB_Script_Ogham,//0x50
	HB_Script_Ogham,
	HB_Script_Ogham,
	HB_Script_Ogham,

	HB_Script_Ogham,
	HB_Script_Ogham,
	HB_Script_Ogham,
	HB_Script_Ogham,

	HB_Script_Ogham,//0x58
	HB_Script_Ogham,
	HB_Script_Ogham,
	HB_Script_Ogham,

	HB_Script_Ogham,
	HB_Script_Ogham,
	HB_Script_Ogham,
	HB_Script_Ogham,


	HB_Script_Ogham,//0x60
	HB_Script_Ogham,
	HB_Script_Ogham,
	HB_Script_Ogham,

	HB_Script_Ogham,
	HB_Script_Ogham,
	HB_Script_Ogham,
	HB_Script_Ogham,


	HB_Script_Ogham,//0x68
	HB_Script_Ogham,
	HB_Script_Ogham,
	HB_Script_Ogham,

	HB_Script_Ogham,
	HB_Script_Ogham,
	HB_Script_Ogham,
	HB_Script_Ogham,


	HB_Script_Ogham,//0x70
	HB_Script_Ogham,
	HB_Script_Ogham,
	HB_Script_Ogham,

	HB_Script_Ogham,
	HB_Script_Ogham,
	HB_Script_Ogham,
	HB_Script_Ogham,

	HB_Script_Ogham,//0x78
	HB_Script_Ogham,
	HB_Script_Ogham,
	HB_Script_Ogham,

	HB_Script_Ogham,
	HB_Script_Ogham,
	HB_Script_Ogham,
	HB_Script_Ogham,//0x7f


	HB_Script_Ogham,//0x80
	HB_Script_Ogham,
	HB_Script_Ogham,
	HB_Script_Ogham,

	HB_Script_Ogham,
	HB_Script_Ogham,
	HB_Script_Ogham,
	HB_Script_Ogham,

	HB_Script_Ogham,//0x88
	HB_Script_Ogham,
	HB_Script_Ogham,
	HB_Script_Ogham,

	HB_Script_Ogham,
	HB_Script_Ogham,
	HB_Script_Ogham,
	HB_Script_Ogham,

	HB_Script_Ogham,//0x90
	HB_Script_Ogham,
	HB_Script_Ogham,
	HB_Script_Ogham,

	HB_Script_Ogham,
	HB_Script_Ogham,
	HB_Script_Ogham,
	HB_Script_Ogham,


	HB_Script_Ogham,//0x98
	HB_Script_Ogham,
	HB_Script_Ogham,
	HB_Script_Ogham,

	HB_Script_Ogham,
	HB_Script_Ogham,
	HB_Script_Ogham,
	HB_Script_Ogham,

	HB_Script_Runic,//0xa0
	HB_Script_Runic,
	HB_Script_Runic,
	HB_Script_Runic,

	HB_Script_Runic,
	HB_Script_Runic,
	HB_Script_Runic,
	HB_Script_Runic,

	HB_Script_Runic,//0xa8
	HB_Script_Runic,
	HB_Script_Runic,
	HB_Script_Runic,

	HB_Script_Runic,
	HB_Script_Runic,
	HB_Script_Runic,
	HB_Script_Runic,

	HB_Script_Runic,//0xb0
	HB_Script_Runic,
	HB_Script_Runic,
	HB_Script_Runic,

	HB_Script_Runic,
	HB_Script_Runic,
	HB_Script_Runic,
	HB_Script_Runic,


	HB_Script_Runic,//0xb8
	HB_Script_Runic,
	HB_Script_Runic,
	HB_Script_Runic,

	HB_Script_Runic,
	HB_Script_Runic,
	HB_Script_Runic,
	HB_Script_Runic,

	HB_Script_Runic,//0xc0
	HB_Script_Runic,
	HB_Script_Runic,
	HB_Script_Runic,

	HB_Script_Runic,
	HB_Script_Runic,
	HB_Script_Runic,
	HB_Script_Runic,


	HB_Script_Runic,//0xc8
	HB_Script_Runic,
	HB_Script_Runic,
	HB_Script_Runic,

	HB_Script_Runic,
	HB_Script_Runic,
	HB_Script_Runic,
	HB_Script_Runic,

	HB_Script_Runic,//0xd0
	HB_Script_Runic,
	HB_Script_Runic,
	HB_Script_Runic,

	HB_Script_Runic,
	HB_Script_Runic,
	HB_Script_Runic,
	HB_Script_Runic,

	HB_Script_Runic,//0xd8
	HB_Script_Runic,
	HB_Script_Runic,
	HB_Script_Runic,

	HB_Script_Runic,
	HB_Script_Runic,
	HB_Script_Runic,
	HB_Script_Runic,

	HB_Script_Runic,//0xe0
	HB_Script_Runic,
	HB_Script_Runic,
	HB_Script_Runic,

	HB_Script_Runic,
	HB_Script_Runic,
	HB_Script_Runic,
	HB_Script_Runic,


	HB_Script_Runic,//0xe8
	HB_Script_Runic,
	HB_Script_Runic,
	HB_Script_Runic,

	HB_Script_Runic,
	HB_Script_Runic,
	HB_Script_Runic,
	HB_Script_Runic,

	HB_Script_Runic,//0xf0
	HB_Script_Runic,
	HB_Script_Runic,
	HB_Script_Runic,

	HB_Script_Runic,
	HB_Script_Runic,
	HB_Script_Runic,
	HB_Script_Runic,

	HB_Script_Runic,//0xf8
	HB_Script_Runic,
	HB_Script_Runic,
	HB_Script_Runic,

	HB_Script_Runic,
	HB_Script_Runic,
	HB_Script_Runic,
	HB_Script_Runic,//0xff

};

#define VFE_UNICODE_MAX_SCRIPT 256

static const unicodeScriptTableStruct scriptTableStruct[VFE_UNICODE_MAX_SCRIPT]=
{
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},
	{HB_Script_Greek, 0},

	{HB_Script_Cyrillic, 0},//0x04
	{HB_Script_Armenian, 0},
	{HB_Script_Arabic, 0},
	{0xc0, subTableThanaSyriac},

	{HB_Script_Common, 0},//0x08
	{0x100, subTableDevaBengali},
	{0x100, subTableGuruGuarati},
	{0x100, subTableOriyaTamil},
	
	{0x100, subTableTelukannada},//0x0c
	{0x100, subTableMalSinhala},
	{0x100, subTableThaiLao},
	{HB_Script_Tibetan, 0},

	{0x100, subTableMyanGeorgian},//0x10
	{HB_Script_Hangul, 0},
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},

	{HB_Script_Common, 0},//0x14
	{HB_Script_Common, 0},
	{0x100, subTableOghamRunic},
	{HB_Script_Khmer, 0},

	{HB_Script_Common, 0},//0x18
	{HB_Script_Khmer, 0},
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},

	{HB_Script_Common, 0},//0x1c
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},

	{HB_Script_Common, 0},//0x20
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},

	{HB_Script_Common, 0},//0x24
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},

	{HB_Script_Common, 0},//0x28
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},

	{HB_Script_Common, 0},//0x2c
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},

	{HB_Script_Common, 0},//0x30
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},

	{HB_Script_Common, 0},//0x34
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},

	{HB_Script_Common, 0},//0x38
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},

	{HB_Script_Common, 0},//0x3c
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},

	{HB_Script_Common, 0},//0x40
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},

	{HB_Script_Common, 0},//0x44
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},

	{HB_Script_Common, 0},//0x48
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},

	{HB_Script_Common, 0},//0x4c
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},

	{HB_Script_Common, 0},//0x50
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},

	{HB_Script_Common, 0},//0x54
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},

	{HB_Script_Common, 0},//0x58
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},

	{HB_Script_Common, 0},//0x5c
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},

	{HB_Script_Common, 0},//0x60
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},

	{HB_Script_Common, 0},//0x64
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},

	{HB_Script_Common, 0},//0x68
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},

	{HB_Script_Common, 0},//0x6c
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},

	{HB_Script_Common, 0},//0x70
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},

	{HB_Script_Common, 0},//0x74
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},

	{HB_Script_Common, 0},//0x78
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},

	{HB_Script_Common, 0},//0x7c
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},

	{HB_Script_Common, 0},//0x80
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},

	{HB_Script_Common, 0},//0x84
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},

	{HB_Script_Common, 0},//0x88
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},

	{HB_Script_Common, 0},//0x8c
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},

	{HB_Script_Common, 0},//0x40
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},

	{HB_Script_Common, 0},//0x94
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},

	{HB_Script_Common, 0},//0x98
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},

	{HB_Script_Common, 0},//0x9c
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},

	{HB_Script_Common, 0},//0xa0
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},

	{HB_Script_Common, 0},//0xa4
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},

	{HB_Script_Common, 0},//0xa8
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},

	{HB_Script_Common, 0},//0xac
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},

	{HB_Script_Common, 0},//0xb0
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},

	{HB_Script_Common, 0},//0xb4
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},

	{HB_Script_Common, 0},//0xb8
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},

	{HB_Script_Common, 0},//0xbc
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},

	{HB_Script_Common, 0},//0xc0
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},

	{HB_Script_Common, 0},//0xc4
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},

	{HB_Script_Common, 0},//0xc8
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},

	{HB_Script_Common, 0},//0xcc
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},

	{HB_Script_Common, 0},//0xd0
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},

	{HB_Script_Common, 0},//0xd4
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},

	{HB_Script_Common, 0},//0xd8
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},

	{HB_Script_Common, 0},//0xdc
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},

	{HB_Script_Common, 0},//0xe0
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},

	{HB_Script_Common, 0},//0xe4
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},

	{HB_Script_Common, 0},//0xe8
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},

	{HB_Script_Common, 0},//0xec
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},

	{HB_Script_Common, 0},//0xf0
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},

	{HB_Script_Common, 0},//0xf4
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},

	{HB_Script_Common, 0},//0xf8
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},

	{HB_Script_Common, 0},//0xfc
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},
	{HB_Script_Common, 0},//ff
};

#endif /* __hb_unicode_tables_h__ */

