#pragma once

#ifdef HIRC_PLATFORM_WINDOWS
	#ifdef HIRC_BUILD_DLL
		#define HIRC_API __declspec(dllexport)
	#else
		#define HIRC_API __declspec(dllimport)
	#endif	
#else
	#error Hirc Engine only supports Windows!
#endif