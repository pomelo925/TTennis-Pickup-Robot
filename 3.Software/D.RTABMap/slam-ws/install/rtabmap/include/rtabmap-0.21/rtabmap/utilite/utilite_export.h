
#ifndef UTILITE_EXPORT_H
#define UTILITE_EXPORT_H

#ifdef UTILITE_STATIC_DEFINE
#  define UTILITE_EXPORT
#  define UTILITE_NO_EXPORT
#else
#  ifndef UTILITE_EXPORT
#    ifdef rtabmap_utilite_EXPORTS
        /* We are building this library */
#      define UTILITE_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define UTILITE_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef UTILITE_NO_EXPORT
#    define UTILITE_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef UTILITE_DEPRECATED
#  define UTILITE_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef UTILITE_DEPRECATED_EXPORT
#  define UTILITE_DEPRECATED_EXPORT UTILITE_EXPORT UTILITE_DEPRECATED
#endif

#ifndef UTILITE_DEPRECATED_NO_EXPORT
#  define UTILITE_DEPRECATED_NO_EXPORT UTILITE_NO_EXPORT UTILITE_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef UTILITE_NO_DEPRECATED
#    define UTILITE_NO_DEPRECATED
#  endif
#endif

#endif /* UTILITE_EXPORT_H */
