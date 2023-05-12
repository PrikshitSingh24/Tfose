#pragma once
#ifdef TF_PLATFORM_WINDOWS
	#ifdef TF_BUILD_DLL
		#define TFOSE_API __declspec(dllexport)
	#else
		#define TFOSE_API __declspec(dllimport)
	#endif // 

#else
	#error Tfose only supports windows!!!

#endif // TF_PLATFORM_WINDOWS
