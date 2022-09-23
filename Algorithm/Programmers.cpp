#include <math.h>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <unordered_set>

using namespace std;

// 1.포켓몬
int a01_Poketmon(vector<int> nums)
{
    int answer = 0;
    
    unordered_set<int> myPoketmon(nums.begin(), nums.end());
    
    answer = min((int)nums.size() / 2, (int)myPoketmon.size());

    return answer;
}

// 2.2016년
string a02_Year_of_2016(int a, int b)
{
    string answer = "";

    const int months[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    const int yun_months[] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    const string days[] = { "SUN","MON","TUE","WED","THU","FRI","SAT" };

    int total_Day = 0;
    int processed_a = a - 1;
    for (int i = 0; i < processed_a; i++)
    {
        total_Day = total_Day + yun_months[i];
    }

    total_Day = (total_Day + 4) + b;

    int processed_day = total_Day % 7;

    answer = days[processed_day];
    //01/01/16 is Friday
    //what day on a/b/16?

    // SUN,MON,TUE,WED,THU,FRI,SAT

    // (16 year is yun year)

    return answer;
}

// 3.가운데 글자 가져오기
string a03_Get_middle_letter(string s) {
    string answer = "";

    bool isOdd = s.size() % 2;
    int s_center = s.size() / 2;

    if (isOdd)
    {
        answer.push_back(s[s_center]);
    }
    else
    {
        answer.append(s.substr(s_center - 1, 2));
    }
    
    return answer;
}

// 04.같은 숫자는 싫어
vector<int> a04_hate_same_number(vector<int> arr)
{
    /*vector<int> answer;

    answer.push_back(arr[0]);
    int temp = arr[0];

    for (int item : arr)
    {
        if (temp != item)
        {
            answer.push_back(item);
            temp = item;
        }
    }

    return answer;*/



    // 효율성 및 시간 복잡도 압승 (issue에 기록 필요)
    vector<int> answer;
    auto value = unique(arr.begin(), arr.end());
    arr.erase(value, arr.end());

    answer = arr;
    return answer;
}


// 23.짝수와 홀수
string a23_Evenand_odd_numbers(int num) {
    string answer = "";

    answer = (num % 2) == 0 ? "Even" : "Odd";

    return answer;
}

// 18.자릿수 더하기
int a18_Add_digits(int n)
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

// 16.약수의 합
int a16_the_sum_of_the_divisor(int n)
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

// 26.평균 구하기
double a26_Obtaining_the_Mean(vector<int> arr)
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

// 21.정수 제곱근 판별
long long a21_Determining_the_Integer_Square_Root(long long n) {
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

// 19.자연수 뒤집어 배열로 만들기
vector<int> a19_Turn_the_natural_number_upside_down_to_make_it_an_array(long long n) {
    vector<int> answer;

    long long updatedNum = n;

    while (updatedNum != 0)
    {
        answer.push_back(updatedNum % 10);
        updatedNum = updatedNum / 10;
    }

    return answer;
}

// 8. 문자열 내 p와 y의 개수
bool a08_Number_of_p_and_y_in_the_string(string s) {
    bool answer = true;

    //#include <unordered_map>
    enum a08_enum {
        p = 'p',
        y = 'y',
    };

    unordered_map<char, int> map_py;
    map_py[(char)a08_enum::p] = 0;
    map_py[(char)a08_enum::y] = 0;

    for (char item : s)
    {

        if (tolower(item) == (char)a08_enum::p)
        {
            map_py[(char)a08_enum::p]++;
        }
        else if (tolower(item) == (char)a08_enum::y)
        {
            map_py[(char)a08_enum::y]++;
        }
    }

    if (map_py[(char)a08_enum::p] == map_py[(char)a08_enum::y]) answer = true;
    else answer = false;

    return answer;
}


bool a20_dec_compare(char a, char b)
{
    return a > b;
}
// 20.정수 내림차 순으로 배치하기
long long a20_Place_in_integer_descending_order(long long n) {
    long long answer = 0;

    string strN = to_string(n);
    //sort(strN.begin(), strN.end(), greater<char>());
    sort(strN.begin(), strN.end(), a20_dec_compare);

    answer = stoll(strN);

    return answer;
}

// 27. 하샤드 수
bool a27_Hashad_number(int x) {
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

// 14.문자열을 정수로 바꾸기
int a14_Replace_a_String_with_an_Integer(string s) {
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

// 30.x만큼 간격이 있는 n개의 숫자
vector<long long> a30_n_numbers_spaced_by_x(int x, int n) {
    vector<long long> answer;

    int offset = 1;
    int end = n + offset;

    for (int i = 0 + offset; i < end; i++)
    {
        answer.push_back(x * i);
    }
    return answer;
}