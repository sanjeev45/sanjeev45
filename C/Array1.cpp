#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    arr[0]=5;
    cout<<sizeof(arr)/sizeof(arr[0]);
    return 0;

}