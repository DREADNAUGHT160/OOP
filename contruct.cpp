#include<iostream>
using namespace std;

class Addition
{
	int a;
	int b;
	int c;
	public:
		Addition()
		{
			a=10;
			b =11;
			c=a+b;
		}
		printdata()
		{
			cout<<a<<"+"<<b<<"="<<c;
		}
		
};

int main()
{
	Addition obj1;
	obj1.printdata();
	
}
