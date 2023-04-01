#include<iostream>
using namespace std;
void main ( ) { 
int a[2][3] ={5,10,15, 20, 25, 30}; 
int (*p)[2][3]=&a;   
printf ("%d \ t ",*** ptr);  
printf("%d \t",***( ptr +1));  
printf("%d \t",**(*ptr +1)); 
printf("%d \ t ",*(*(*ptr+1)+2)); 
} 