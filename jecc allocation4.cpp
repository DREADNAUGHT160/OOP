#include<iostream>
using namespace std;

class jecc
{
	public:
		jecc()
		{
		cout<<"jyothi engineering college \n";
	    }
};



class branch: public jecc
{
	public:
		allocation(char x[10],int y)
		{
			cout<<"Name:"<<x<<"\n";
			switch(y)
			{
				case 1:
					
					cout<<"S1"<<"\n"<<"class no:"<<"114";
					break;
				case 2:
					
				    cout<<"S2"<<"\n"<<"class no:"<<"116";
					break;
				case 3:
					
					cout<<"S3"<<"\n"<<"class no:"<<"123";
					break;
				case 4:
					
				    cout<<"S4"<<"\n"<<"class no:"<<"146";
					break;
				case 5:
					
				    cout<<"S5"<<"\n"<<"class no:"<<"155";
					break;
				case 6:
					
				    cout<<"S6"<<"\n"<<"class no:"<<"216";
					break;
				case 7:
					
				    cout<<"S7"<<"\n"<<"class no:"<<"226";
					break;
				case 8:
					
				    cout<<"S8"<<"\n"<<"class no:"<<"227";
					break;				
			}
		}
	
	
		MC(char a[10],int b,int year)
		{
			cout<<"your email id -"<<a<<".mr"<<year-2000<<"@jecc.ac.in \n";
			cout<<"course duration:"<<year<<"to"<<year + 4<<"\n";
			cout<<"mechatronics block \n";
			allocation(a,b);
			
		}
		EEE(char a[10],int b,int year)
		{
			cout<<"your email id -"<<a<<".eee"<<year-2000<<"@jecc.ac.in \n";
			cout<<"course duration:"<<year<<"to"<<year + 4<<"\n";
			cout<<"electrical and electronics engineering block \n";
			allocation(a,b);
		}
		ECE(char a[10],int b,int year)
		{
			cout<<"your email id -"<<a<<".ece"<<year-2000<<"@jecc.ac.in \n";
			cout<<"course duration:"<<year<<"to"<<year + 4<<"\n";
			cout<<"electronics and communication engineering block\n";
			allocation(a,b);
		}
		CS(char a[10],int b,int year)
		{
			cout<<"your email id -"<<a<<".cs"<<year-2000<<"@jecc.ac.in \n";
			cout<<"course duration:"<<year<<"to"<<year + 4<<"\n";
			cout<<"computer science engineering block \n";
			allocation(a,b);
		}
		ME(char a[10],int b,int year)
		{
			cout<<"your email id -"<<a<<".me"<<year-2000<<"@jecc.ac.in \n";
			cout<<"course duration:"<<year<<"to"<<year + 4<<"\n";
			cout<<"mechanical engineering block \n";
			allocation(a,b);
		}
		CE(char a[10],int b,int year)
		{
			cout<<"your email id -"<<a<<".ce"<<year-2000<<"@jecc.ac.in \n";
			cout<<"course duration:"<<year<<"to"<<year + 4<<"\n";
			cout<<"civil engineering block \n";
			allocation(a,b);
		}
};

int main()
{
	int h;
	int o;
	//char p[10];
	char g[10];
	cout<<"enter the name. \n =";
	cin>>g; 
	//cout<<"enter the branch:(eg.MC,ME,etc.). \n";
	//cin>>p[10];
	cout<<"enter the sem. \n";
	cin>>h;
	cout<<"enter the year.\n";
	cin>>o;
	branch obj;
	obj.MC(g,h,o);
	cout<<"\n you been allocated";
	return 0;
}

