#include<iostream>
using namespace std;
float e(int x, int n)
{
    static double s;

    if (n==0)
    {
        return s;
    }
    s=1+x*s/n;

    return e(x,n-1);

}

int main()
{
    int y,z;
    cin>>y;
    cin>>z;

    printf("%lf \n", e(y,z));
return 0;
} 