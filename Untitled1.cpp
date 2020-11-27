#include<iostream>
using namespace std;
int add(int x=100,int y=200)
{
	int z;
    z=x+y;
	return z;
}
int main()
{
	int a,b,s;
	cout<<"enter two numbers to sum "<<"=";
	cin>>a>>b;
	s=add(a,b);
	cout<<"the sum of"<<" "<<a<<" "<<"is"<<" "<<s;
	return 0;
}

