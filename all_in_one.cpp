#include<iostream>
using namespace std;

class AllinOne //declaration of classs
{
	int num1; //declaration of variables
	int num2;
	int sum;
	int x;
	int y;
	
	public:
	AllinOne() //declaration of construct
	{
		num1=20;
		num2=20;
	}
	
	AllinOne(int x,int y, int num1,int num2) //decleration of parameter construct
	{
		this -> x=x;
		this -> y=y;
		this -> num1 = num1;
		this -> num2 = num2;
		sum = x+y;
	
	}
	~AllinOne()
	{
		cout<<"erasing datas in function AllinOne"<<"\n";
		x=0;
		y=0;
		num1=0;
		num2=0;
  
	}
	
	 void PrintData();
};
void AllinOne::PrintData()
	{
		cout<<"a ="<<num1<<"\n";
		cout<<"b ="<<num2<<"\n";
		cout<<"sum of "<<x<<" and "<<y<<" "<<"is "<<sum<<"\n";
	}
	
int main()
{
	AllinOne obj();
	AllinOne obj1(20,20,30,30);
	obj1.PrintData();
	AllinOne obj2 = obj1;
	obj2.PrintData();
	return 0;
}
