#include<iostream>
using namespace std;

class AddressBook
{
	char name[50];
	double number;
	public:
		EnterData()
		{
			cout<<"\n"<<"Enter the name: ";
			cin.getline(name,50);
			cout<<"\n"<<"Enter the  phone no: ";
			cin>>number;
		}
		
	     void PrintData()
	    {
	    	cout<<"Name :"<<name<<"\n"<<"Phone Number :"<<number;
		}
		
    
};

int main()
{
	AddressBook *ptr= new AddressBook[10];
	AddressBook *ptr1=ptr;
	
	
	for(int i=0;i<10;i++)
	{
		(*ptr).EnterData();
		ptr++;
	}
	for(int i=0;i<10;i++)
	{
		(*ptr1).PrintData();
		ptr1++;
	}
	return 0;
}
