#include<iostream>
using namespace std;
class StudentDetail //class declaration
{
	char name[50];
	int no;
	char branch[50];
	int sem;
	int rollno;
	
	public: //to make the variable public
		
	void GetData() //user defined function for getting the data
	{
		cout<<"enter name of the student --";
		cin>>name;
		cout<<"enter contact number --";
		cin>>no;
		cout<<"enter branch --";
		cin>>branch;
		cout<<"enter the semester --";
		cin>>sem;
	}
	
	void printdata() const //user defined function for printing the data
	{
		cout<<rollno<<" "<<name<<" "<<"in"<<" "<<branch<<" "<<"s"<<sem<<" "<<"contact no. is "<<" "<<no<<".";
	}
	
	
};

int main()
{
  
	int strength=0;
	int i;
	cout<<"enter the strength for the class";
	cin>>strength;
	StudentDetail student;
	Student *ptr;
	student *ptr=new student[strength];
	
	for(i=0;i=strength;i++)
	{
		*ptr.GetData();
		
	}
}
