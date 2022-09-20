#include <math.h>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>


using namespace std;

int main()
{

}

//짝수와 홀수1
string a01_Evenand_odd_numbers(int num) {
    string answer = "";

    answer = (num % 2) == 0 ? "Even" : "Odd";
    
    return answer;
}

// 자릿수 더하기5
int a02_Add_digits(int n)
{
    int answer = 0;

    int copied = n;
    int total = 0;
    while (copied != 0)
    {
         total += copied % 10; // 3, 2, 1
         copied = copied / 10; // 12, 1, 0
    }

    answer = total;

    return answer;
}

// 약수의 합3
int a03_the_sum_of_the_divisor(int n)
{
    // +math.h
    int answer = 0;

    const int startNum = 1;
    int sqrtedNum = sqrt(n);

    int dividedNum;
    for (int i = 0 + startNum; i <= sqrtedNum; i++)
    {
        
        if (n % i == 0)
        {
            dividedNum = n / i;

            if (dividedNum == i)
                answer += dividedNum;
            else
                answer += (dividedNum + i);
        }
    }

    return answer;
}

//평균 구하기2
double a04_Obtaining_the_Mean(vector<int> arr)
{
    double answer = 0;

    double total = 0;
    for (int item : arr)
    {
        total += item;
    }
    answer = total / arr.size();

    return answer;
}

// 정수 제곱근 판별4
long long a05_Determining_the_Integer_Square_Root(long long n) {
    long long answer = 0;

    //#include <math.h>

    double sqrtedNum = sqrt(n);

    // 양의 정수라면
    if (sqrtedNum - (int)sqrtedNum == 0)
    {
        answer = (long long)pow((sqrtedNum + 1), 2);
    }
    else
    {
        answer = -1;
    }
    return answer;
}

// 자연수 뒤집어 배열로 만들기6
vector<int> a06_Turn_the_natural_number_upside_down_to_make_it_an_array(long long n) {
    vector<int> answer;

    long long updatedNum = n;

    while (updatedNum != 0)
    {
        answer.push_back(updatedNum % 10);
        updatedNum = updatedNum / 10;
    }
    
    return answer;
}

// 문자열 내 p와 y의 개수7
bool a07_Number_of_p_and_y_in_the_string(string s) {
    bool answer = true;
    
    //#include <unordered_map>
    enum a07_enum{
        p = 'p',
        y = 'y',
    };

    unordered_map<char, int> map_py;
    map_py[(char)a07_enum::p] = 0;
    map_py[(char)a07_enum::y] = 0;

    for (char item : s)
    {
        
        if (tolower(item) == (char)a07_enum::p)
        {
            map_py[(char)a07_enum::p]++;
        }
        else if (tolower(item) == (char)a07_enum::y)
        {
            map_py[(char)a07_enum::y]++;
        }
    }

    if (map_py[(char)a07_enum::p] == map_py[(char)a07_enum::y]) answer = true;
    else answer = false;

    return answer;
}


bool a08_dec_compare(char a, char b)
{
    return a > b;
}
// 정수 내림차 순으로 배치하기9
long long a08_Place_in_integer_descending_order(long long n) {
    long long answer = 0;
    
    string strN = to_string(n);
    //sort(strN.begin(), strN.end(), greater<char>());
    sort(strN.begin(), strN.end(), a08_dec_compare);
    
    answer = stoll(strN);

    return answer;
}

// 하샤드 수8
bool a09_Hashad_number(int x) {
    bool answer = true;

    int copiedX = x;

    int total = 0;
    while (copiedX != 0)
    {
        total += copiedX % 10;
        copiedX = copiedX / 10;
    }

    answer = (x % total) == 0 ? true : false;

    return answer;
}

// 문자열을 정수로 바꾸기
int a10_Replace_a_String_with_an_Integer(string s) {
    int answer = 0;

    if (s[0] == '-') 
    {
        answer = -stoi(s.substr(1));
    }
    else 
    {
        answer = stoi(s);
    }

    return answer;
}

//x만큼 간격이 있는 n개의 숫자
vector<long long> a11_n_numbers_spaced_by_x(int x, int n) {
    vector<long long> answer;

    int offset = 1;
    int end = n + offset;

    for (int i = 0 + offset; i < end; i++)
    {
        answer.push_back(x * i);
    }
    return answer;
}