#include<iostream>
using namespace std;

bool findkey(int arr[], int size, int key){

    for(int i=0;i<size;i++)
    {
        if (arr[i]==key)
        {
            return 1;
        }


    }
    return 0;

}

int main()
{
    int arr[10]={1,2,4,5,3,11,33,56,79,44};
    
    int key;
    cout<<"Enter the key to be searched:";
    cin>>key;

    bool found=findkey(arr,10,key);


    if (found)
    {
        cout<<"Key is found"<<endl;
    }
    else{
        cout<<"Key is not present"<<endl;
    }


}