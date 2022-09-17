#include <math.h>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>


using namespace std;

int main()
{

}

string a01_Evenand_odd_numbers(int num) {
    string answer = "";

    answer = (num % 2) == 0 ? "Even" : "Odd";
    
    return answer;
}

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

int a03_the_sum_of_the_mineral_water(int n)
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
long long a08_Place_in_integer_descending_order(long long n) {
    long long answer = 0;
    
    string strN = to_string(n);
    //sort(strN.begin(), strN.end(), greater<char>());
    sort(strN.begin(), strN.end(), a08_dec_compare);
    
    answer = stoll(strN);

    return answer;
}

