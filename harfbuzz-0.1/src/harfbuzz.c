/*
 * Copyright (C) 2006  Behdad Esfahbod
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

#include "harfbuzz.h"
#include "hb_unicode_tables.h"

#include "harfbuzz-buffer.c"
#include "harfbuzz-gdef.c"
#include "harfbuzz-gsub.c"
#include "harfbuzz-gpos.c"
#include "harfbuzz-impl.c"
#include "harfbuzz-open.c"
#include "harfbuzz-stream.c"


HB_Error hb_getScriptID(HB_UShort value, HB_Script *scriptID)
{
	HB_Error error = HB_Err_Ok;
	hb_uint8 script = value>>8;

	*scriptID = HB_Script_Common;

	if(0 == scriptTableStruct[script].pSubTable)
	{
		*scriptID = (HB_Script)scriptTableStruct[script].scriptID;
	}
	else if(scriptTableStruct[script].pSubTable != 0)
	{
		if((value&0xFF) < scriptTableStruct[script].scriptID)//check the size of the sub table array
		{
			*scriptID = scriptTableStruct[script].pSubTable[(value&0xFF)];
		}
		else
		{
			error = HB_Err_Not_Covered;
		}
	}
	else
	{
		error = HB_Err_Invalid_SubTable;
	}

	return error;
}

HB_Error hb_getTextWithScriptID(HB_UShort *text, int textLen, HB_Script *scriptID, int *scriptLen)
{
      HB_Script cur_script_id;
      HB_Error error = HB_Err_Ok;
      HB_UShort *curText = text ; 

      *scriptID = HB_Script_Common;
      *scriptLen = 0 ;
 
      if((NULL == curText) || (0 == textLen))
      {
            return HB_Err_Invalid_Argument;
      }

      hb_getScriptID(*curText, scriptID);   
	  
      curText++;
      textLen--; 

      while(textLen)
      {
            if(HB_DOTTED_CIRCLE == *curText     || HB_ZWJ == *curText || HB_ZWNJ == *curText)
            {
                  curText++;
                  textLen--;
                  continue;
            } 

            hb_getScriptID(*curText, &cur_script_id); 

            if(*scriptID != cur_script_id)
            {
                  break;
            } 

            curText++;
            textLen--;
      } 

      *scriptLen = curText -text ;
      return error;

}


int hb_getSyllableLength(HB_UShort *text, int textLen, HB_Script *scriptID)
{
	int len = 0 ;
	HB_Bool invalid ;
	switch (*scriptID)
	{
	case HB_Script_Devanagari:
	case HB_Script_Bengali:
	case HB_Script_Gurmukhi:
	case HB_Script_Gujarati:
	case HB_Script_Oriya:
	case HB_Script_Tamil:
	case HB_Script_Telugu:
	case HB_Script_Kannada:
	case HB_Script_Malayalam:
	case HB_Script_Sinhala:
		len = indic_nextSyllableBoundary(*scriptID, (const HB_UChar16*)text, 0, textLen, &invalid); 
		break ;
	case HB_Script_Khmer:
		len = khmer_nextSyllableBoundary(text, 0, textLen, &invalid);
		break ;
	case HB_Script_Myanmar:
		len = myanmar_nextSyllableBoundary(text, 0, textLen, &invalid);
		break ;
	case HB_Script_Tibetan:
		len = tibetan_nextSyllableBoundary(text, 0, textLen, &invalid);
		break ;
	default:
		len = 1 ;
	}

	return len ;
}

