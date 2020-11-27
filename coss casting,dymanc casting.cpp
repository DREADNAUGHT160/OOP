#include<iostream>
using namespace std;
class Base
{
	public:
		 virtual display()
		{
			cout<<"this is base class \n";
		}
};

class Base2
{
	public:
	     virtual void Bas2()
	    {
		 cout<<"this is base2 class\n";
	    }
};

class derived:public Base,public Base2
{
	print()
	{
		cout<<"derived class \n";
	}
};

int main()
{
	Base1 *bptr1=new derived;
	base2 *bptr=dynamic_cast<Base2 *>(bptr1);
	return 0;
}
