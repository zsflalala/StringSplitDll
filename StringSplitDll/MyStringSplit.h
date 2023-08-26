#pragma once
#include <vector>
#include <string>

#ifdef BUILD_MYSTRINSPLITGDLL
#define API_SYMBOL __declspec(dllexport)
#else
#define API_SYMBOL __declspec(dllimport)
#endif // BUILD_MYSTRINGSPLITDLL

extern "C++" API_SYMBOL std::vector<std::string> splitString(const std::string & vInput, char vSeperator);