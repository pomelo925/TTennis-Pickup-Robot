
#ifndef RTABMAP_CORE_EXPORT_H
#define RTABMAP_CORE_EXPORT_H

#ifdef RTABMAP_CORE_STATIC_DEFINE
#  define RTABMAP_CORE_EXPORT
#  define RTABMAP_CORE_NO_EXPORT
#else
#  ifndef RTABMAP_CORE_EXPORT
#    ifdef rtabmap_core_EXPORTS
        /* We are building this library */
#      define RTABMAP_CORE_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define RTABMAP_CORE_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef RTABMAP_CORE_NO_EXPORT
#    define RTABMAP_CORE_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef RTABMAP_DEPRECATED
#  define RTABMAP_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef RTABMAP_DEPRECATED_EXPORT
#  define RTABMAP_DEPRECATED_EXPORT RTABMAP_CORE_EXPORT RTABMAP_DEPRECATED
#endif

#ifndef RTABMAP_DEPRECATED_NO_EXPORT
#  define RTABMAP_DEPRECATED_NO_EXPORT RTABMAP_CORE_NO_EXPORT RTABMAP_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef RTABMAP_CORE_NO_DEPRECATED
#    define RTABMAP_CORE_NO_DEPRECATED
#  endif
#endif

#endif /* RTABMAP_CORE_EXPORT_H */
