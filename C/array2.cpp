#include<iostream>
using namespace std;

void printArray(int arr[], int n)
{
    
              cout<<"Even element in the array is:"<<"[";
    for (int i=0;i<n;i++)
    {
        if (i%2==0)
        {
      
            cout<<arr[i]<<" ";
        }
       
       
    }
    cout<<"]";
}

int main()
{
    int even[8]={1,2,4,5,6,11,44};

    printArray(even,8);
}