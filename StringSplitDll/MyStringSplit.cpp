#include "pch.h"
#include "MyStringSplit.h"

std::vector<std::string> splitString(const std::string& vInput, char vSeperator)
{
	std::vector<std::string> result;
	int subIndex = 0;
	std::string cutString, lastString;
	for (int i = 0; i < vInput.size(); i++)
	{
		if (vInput[i] == vSeperator) {
			cutString = vInput.substr(subIndex, i - subIndex);
			if (cutString != "") {
				result.push_back(cutString);
			}
			subIndex = i + 1;
		}
	}
	lastString = vInput.substr(subIndex);
	if (lastString != "") {
		result.push_back(lastString);
	}
	return result;
}