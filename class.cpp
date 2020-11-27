#include<iostream>
using namespace std;
class evin
{
	int x,y,s;
	public:
	void getdata()
	{

		cout<<"enter the first number";
		cin>>x;
		cout<<"enter the second number";
		cin>>y;
		
	}
	
	void add()
	{
		s=x+y;
		cout<<s;
	}
};


int main()
{
	evin hello;
	hello.getdata();
	hello.add();
	return 0;
}
