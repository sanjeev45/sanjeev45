#include<iostream>
using namespace std;
int main()
{
    int arr[20],position,i,n;
    cout<<"Enter Number of elements of the array\n"<<endl;
    cin>>n;
    cout<<"Enter the elements of the array"<<endl;
    for(i=0;i<n;i++)
    cin>>arr[i];

    cout<<"Enter the location of the element you want to delete"<<endl;
    cin>>position;

    if (position>=n+1)
    {
        cout<<"Deletion is not possible"<<endl;
    }
    else
    {
        for(i=position-1;i<n-1;i++)
        arr[i]=arr[i+1];

        cout<<"The Resultant array is\n"<<endl;
        for(i=0;i<n-1;i++)
        cout<<" "<<arr[i]<<",";
    }
    return 0;
}