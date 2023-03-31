#include<stdio.h>
int function(para)
{
printf("%d", para);
}
int main()
{
    int i=200;
    printf("%d",i);
    function(i);
    return 0;
}