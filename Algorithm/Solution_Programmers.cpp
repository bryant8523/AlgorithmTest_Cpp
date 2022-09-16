#include <math.h>
#include <string>
#include <vector>

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

