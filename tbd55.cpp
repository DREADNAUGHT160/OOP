#include<iostream>
using namespace std;

class base() //base class
{
	public:
		void display()
		{
			cout<<"display Fn in base\n";
		}
		void show()
		{
			cout<<"show Fn in base\n";
		}
};

class Derived:public Base //child class of base()
{
	public:
		void display()
		{
			cout<<"Display fn in child\n";
		}
};


int main()
{
	Base B; //object B is declared in the base class
	
	
	Derived D; //object D is declared in the child class
	
	 
	Base *bptr; //pointer declaring in the base class
	
	
	bptr=&B;  //giving base class object to base class pointer
	bptr->display();
	bptr->show();
	
	bptr=&D; //giving derived class object to base class pointer
	bptr->display();
	bptr->show();
		
}
