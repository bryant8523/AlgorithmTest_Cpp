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
			Assert::AreEqual(a03_the_sum_of_the_divisor(0), 0);
			
			// (1,1) <= 1 한개로 봐야함
			Assert::AreEqual(a03_the_sum_of_the_divisor(1), 1);
			// 1,4 & (2,2) <= 2 한개로 봐야함
			Assert::AreEqual(a03_the_sum_of_the_divisor(4), 7);
			// 1,9 & (3,3)<= 3 한개로 봐야함
			Assert::AreEqual(a03_the_sum_of_the_divisor(9), 13);


			Assert::AreEqual(a03_the_sum_of_the_divisor(12), 28);
			Assert::AreEqual(a03_the_sum_of_the_divisor(5), 6);
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
			Assert::IsTrue(a06_Turn_the_natural_number_upside_down_to_make_it_an_array(12345) == vector<int> {5, 4, 3, 2, 1});
			Assert::IsTrue(a06_Turn_the_natural_number_upside_down_to_make_it_an_array(23456) == vector<int> {6, 5, 4, 3, 2});
		}

		TEST_METHOD(a07)
		{

			Assert::IsTrue(a07_Number_of_p_and_y_in_the_string("pPoooyY") == true);
			Assert::IsTrue(a07_Number_of_p_and_y_in_the_string("Pyy") == false);
		}

		TEST_METHOD(a08)
		{
			Assert::IsTrue(a08_Place_in_integer_descending_order(118372) == 873211);
		}

		TEST_METHOD(a09)
		{
			Assert::IsTrue(a09_Hashad_number(10) == true);
			Assert::IsTrue(a09_Hashad_number(12) == true);
			Assert::IsTrue(a09_Hashad_number(11) == false);
			Assert::IsTrue(a09_Hashad_number(13) == false);
		}

		TEST_METHOD(a10)
		{
			Assert::IsTrue(a10_Replace_a_String_with_an_Integer("1234") == 1234);
			Assert::IsTrue(a10_Replace_a_String_with_an_Integer("-1234") == -1234);
		}
	};
}
