#include<iostream>
using namespace std;

class test
{
	int x;
	int y;
	
	public:
		
		test()
		{
			x=10;
			y=6;
		}
		
		void operator -()
		{
			x=-x;
			y=-y;	
		}
		
		 void display()
		{
			cout<<"x="<<x<<" y="<<y;
		}
};

int main()
{
	test obj1;
	obj1.display();
	-obj1;
	obj1.display();
	return 0;
}
