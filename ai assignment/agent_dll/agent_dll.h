#ifndef __MAIN_H__
#define __MAIN_H__

#include <windows.h>

#ifdef BUILD_DLL
    #define DLL_EXPORT __declspec(dllexport)
#else
    #define DLL_EXPORT __declspec(dllimport)
#endif


#ifdef __cplusplus
extern "C"
{
#endif

void controller(int &action, const size_t agent, const size_t num_agents, const size_t num_resources, const int* circleRadius, const int* xCoordinate, const int* yCoordinate, const int* xVelocity, const int* yVelocity);

#ifdef __cplusplus
}
#endif

#endif // __MAIN_H__
