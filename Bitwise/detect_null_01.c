/* detect 0 or NULL char '\0' */

// This MACRO can use in alignment.
// If we can ensure that no NULL in the char, we can align or move it directly.

#include <stdio.h>
#include <string.h>

#define DETECT_NULL(X) ( ((X) - 0x01010101) & ~(X) & 0x80808080 )
