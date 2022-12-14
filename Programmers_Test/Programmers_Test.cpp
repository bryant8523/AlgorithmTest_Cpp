#include "pch.h"
#include "CppUnitTest.h"
#include "../Algorithm/Programmers.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ProgrammersTest
{
	TEST_CLASS(ProgrammersTest)
	{
	public:
		TEST_METHOD(a01)
		{
			Assert::IsTrue(a01_Poketmon(vector<int> {3, 1, 2, 3}) == 2);
			Assert::IsTrue(a01_Poketmon(vector<int> {3, 3, 3, 2, 2, 4}) == 3);
			Assert::IsTrue(a01_Poketmon(vector<int> {3, 3, 3, 2, 2, 2}) == 2);
		}
		TEST_METHOD(a02)
		{
			Assert::IsTrue(a02_Year_of_2016(5, 24) == "TUE");
		}
		TEST_METHOD(a03)
		{
			Assert::IsTrue(a03_Get_middle_letter("abcde") == "c");
			Assert::IsTrue(a03_Get_middle_letter("qwer") == "we");
		}
		TEST_METHOD(a04)
		{
			Assert::IsTrue(a04_hate_same_number(vector<int>{ 1,1,3,3,0,1,1 }) == vector<int>{1, 3, 0, 1});
			Assert::IsTrue(a04_hate_same_number(vector<int>{ 4, 4, 4, 3, 3 }) == vector<int>{4, 3});
		}
		TEST_METHOD(a05)
		{
			Assert::IsTrue(a05_a_divisive_array_of_numbers(vector<int>{ 5, 9, 7, 10 }, 5) == vector<int>{5, 10});
			Assert::IsTrue(a05_a_divisive_array_of_numbers(vector<int>{ 2, 36, 1, 3 }, 1) == vector<int>{1, 2, 3, 36});
			Assert::IsTrue(a05_a_divisive_array_of_numbers(vector<int>{ 3, 2, 6 }, 10) == vector<int>{-1});
		}
		TEST_METHOD(a06)
		{
			Assert::IsTrue(a06_the_sum_between_two_integers(3,5) == 12);
			Assert::IsTrue(a06_the_sum_between_two_integers(3,3) == 3);
			Assert::IsTrue(a06_the_sum_between_two_integers(5,3) == 12);
		}

		TEST_METHOD(a07)
		{
			Assert::IsTrue(a07_Sorting_the_string_as_you_will(
				vector<string>{"sun", "bed", "car"},1) == vector<string>{"car", "bed", "sun"});
			Assert::IsTrue(a07_Sorting_the_string_as_you_will(
				vector<string>{"abce", "abcd", "cdx"}, 2) == vector<string>{"abcd", "abce", "cdx"});
		}


		TEST_METHOD(a23)
		{
			Assert::IsTrue(a23_Evenand_odd_numbers(3) == "Odd");
			Assert::IsTrue(a23_Evenand_odd_numbers(4) == "Even");
		}
		TEST_METHOD(a18)
		{
			Assert::AreEqual(a18_Add_digits(123), 6);
			Assert::AreEqual(a18_Add_digits(987), 24);
		}
		TEST_METHOD(a16)
		{
			Assert::AreEqual(a16_the_sum_of_the_divisor(0), 0);
			
			// (1,1) <= 1 한개로 봐야함
			Assert::AreEqual(a16_the_sum_of_the_divisor(1), 1);
			// 1,4 & (2,2) <= 2 한개로 봐야함
			Assert::AreEqual(a16_the_sum_of_the_divisor(4), 7);
			// 1,9 & (3,3)<= 3 한개로 봐야함
			Assert::AreEqual(a16_the_sum_of_the_divisor(9), 13);


			Assert::AreEqual(a16_the_sum_of_the_divisor(12), 28);
			Assert::AreEqual(a16_the_sum_of_the_divisor(5), 6);
		}

		TEST_METHOD(a26)
		{
			Assert::AreEqual(a26_Obtaining_the_Mean(vector<int> {1, 2, 3, 4}), 2.5);
			Assert::AreEqual(a26_Obtaining_the_Mean(vector<int> {5, 5}), 5.0);
		}

		TEST_METHOD(a21)
		{
			Assert::AreEqual(a21_Determining_the_Integer_Square_Root(121), (long long)144);
			Assert::AreEqual(a21_Determining_the_Integer_Square_Root(3), (long long)-1);
		}

		TEST_METHOD(a19)
		{
			Assert::IsTrue(a19_Turn_the_natural_number_upside_down_to_make_it_an_array(12345) == vector<int> {5, 4, 3, 2, 1});
			Assert::IsTrue(a19_Turn_the_natural_number_upside_down_to_make_it_an_array(23456) == vector<int> {6, 5, 4, 3, 2});
		}

		TEST_METHOD(a08)
		{

			Assert::IsTrue(a08_Number_of_p_and_y_in_the_string("pPoooyY") == true);
			Assert::IsTrue(a08_Number_of_p_and_y_in_the_string("Pyy") == false);
		}

		TEST_METHOD(a20)
		{
			Assert::IsTrue(a20_Place_in_integer_descending_order(118372) == 873211);
		}

		TEST_METHOD(a27)
		{
			Assert::IsTrue(a27_Hashad_number(10) == true);
			Assert::IsTrue(a27_Hashad_number(12) == true);
			Assert::IsTrue(a27_Hashad_number(11) == false);
			Assert::IsTrue(a27_Hashad_number(13) == false);
		}

		TEST_METHOD(a14)
		{
			Assert::IsTrue(a14_Replace_a_String_with_an_Integer("1234") == 1234);
			Assert::IsTrue(a14_Replace_a_String_with_an_Integer("-1234") == -1234);
		}

		TEST_METHOD(a30)
		{
			Assert::IsTrue(a30_n_numbers_spaced_by_x(2, 5) == vector<long long>{2, 4, 6, 8, 10});
			Assert::IsTrue(a30_n_numbers_spaced_by_x(4, 3) == vector<long long>{4, 8, 12});
		}
	};
}
