#include "pch.h"
#include "MyStringSplit.h"

TEST(SpringTestCase, NormalSplit1)
{
	std::vector<std::string> res{"Hello", "C++", "World"};
	std::vector<std::string> testRes = splitString("Hello,C++,World", ',');
	ASSERT_EQ(res, testRes);
}

TEST(SpringTestCase, NormalSplit2)
{
	std::vector<std::string> res{"Hello", "C++", "World"};
	std::vector<std::string> testRes = splitString(",,Hello,,C++,,World,,", ',');
	ASSERT_EQ(res, testRes);
}

TEST(SpringTestCase, EmptySplit1)
{
	std::vector<std::string> res{"Hello", "C++", "World!"};
	std::vector<std::string> testRes = splitString("  Hello C++ World! ", ' ');
	ASSERT_EQ(res, testRes);
}

TEST(SpringTestCase, EmptySplit2)
{
	std::vector<std::string> res{};
	std::vector<std::string> testRes = splitString("    ", ' ');
	ASSERT_EQ(res, testRes);
}

TEST(SpringTestCase, EmptyString)
{
	std::vector<std::string> res{};
	std::vector<std::string> testRes = splitString("", ',');
	ASSERT_EQ(res, testRes);
}

TEST(SpringTestCase, NoSplit)
{
	std::vector<std::string> res{"Hello,C++,World!"};
	std::vector<std::string> testRes = splitString("Hello,C++,World!", '.');
	ASSERT_EQ(res, testRes);
}