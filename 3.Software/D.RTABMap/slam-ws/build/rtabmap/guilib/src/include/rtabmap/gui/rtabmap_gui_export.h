
#ifndef RTABMAP_GUI_EXPORT_H
#define RTABMAP_GUI_EXPORT_H

#ifdef RTABMAP_GUI_STATIC_DEFINE
#  define RTABMAP_GUI_EXPORT
#  define RTABMAP_GUI_NO_EXPORT
#else
#  ifndef RTABMAP_GUI_EXPORT
#    ifdef rtabmap_gui_EXPORTS
        /* We are building this library */
#      define RTABMAP_GUI_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define RTABMAP_GUI_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef RTABMAP_GUI_NO_EXPORT
#    define RTABMAP_GUI_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef RTABMAP_DEPRECATED
#  define RTABMAP_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef RTABMAP_DEPRECATED_EXPORT
#  define RTABMAP_DEPRECATED_EXPORT RTABMAP_GUI_EXPORT RTABMAP_DEPRECATED
#endif

#ifndef RTABMAP_DEPRECATED_NO_EXPORT
#  define RTABMAP_DEPRECATED_NO_EXPORT RTABMAP_GUI_NO_EXPORT RTABMAP_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef RTABMAP_GUI_NO_DEPRECATED
#    define RTABMAP_GUI_NO_DEPRECATED
#  endif
#endif

#endif /* RTABMAP_GUI_EXPORT_H */
