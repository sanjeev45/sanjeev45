#include<iostream>
using namespace std;

int sum(int n)
{
        return n*(n+1)/2;
    
}

int main()
{
    int c,d;
    cin>>c;
    d=sum(c);
    printf("%d ", d);
    return 0;
}