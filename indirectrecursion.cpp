#include<iostream>
using namespace std;
void funB(int n);
void funA(int n)
{
    if (n>0)
{
    printf("%d",n);
    funB(n-1);
}
}
void funB(int n)
{
    if (n>1)
    {
        printf("%d",n);
        funA(n/2);
    }
}

int main()
{
    int c;
    cin>>c;

    funA(c);
return 0;
}