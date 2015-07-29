
#ifndef b_EXPORT_H
#define b_EXPORT_H

#ifdef b_BUILT_AS_STATIC
#  define b_EXPORT
#  define B_NO_EXPORT
#else
#  ifndef b_EXPORT
#    ifdef b_EXPORTS
        /* We are building this library */
#      define b_EXPORT 
#    else
        /* We are using this library */
#      define b_EXPORT 
#    endif
#  endif

#  ifndef B_NO_EXPORT
#    define B_NO_EXPORT 
#  endif
#endif

#ifndef B_DEPRECATED
#  define B_DEPRECATED __declspec(deprecated)
#endif

#ifndef B_DEPRECATED_EXPORT
#  define B_DEPRECATED_EXPORT b_EXPORT B_DEPRECATED
#endif

#ifndef B_DEPRECATED_NO_EXPORT
#  define B_DEPRECATED_NO_EXPORT B_NO_EXPORT B_DEPRECATED
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define B_NO_DEPRECATED
#endif

#endif
