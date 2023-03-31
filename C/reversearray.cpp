#include<iostream>
using namespace std;


void reverse(int arr[],int n)
{
    int start=0;
    int end=n-1;

    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

}
void printArray(int arr[],int n)
{
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[5]={11,12,13,14,15};

     
     cout<<"Before Reversing the Array:";
    printArray(arr,5);
     reverse(arr,5);
      cout<<endl<<"After Reversing the Array:";
    printArray(arr,5);
   

}