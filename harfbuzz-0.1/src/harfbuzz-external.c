/*
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


#include "harfbuzz-external.h"


HB_GraphemeClass HB_GetGraphemeClass(HB_UChar32 ch){return 0;}
HB_WordClass HB_GetWordClass(HB_UChar32 ch){return 0;}
HB_SentenceClass HB_GetSentenceClass(HB_UChar32 ch){return 0;}
HB_LineBreakClass HB_GetLineBreakClass(HB_UChar32 ch){return 0;}

void HB_GetGraphemeAndLineBreakClass(HB_UChar32 ch, HB_GraphemeClass *grapheme, HB_LineBreakClass *lineBreak){}
void HB_GetUnicodeCharProperties(HB_UChar32 ch, HB_CharCategory *category, int *combiningClass){}
HB_CharCategory HB_GetUnicodeCharCategory(HB_UChar32 ch){return 0;}
int HB_GetUnicodeCharCombiningClass(HB_UChar32 ch){return 0;}
HB_UChar16 HB_GetMirroredChar(HB_UChar16 ch){return 0;}

void *HB_Library_Resolve(const char *library, const char *symbol){}

void *HB_TextCodecForMib(int mib){}
char *HB_TextCodec_ConvertFromUnicode(void *codec, const HB_UChar16 *unicode, hb_uint32 length, hb_uint32 *outputLength){return NULL;}
void HB_TextCodec_FreeResult(char * text){}



