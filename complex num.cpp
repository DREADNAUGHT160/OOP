#include<iostream>
using namespace std;

class Complex //complex class declaration
{
	int x,y; //variable declaration
	public:
		
	 void EnterData() //declaration of function to input data
	{
		cout<<"enter the first real and complex number:\n";
		cin>>x>>y;
	}
	 void sum(Complex clone)
	 {
	 	x=x+clone.x;
	    y=y+clone.y;
	   
	 }
	
	void PrintData() //declaration of function to print data
	{
		if(y>=0)
		cout<<x<<"+"<<y<<"i"<<"\n";
		else
		cout<<x<<"-"<<y<<"i"<<"\n";
	}
};

int main()
{
	Complex Com1,Com2,sum;
	cout<<"enter the first complex number\n";
	Com1.EnterData();
	cout<<"enter the second complex number\n";
	Com2.EnterData();
	Com1.sum(Com2);
	Com1.PrintData();
	return 0;
}
