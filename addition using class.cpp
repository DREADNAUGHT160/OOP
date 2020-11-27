#include<iostream>
using namespace std;


class operators
{
int a,b,s;
public:
void get_values()
{
	cout<<"enter two numbers to sum :";
	cin>>a>>b;
}

void add()
{
	s = a+b;
	cout<<"sum of "<<a<<" "<<"and "<<b<<" "<<"is"<<" "<<s<<".";
}
};


int main()
{
	operators object;
	object.get_values();
	object.add();
	return 0;
}
