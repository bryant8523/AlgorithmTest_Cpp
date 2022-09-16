#include "pch.h"
#include "CppUnitTest.h"
#include "../Algorithm/Solution_Programmers.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ProgrammersTest
{
	TEST_CLASS(ProgrammersTest)
	{
	public:
		
		TEST_METHOD(a01)
		{
			Assert::IsTrue(a01_Evenand_odd_numbers(3) == "Odd");
			Assert::IsTrue(a01_Evenand_odd_numbers(4) == "Even");
		}
		TEST_METHOD(a02)
		{
			Assert::AreEqual(a02_Add_digits(123), 6);
			Assert::AreEqual(a02_Add_digits(987), 24);
		}
		TEST_METHOD(a03)
		{
			Assert::AreEqual(a03_the_sum_of_the_mineral_water(0), 0);
			
			// (1,1) <= 1 한개로 봐야함
			Assert::AreEqual(a03_the_sum_of_the_mineral_water(1), 1);
			// 1,4 & (2,2) <= 2 한개로 봐야함
			Assert::AreEqual(a03_the_sum_of_the_mineral_water(4), 7);
			// 1,9 & (3,3)<= 3 한개로 봐야함
			Assert::AreEqual(a03_the_sum_of_the_mineral_water(9), 13);


			Assert::AreEqual(a03_the_sum_of_the_mineral_water(12), 28);
			Assert::AreEqual(a03_the_sum_of_the_mineral_water(5), 6);
		}

		TEST_METHOD(a04)
		{
			Assert::AreEqual(a04_Obtaining_the_Mean(vector<int> {1, 2, 3, 4}), 2.5);
			Assert::AreEqual(a04_Obtaining_the_Mean(vector<int> {5, 5}), 5.0);
		}

		TEST_METHOD(a05)
		{
			Assert::AreEqual(a05_Determining_the_Integer_Square_Root(121), (long long)144);
			Assert::AreEqual(a05_Determining_the_Integer_Square_Root(3), (long long)-1);
		}

		TEST_METHOD(a06)
		{
			
		}

		TEST_METHOD(a07)
		{
			
		}

		TEST_METHOD(a08)
		{
			
		}

		TEST_METHOD(a09)
		{
			
		}

		TEST_METHOD(a10)
		{
			
		}
	};
}
