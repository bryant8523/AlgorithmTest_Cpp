#include<string>
#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

int a01_Odd_number_only(vector<int> arr) {
    int total = 0;
   
    int cnt= arr.capacity();
    for (int i = 0; i < cnt; i++)
    {
        if (arr[i] % 2 != 0)
        {
            total += arr[i];
        }
    }

    return total;
}

int a02_Obtain_the_average_value(vector<int> arr) {
    double total = 0;
    double avg = 0;

    for (int item : arr)
    {
        total += item;
    }
    
    // ���� : capacity()�� ������ 2�辿 �þ
    // ����, size()�� ����� ��
    avg = round(total / arr.size());


    return avg;
}