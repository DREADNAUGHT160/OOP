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
	 Complex operator +(Complex clone)
	 {
	 	Complex sum;
	 	sum.x=x+clone.x;
	    sum.y=y+clone.y;
	    return sum;
	   
	 }
	
	void PrintData() //declaration of function to print data
	{
		if(y>=0)
		cout<<x<<"+"<<y<<"i"<<"\n";
		else
		cout<<x<<"-"<<y<<"i"<<"\n";
	}
};

int main() //declaration of main function
{
	Complex Com1,Com2,sum1;
	cout<<"enter the first complex number\n";
	Com1.EnterData();
	cout<<"enter the second complex number\n";
	Com2.EnterData();
	sum1 = Com1+Com2;
	sum1.PrintData();
	return 0;
}
