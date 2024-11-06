#include "pch.h"
#include "CppUnitTest.h"
#include <vector>
#include <numbers>
#include "../lab9.2.2/lab9.2.2.cpp"
using namespace std;


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest922
{
	TEST_CLASS(UnitTest922)
	{
	public:
		
		TEST_METHOD(TestMethodSort)
		{
			vector<int> numbers = { 5, 4, 3, 2, 1 };
			vector<int> expected = { 1, 2, 3, 4, 5 };
            vector<int> result = sortNumbers(numbers);
			Assert::IsTrue(result == expected);
		}
	};
}
