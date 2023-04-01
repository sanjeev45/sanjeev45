#include<iostream>
using namespace std;

int func(int n)
{
    static int y=0;
    if (n>0)
    {
        y++;
        return func(n-1)+y;
    
    }
    return 0;
}

int main()
{
    int x;
    cin>>x;
    printf("%d",func(x));
}