/* Some constants */
#if !defined(HEADERS_CONSTS_H)
#define HEADERS_CONSTS_H

/* Mathematical constants */
#define C_PI        3.14159265358979323846f   /* Pi */
#define C_E         2.71828182845904523536f   /* Euler's number */
/* Size prefixes */
#define C_KB        1024                      /* 1 KiB in bytes */
#define C_MB        C_KB * 1024               /* 1 MiB in bytes */
#define C_GB        C_MB * 1024               /* 1 GiB in bytes */
#define C_TB        C_GB * 1024               /* 1 TiB in bytes */
/* Minimum and max for each type */
#define C_MIN_I8    -128                      /* Minimum for i8 */
#define C_MAX_I8     127                      /* Maximum for i8 */
#define C_MIN_I16   -32768                    /* Minimum for i16 */
#define C_MAX_I16    32767                    /* Maximum for i16 */
#define C_MIN_I32   -2147483648               /* Minimum for i32 */
#define C_MAX_I32    2147483647               /* Maximum for i32 */
#define C_MIN_I64   -9223372036854775808      /* Minimum for i64 */
#define C_MAX_I64    9223372036854775807      /* Maximum for i64 */
#define C_MAX_U8    255                       /* Maximum for u8 */
#define C_MAX_U16   65535                     /* Maximum for u16 */
#define C_MAX_U32   4294967295                /* Maximum for u32 */
#define C_MAX_U64   18446744073709551615      /* Maximum for u64 */
/* Infinity and NaN */
#define C_NAN       (0.0f/0.0f)               /* NaN */
#define C_INF       (1.0f/0.0f)               /* Infinity */
/* A null pointer */
#define C_NULL      ((void *)0)               /* Null pointer */
/* A sentence of lorem ipsum */
#define C_LOREM     "Lorem ipsum dolor sit " \
                    "amet, qui minim labore" \
                    "adipisicing minim sint" \
                    "cillum sint consectetur"\
                    "cupidatat."

#endif /* HEADERS_CONSTS_H */
