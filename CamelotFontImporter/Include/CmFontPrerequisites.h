#pragma once

#include "CmPrerequisites.h"

#if (CM_PLATFORM == CM_PLATFORM_WIN32) && !defined(__MINGW32__)
#	ifdef CM_FONT_EXPORTS
#		define CM_FONT_EXPORT __declspec(dllexport)
#	else
#       if defined( __MINGW32__ )
#           define CM_FONT_EXPORT
#       else
#    		define CM_FONT_EXPORT __declspec(dllimport)
#       endif
#	endif
#elif defined ( CM_GCC_VISIBILITY )
#    define CM_FONT_EXPORT  __attribute__ ((visibility("default")))
#else
#    define CM_FONT_EXPORT
#endif