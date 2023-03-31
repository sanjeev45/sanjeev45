#include<iostream>
using namespace std;
void func(int n)
{
    if (n>0)
    {
        printf("%d",n);
        func(n-1);
        func(n-1);

    }
}

int main()
{
    int x;
    cin>>x;
    func(x);
return 0;    
}