/* This file has been automatically generated by builder part of the ferite distribution */
#ifndef __string_HEADER__
#define __string_HEADER__

#include <ferite.h>

FERITE_API void ferite_string_register();
FERITE_API void ferite_string_unregister();
FERITE_API void ferite_string_init( FeriteScript *script );
FERITE_API void ferite_string_deinit( FeriteScript *script );

    /* Start user defined header code */



#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

#ifdef VCWIN32
# include <snprintf.h>
#endif
	

    /* End user defined header code */

FE_NATIVE_FUNCTION( ferite_string_String_octalStringToNumber_s );
FE_NATIVE_FUNCTION( ferite_string_String_toHex_s );
FE_NATIVE_FUNCTION( ferite_string_String_escape_s );
FE_NATIVE_FUNCTION( ferite_string_String_postTrim_ss );
FE_NATIVE_FUNCTION( ferite_string_String_trim_ss );
FE_NATIVE_FUNCTION( ferite_string_String___isfmt_s );
FE_NATIVE_FUNCTION( ferite_string_String_isprint_s );
FE_NATIVE_FUNCTION( ferite_string_String_isdigit_s );
FE_NATIVE_FUNCTION( ferite_string_String_isgraph_s );
FE_NATIVE_FUNCTION( ferite_string_String_toNumber_s );
FE_NATIVE_FUNCTION( ferite_string_String_base64encode_s );
FE_NATIVE_FUNCTION( ferite_string_String_compare_ss );
FE_NATIVE_FUNCTION( ferite_string_String_preTrim_ss );
FE_NATIVE_FUNCTION( ferite_string_String_blocks_sn );
FE_NATIVE_FUNCTION( ferite_string_String_toLower_s );
FE_NATIVE_FUNCTION( ferite_string_String_length_s );
FE_NATIVE_FUNCTION( ferite_string_String_nCompareCase_ssn );
FE_NATIVE_FUNCTION( ferite_string_String_toUpper_s );
FE_NATIVE_FUNCTION( ferite_string_String_nCompareNoCase_ssn );
FE_NATIVE_FUNCTION( ferite_string_String_byteToNumber_s );
FE_NATIVE_FUNCTION( ferite_string_String_numberToByte_n );
FE_NATIVE_FUNCTION( ferite_string_String_toDouble_s );
FE_NATIVE_FUNCTION( ferite_string_String_hexStringToNumber_s );
FE_NATIVE_FUNCTION( ferite_string_String_ispunct_s );
FE_NATIVE_FUNCTION( ferite_string_String_isalnum_s );
FE_NATIVE_FUNCTION( ferite_string_String_dissect_ssn );
FE_NATIVE_FUNCTION( ferite_string_String_index_ss );
FE_NATIVE_FUNCTION( ferite_string_String_pad_sns );
FE_NATIVE_FUNCTION( ferite_string_String_isNumber_s );
FE_NATIVE_FUNCTION( ferite_string_String_replace_sss );
FE_NATIVE_FUNCTION( ferite_string_String_isalpha_s );
FE_NATIVE_FUNCTION( ferite_string_String_compareCase_ss );
FE_NATIVE_FUNCTION( ferite_string_String_binaryStringToNumber_s );
FE_NATIVE_FUNCTION( ferite_string_String_compareNoCase_ss );
FE_NATIVE_FUNCTION( ferite_string_String_islower_s );
FE_NATIVE_FUNCTION( ferite_string_String_toLong_s );
FE_NATIVE_FUNCTION( ferite_string_String_isupper_s );
FE_NATIVE_FUNCTION( ferite_string_String_orderedCompare_ss );
FE_NATIVE_FUNCTION( ferite_string_String_iscntrl_s );
FE_NATIVE_FUNCTION( ferite_string_String_unescape_s );
FE_NATIVE_FUNCTION( ferite_string_String___printvar_sv );
FE_NATIVE_FUNCTION( ferite_string_String_isspace_s );
FE_NATIVE_FUNCTION( ferite_string_String_base64decode_s );
FE_NATIVE_FUNCTION( ferite_string_String_toArray_ssn );
FE_NATIVE_FUNCTION( ferite_string_String_isxdigit_s );
FE_NATIVE_FUNCTION( ferite_string_String_hexToNumber_s );

#endif /* __string_HEADER__ */
