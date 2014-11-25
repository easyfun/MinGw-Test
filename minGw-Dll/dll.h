#ifndef _DLL_H
#define _DLL_H

#ifdef BUILD_DLL
	#define DLL_API __declspec(dllexport)
#else
	#define DLL_API __declspec(dllimport)
#endif

DLL_API void hello();

#endif
