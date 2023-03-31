#include<iostream>
using namespace std;

void fun(int n)
{
    int i=1;
    while(i<=n)
    {
        
        printf("%d",i);
        i++;
    }
}

int main()
{
    int c;
    cin>>c;

    fun(c);
    return 0;
}