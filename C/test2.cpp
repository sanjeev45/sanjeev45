#include<iostream>
using namespace std;
int main()

{
    int i=0;
int arr[10]={0,1,2,5};
cout<<"address of first memory block: "<<&arr[--i]<<endl;
cout<<"Size of array "<<arr[i--]<<endl;
cout<<*arr<<endl;

return 0;
}