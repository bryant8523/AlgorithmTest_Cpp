#include <math.h>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>


using namespace std;

// 23.¦���� Ȧ��
string a23_Evenand_odd_numbers(int num) {
    string answer = "";

    answer = (num % 2) == 0 ? "Even" : "Odd";

    return answer;
}

// 18.�ڸ��� ���ϱ�
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

// 16.����� ��
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

// 26.��� ���ϱ�
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

// 21.���� ������ �Ǻ�
long long a21_Determining_the_Integer_Square_Root(long long n) {
    long long answer = 0;

    //#include <math.h>

    double sqrtedNum = sqrt(n);

    // ���� �������
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

// 19.�ڿ��� ������ �迭�� �����
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

// 8. ���ڿ� �� p�� y�� ����
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
// 20.���� ������ ������ ��ġ�ϱ�
long long a20_Place_in_integer_descending_order(long long n) {
    long long answer = 0;

    string strN = to_string(n);
    //sort(strN.begin(), strN.end(), greater<char>());
    sort(strN.begin(), strN.end(), a20_dec_compare);

    answer = stoll(strN);

    return answer;
}

// 27. �ϻ��� ��
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

// 14.���ڿ��� ������ �ٲٱ�
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

// 30.x��ŭ ������ �ִ� n���� ����
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