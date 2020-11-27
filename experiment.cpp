#include<iostream>
using namespace std;

int main()
{
	int i;
	for(i=1;i<11;i++)
	{
		for(int k=i;k<11-i;k++)
		{
			cout<<" ";
		}
		for(int j=1;j<i;j++)
		{
			cout<<" ";
		cout<<"hello ";
	    }
	    cout<<"\n";
	}
	return 0;
}
