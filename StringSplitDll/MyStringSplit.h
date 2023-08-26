#pragma once
#define BUILD_MYSTRINGDLL
#include <vector>
#include <string>

#ifdef BUILD_MYSTRINGDLL
#define API_SYMBOL __declspec(dllexport)
#else
#define API_SYMBOL __declspec(dllimport)
#endif // BUILD_MYSTRINGDLL

extern "C++" API_SYMBOL std::vector<std::string> splitString(const std::string & vInput, char vSeperator);