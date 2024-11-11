#pragma once

#ifdef MARA_PLATFORM_WINDOWS
	#ifdef MARA_BUILD_DLL
		#define MARA_API __declspec(dllexport)
	#else
		#define MARA_API __declspec(dllimport)
	#endif
#else
	#error Mara only supports Windows!
#endif