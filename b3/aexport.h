
#ifndef a_EXPORT_H
#define a_EXPORT_H

#ifdef a_BUILT_AS_STATIC
#  define a_EXPORT
#  define A_NO_EXPORT
#else
#  ifndef a_EXPORT
#    ifdef a_EXPORTS
        /* We are building this library */
#      define a_EXPORT 
#    else
        /* We are using this library */
#      define a_EXPORT 
#    endif
#  endif

#  ifndef A_NO_EXPORT
#    define A_NO_EXPORT 
#  endif
#endif

#ifndef A_DEPRECATED
#  define A_DEPRECATED __declspec(deprecated)
#endif

#ifndef A_DEPRECATED_EXPORT
#  define A_DEPRECATED_EXPORT a_EXPORT A_DEPRECATED
#endif

#ifndef A_DEPRECATED_NO_EXPORT
#  define A_DEPRECATED_NO_EXPORT A_NO_EXPORT A_DEPRECATED
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define A_NO_DEPRECATED
#endif

#endif
