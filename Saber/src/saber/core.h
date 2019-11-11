#pragma once

#ifdef SAB_PLATFORM_WINDOWS
	#ifdef SAB_BUILD_DLL
		#define SAB_API __declspec(dllexport)
	#else
		#define SAB_API __declspec(dllimport)
	#endif

#else
	#error Saber only supports Windows!

#endif
