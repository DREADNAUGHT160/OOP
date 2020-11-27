#include<iostream>
using namespace std;
 class Base
 {
 	public:
 		int x;
 		virtual void show()=0; //pure virtual fn
 		
 };
 
 class Derived:public Base{
 	vois show()
	 {
	 	cout<<"abstract base class";
	  } 
 };
 
 int main()
 {
 	Base *bptr;
 	Derived d;
 	bptr=&d;
 	bptr->show();
 }
