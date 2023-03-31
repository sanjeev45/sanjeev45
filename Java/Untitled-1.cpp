#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	
	cin>>t;
	while(t--)
	{
	    int x,y,z;
        cin>>x>>y>>z;
	    
	    if (x<y && y<z)
	    {
	        cout<<y<<endl;
	    }
	    else if (x<y && y>z)
	    {
	        cout<<x<<endl;
	    }
	    else
	    {
	        cout<<z<<endl;
	    }
	 
	    
	}
	return 0;
}
