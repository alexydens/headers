/* Some context-cracking macros */
#if !defined(HEADERS_CONTEXT_H)
#define HEADERS_CONTEXT_H

/* ARCHITECTURE */
/* x86_64 */
#if defined(__x86_64__) || defined(_M_X64) || defined(_M_AMD64)
  #define C_ARCH_X86_64   1
  #define C_ARCH_X86      1
  #define C_ARCH_64       1
#endif
/* x86 */
#if defined(__i386__) || defined(_M_IX86) || defined(_M_X86)
  #define C_ARCH_X86      1
  #define C_ARCH_32       1
#endif
/* ARM */
#if defined(__arm__) || defined(_M_ARM)
  #define C_ARCH_ARM      1
  #define C_ARCH_32       1
#endif
/* ARM64 */
#if defined(__aarch64__) || defined(_M_ARM64)
  #define C_ARCH_ARM      1
  #define C_ARCH_64       1
#endif
#if !defined(C_ARCH_X86_64)
  #define C_ARCH_X86_64   0
#endif
#if !defined(C_ARCH_X86)
  #define C_ARCH_X86      0
#endif
#if !defined(C_ARCH_ARM)
  #define C_ARCH_ARM      0
#endif
#if !defined(C_ARCH_64)
  #define C_ARCH_64       0
#endif
#if !defined(C_ARCH_32)
  #define C_ARCH_32       0
#endif
/* COMPILER */
/* GCC */
#if defined(__GNUC__)
  #define C_COMPILER_GCC  1
/* MSVC */
#elif defined(_MSC_VER)
  #define C_COMPILER_MSVC 1
#endif
#if !defined(C_COMPILER_GCC)
  #define C_COMPILER_GCC  0
#endif
#if !defined(C_COMPILER_MSVC)
  #define C_COMPILER_MSVC 0
#endif
/* OPERATING SYSTEM */
/* linux */
#if defined(__linux__)
  #define C_OS_LINUX 1
#endif
/* Windows */
#if defined(_WIN32) || defined(_WIN64)
  #define C_OS_WINDOWS 1
#endif
#if !defined(C_OS_LINUX)
  #define C_OS_LINUX 0
#endif
#if !defined(C_OS_WINDOWS)
  #define C_OS_WINDOWS 0
#endif
/* Check for no architecture */
#if !defined(C_ARCH_X86_64) && !defined(C_ARCH_X86) && !defined(C_ARCH_ARM) && !defined(C_ARCH_64) && !defined(C_ARCH_32)
  #error "No architecture defined"
#endif
/* Check for no compiler */
#if !defined(C_COMPILER_GCC) && !defined(C_COMPILER_MSVC)
  #error "No compiler defined"
#endif
/* Check for no operating system */
#if !defined(C_OS_LINUX) && !defined(C_OS_WINDOWS)
  #error "No operating system defined"
#endif

#endif /* HEADERS_CONTEXT_H */
