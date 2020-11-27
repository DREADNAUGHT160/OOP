#include<iostream>
using namespace std;
int main()
{
	float a,b,c,d;
	cin>>a>>b;
	try
	{
	   if(b==0)
	    {
		  throw b;
	    }
	    else
	    {
	    	c = a/b;
	        cout<<c<<endl;

		}

}

catch(float x)
{
	cout<<x<<" "<<" is invalid \n";
}
    
	  
	d =a*b;
	cout<<d;
	return 0;
}

