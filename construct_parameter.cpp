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
    DataEnter sbj1("evin b thaikkattil","mechatronics");
    sbj1.PrintData();
    return 0;
}
    
