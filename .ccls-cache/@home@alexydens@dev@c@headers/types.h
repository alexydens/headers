/* Some typedefs for commonly-used types */
#if !defined(HEADERS_TYPES_H)
#define HEADERS_TYPES_H

/* BASIC TYPES */
/* Unisgned integers */
typedef unsigned char       u8;
typedef unsigned short      u16;
typedef unsigned int        u32;
typedef unsigned long long  u64;
/* Signed integers */
typedef signed char         i8;
typedef signed short        i16;
typedef signed int          i32;
typedef signed long long    i64;
/* Floats */
typedef float               f32;
typedef double              f64;
/* Booleans */
typedef _Bool               bool;
enum { false = 0, true = 1 };
/* ENUMERATIONS */
/* Day of the week */
typedef enum weekday_t {
  MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY
} weekday_t;
/* Month of the year */
typedef enum month_t {
  JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER,
  OCTOBER, NOVEMBER, DECEMBER
} month_t;
/* STRUCTS */
#if !defined (NO_TIME_T)
/* Time of day */
typedef struct time_t {
  u8 hour;
  u8 minute;
  u8 second;
} time_t;
#endif /* NO_TIME_T */
/* Date */
typedef struct date_t {
  u16 year;
  month_t month;
  u8 day;
} date_t;
/* Vector (2D, floats) */
typedef struct vec2_t {
  f32 x;
  f32 y;
} vec2_t;
/* Vector (3D, floats) */
typedef struct vec3_t {
  f32 x;
  f32 y;
  f32 z;
} vec3_t;
/* Vector (4D, floats) */
typedef struct vec4_t {
  f32 x;
  f32 y;
  f32 z;
  f32 w;
} vec4_t;
/* Vector (2D, ints) */
typedef struct ivec2_t {
  i32 x;
  i32 y;
} ivec2_t;
/* Vector (3D, ints) */
typedef struct ivec3_t {
  i32 x;
  i32 y;
  i32 z;
} ivec3_t;
/* Vector (4D, ints) */
typedef struct ivec4_t {
  i32 x;
  i32 y;
  i32 z;
  i32 w;
} ivec4_t;
/*
 * 4x4 matrix:
 *  0  4  8 12
 *  1  5  9 13
 *  2  6 10 14
 *  3  7 11 15
 */
typedef struct mat4_t {
  f32 m[16];
} mat4_t;

#endif /* HEADERS_TYPES_H */
