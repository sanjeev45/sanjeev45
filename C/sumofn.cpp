#include<iostream>
int sum(int n)
{
    if(n==0)
        return 0;
    return sum(n-1)+n;

}
int Isum(int n)
{
    int s=0,i;
    for (i=1;i<=n;i++)
    s=s+i;
}
int main()
{
    int r=sum(6);
    printf("%d",r);
return 0;
}