#include<iostream>
using namespace std;

void fun1(int n)
{
    

    if (n>0)
    {
         fun1(n-1);
        printf("%d",n);
    }
   
}

int main()
{
    int n;
    cout<<"Enter the value of n:";
    cin>>n;

    fun1(n);
}