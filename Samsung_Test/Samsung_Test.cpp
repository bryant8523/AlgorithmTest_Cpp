#include "pch.h"
#include "CppUnitTest.h"
#include "../Algorithm/Samsung.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace SamsungTest
{
	TEST_CLASS(SamsungTest)
	{
	public:
		TEST_METHOD(a01)
		{
			Assert::IsTrue( a01_Odd_number_only(vector<int> {3, 17, 1, 39, 8, 41, 2, 32, 99, 2}) == 200 );
			Assert::IsTrue( a01_Odd_number_only(vector<int> {22, 8, 5, 123, 7, 2, 63, 7, 3, 46}) == 208 );
			Assert::IsTrue( a01_Odd_number_only(vector<int> {6, 63, 2, 3, 58, 76, 21, 33, 8, 1 }) == 121 );
		}

		TEST_METHOD(a02)
		{
			Assert::IsTrue(a02_Obtain_the_average_value(vector<int> {3, 17, 1, 39, 8, 41, 2, 32, 99, 2}) == 24);
			Assert::IsTrue(a02_Obtain_the_average_value(vector<int> {22, 8, 5, 123, 7, 2, 63, 7, 3, 46}) == 29);
			Assert::IsTrue(a02_Obtain_the_average_value(vector<int> {6, 63, 2, 3, 58, 76, 21, 33, 8, 1 }) == 27);
		}
	};
}
