/* Assertions, when DEBUG defined */
#if !defined(HEADERS_ASSERT_H)
#define HEADERS_ASSERT_H

/* Assertions, with no libc */
#if defined(DEBUG)
  #define ASSERT(EXPR) if (!(EXPR)) { *(int *)0 = 0; }
#else
  #define ASSERT(EXPR) (void)(EXPR)
#endif /* DEBUG */

#endif /* HEADERS_ASSERT_H */
