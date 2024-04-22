/* Some utitility macros */
#if !defined(HEADERS_UTILS_H)
#define HEADERS_UTILS_H

/* Project headers */
#include "types.h"

/* Minimum of two values */
#define MIN(a, b) (((a) < (b)) ? (a) : (b))
/* Maximum of two values */
#define MAX(a, b) (((a) > (b)) ? (a) : (b))
/* Swap two variables (ANSI-compatible) */
#define SWAP(a, b, t) ((t) = (a), (a) = (b), (b) = (t))
/* Get an index of an array from an x and a y */
#define INDEX_XY(x, y, w) ((y) * (w) + (x))
/* Stringify */
#define STRFROM(x) #x
/* Concatenate */
#define CONCAT(x, y) x ## y

#endif /* HEADERS_UTILS_H */
