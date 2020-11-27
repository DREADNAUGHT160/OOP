#include<iostream>
#include<string>
using namespace std;

//declaration of class
class DataEnter
{
    string name;
	string branch;
	public:
		DataEnter(string x, string y) //creating a parameterized constructor
		{
			name =x;
			branch =y;
			
		}
	
		
		PrintData() //user defined function for printing the data
		{
			cout<<"your name is "<<name<<" and you being allocated to "<<branch<<".";
		}
		
};

int main()
{   
    string a;
    string b;
    cout<<"enter the name =";
    getline (cin, a);
    cout<<"enter the branch =";
    getline (cin, b)
    DataEnter abj;
	abj.DataEnter(a,b);
	abj.PrintData();
	return 0;
}
