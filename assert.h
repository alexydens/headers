/* Assertions, when DEBUG defined */
#if !defined(HEADERS_ASSERT_H)
#define HEADERS_ASSERT_H

/* Assertions, with no libc */
#if defined(DEBUG)
  #define assert(x) if (!(x)) { *(int *)0 = 0; }
#else
  #define assert(x)
#endif /* DEBUG */

#endif /* HEADERS_ASSERT_H */
