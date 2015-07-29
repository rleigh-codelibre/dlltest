
#ifndef c_EXPORT_H
#define c_EXPORT_H

#ifdef c_BUILT_AS_STATIC
#  define c_EXPORT
#  define C_NO_EXPORT
#else
#  ifndef c_EXPORT
#    ifdef c_EXPORTS
        /* We are building this library */
#      define c_EXPORT 
#    else
        /* We are using this library */
#      define c_EXPORT 
#    endif
#  endif

#  ifndef C_NO_EXPORT
#    define C_NO_EXPORT 
#  endif
#endif

#ifndef C_DEPRECATED
#  define C_DEPRECATED __declspec(deprecated)
#endif

#ifndef C_DEPRECATED_EXPORT
#  define C_DEPRECATED_EXPORT c_EXPORT C_DEPRECATED
#endif

#ifndef C_DEPRECATED_NO_EXPORT
#  define C_DEPRECATED_NO_EXPORT C_NO_EXPORT C_DEPRECATED
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define C_NO_DEPRECATED
#endif

#endif
