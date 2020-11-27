#include<iostream>
using namespace std;
class compare
{
	public:
	char bigger(char x,char y)
    {
 	    if(x>y)
        {
		    return x;
	    }
	    else
	    {
		    return y;
	    }
    }

    int bigger(int x,int y)
    {
	    if(x>y)
	    {
		    return x;
	    }
	    else
	    {
		    return y;
	    }
    }
    float bigger(float x,float y)
    {
    	if(x>y)
    	{
    		return x;
		}
		else
		{
			return y;
		}
	}
	
};




int main()
{
	int a,b,c;
	char d,f,g;
	float h,i,j;
	cout<<"enter the numbers to compare : ";
	cin>>a>>b;
	cout<<"enter the characters to compare :";
	cin>>d>>f;
	cout<<"enter the decimals to compare : ";
	cin>>h>>i;
	compare value1,value2,value3;
	c=value1.bigger(a,b);
	cout<<"the biggest number is "<<c<<endl;
	g=value2.bigger(d,f);
	cout<<"the biggest character is "<<g<<endl;
	j=value3.bigger(h,i);
	cout<<"the biggest character is "<<j<<endl; 
	
	return 0;
}
