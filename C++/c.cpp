#include<iostream>
using namespace std;


void fun(int n)
{
    if(n>0)
    {
cout<<("%d",n)<<endl;
    fun(n-1);

}
}

int main()
{
    int x;
    cin>>x;
    fun(x);
    return 0;

}