#include<iostream>
using namespace std;
int sum(int n)
{
    if (n==0)
    return 0;
    else
    {
        return sum(n-1)+n;
    }
}

int main()
{
    int x;
    cin>>x;
    int q=sum(x);
    printf("%d", q);
return 0;
}