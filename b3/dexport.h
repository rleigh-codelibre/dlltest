
#ifndef d_EXPORT_H
#define d_EXPORT_H

#ifdef d_BUILT_AS_STATIC
#  define d_EXPORT
#  define D_NO_EXPORT
#else
#  ifndef d_EXPORT
#    ifdef d_EXPORTS
        /* We are building this library */
#      define d_EXPORT 
#    else
        /* We are using this library */
#      define d_EXPORT 
#    endif
#  endif

#  ifndef D_NO_EXPORT
#    define D_NO_EXPORT 
#  endif
#endif

#ifndef D_DEPRECATED
#  define D_DEPRECATED __declspec(deprecated)
#endif

#ifndef D_DEPRECATED_EXPORT
#  define D_DEPRECATED_EXPORT d_EXPORT D_DEPRECATED
#endif

#ifndef D_DEPRECATED_NO_EXPORT
#  define D_DEPRECATED_NO_EXPORT D_NO_EXPORT D_DEPRECATED
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define D_NO_DEPRECATED
#endif

#endif
