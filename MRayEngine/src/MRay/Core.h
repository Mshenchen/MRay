#pragma once

#ifdef MR_PLATFORM_WINDOWS
	#ifdef MR_BUILD_DLL
		#define MRAY_API __declspec(dllexport)
	#else
		#define MRAY_API __declspec(dllimport) 
	#endif // HZ_BUILD_DLL
#else
	#error MRay only support Windows!
#endif // MR_PLATFORM_WINDOWS
