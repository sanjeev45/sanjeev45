#include<iostream>
using namespace std;


void printArray(int array[], int size)
{
  cout<<endl<<"Array Started"<<endl;
for (int i=0 ; i < size ; i++)
{
  cout<<array[i]<<" ";
}
cout<<endl<<"Array Ended"<<endl;
}

int main()
{
  int third[15]={1,4,10};

printArray(third,15);


int fourth[10]={0};

printArray(fourth,10);


int fifth[5]={1,2};

printArray(fifth,5);
 
}