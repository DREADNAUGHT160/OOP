#include<iostream>
using namespace std;

class A
{
	public:
		void show()
		{
			cout<<"hello";
		}
		
};


class B: virtual public A
{
	cout<<"how are you \n"<<endl;
};


class C: virtual public A
{
	cout<<"get lost \n"<<endl;
};


class D: public B,public C
{
	cout<<"byebye\n"<<endl;
};

int main()
{
	D obj;
	obj.show();
	return 0;
	
}
