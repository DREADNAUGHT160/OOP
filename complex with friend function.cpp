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
	 Complex operator +(Complex clone) //declaration of operator function with object as parameter
	 {
	 	Complex sum;
	 	sum.x=x+clone.x;
	    sum.y=y+clone.y;
	    return sum;
	   
	 }
	
	friend void PrintData(Complex clone2); //declaration of friend  function to print data
	
}; 

void PrintData(Complex clone2) //declaration of function to print data
	{
		if(clone2.y>=0)
		cout<<clone2.x<<"+"<<clone2.y<<"i"<<"\n";
		else
		cout<<clone2.x<<"-"<<clone2.y<<"i"<<"\n";
	}
	
int main() //declaration of main function
{
	Complex Com1,Com2,sum1;
	cout<<"enter the first complex number\n";
	Com1.EnterData();
	cout<<"enter the second complex number\n";
	Com2.EnterData();
	sum1 = Com1+Com2;
	PrintData(sum1);
	return 0;
}
