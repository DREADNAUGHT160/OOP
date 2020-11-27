#include<iostream>
using namespace std;

void check(int x)
{
	if(x==1)
	{
		throw 1;
	}
	else if(x==2)
	{
		throw "A";
	}
	else if(x==3)
	{
		throw 3.14;
	}
	
	
	
	
}

int main()
{
	int a;
	cout<<"enter a number: ";
	cin>>a;
	try
	{
		check(a);
	}
	
	catch(int y)
	{
		cout<<"invalid integer"<<endl;
	}
	catch(char y)
	{
		cout<<"invalid character"<<endl;
	}
	catch(double y)
	{
		cout<<"invalid double"<<endl;
	}
	
	return 0;
	
}
