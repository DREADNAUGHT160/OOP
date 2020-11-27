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
			cout<<x<<"\n";
			switch(y)
			{
				case 1:
					cout<<x<<"\n";
					cout<<"S1"<<"\n"<<"class no:"<<"114";
					break;
				case 2:
					cout<<x<<"\n";
				    cout<<"S2"<<"\n"<<"class no:"<<"116";
					break;
				case 3:
					cout<<x<<"\n";
					cout<<"S3"<<"\n"<<"class no:"<<"123";
					break;
				case 4:
					cout<<x<<"\n";
				    cout<<"S4"<<"\n"<<"class no:"<<"146";
					break;
				case 5:
					cout<<x<<"\n";
				    cout<<"S5"<<"\n"<<"class no:"<<"155";
					break;
				case 6:
					cout<<x<<"\n";
				    cout<<"S6"<<"\n"<<"class no:"<<"216";
					break;
				case 7:
					cout<<x<<"\n";
				    cout<<"S7"<<"\n"<<"class no:"<<"226";
					break;
				case 8:
					cout<<x<<"\n";
				    cout<<"S8"<<"\n"<<"class no:"<<"227";
					break;				
			}
		}
	
	
		MC(char a[10],int b)
		{
			cout<<"mechatronics block \n";
			allocation(a,b);
		}
		EEE(char a[10],int b)
		{
			cout<<"electrical and electronics engineering block \n";
			allocation(a[10],b);
		}
		ECE(char a[10],int b)
		{
			cout<<"electronics and communication engineering block\n";
			allocation(a[10],b);
		}
		CS(char a[10],int b)
		{
			cout<<"computer science engineering block \n";
			allocation(a[10],b);
		}
		ME(char a[10],int b)
		{
			cout<<"mechanical engineering block \n";
			allocation(a[10],b);
		}
		CE(char a[10],int b)
		{
			cout<<"civil engineering block \n";
			allocation(a[10],b);
		}
};

int main()
{
	branch obj;
	obj.MC('evin',5);
	
}

