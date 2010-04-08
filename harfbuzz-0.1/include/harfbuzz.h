/*
 * Copyright (C) 1998-2004  David Turner and Werner Lemberg
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

#ifndef HARFBUZZ_H
#define HARFBUZZ_H

#include "harfbuzz-external.h"
#include "harfbuzz-impl.h"
#include "harfbuzz-global.h"
#include "harfbuzz-buffer.h"
#include "harfbuzz-gdef.h"
#include "harfbuzz-gsub.h"
#include "harfbuzz-gpos.h"
#include "harfbuzz-open.h"
#include "harfbuzz-shaper.h"

#define HB_DOTTED_CIRCLE	0x25CC   /** DottedCircle used with dependent Matras */
#define HB_ZWJ           0x200D   /** Zero Width Joiner */
#define HB_ZWNJ          0x200C   /** Zero Width Non-Joiner */

#define HB_INITIAL_NO_OF_GLYPH	64

extern HB_Error hb_getScriptID(HB_UShort value, HB_Script *scriptID) ;
extern HB_Error hb_getTextWithScriptID(HB_UShort *text, int textLen, HB_Script *scriptID, int *scriptLen) ;
extern int hb_getSyllableLength(HB_UShort *text, int textLen, HB_Script *scriptID) ;

#endif /* HARFBUZZ_OPEN_H */
