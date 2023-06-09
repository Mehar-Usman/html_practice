#include<iostream>
using namespace std;
int main()
{
	int NUM_EMPLOYERS[6];
	

	cout<<"enter the hours worked by"
	
	<<NUM_EMPLOYERS<<"employees:";
	for(int i=0;i<6;i++)
	{
		cin>>NUM_EMPLOYERS[i];
	}
	cout<<"\nThe hours you entered are: ";
	for(int i=0;i<6;i++)
	{
		cout<<NUM_EMPLOYERS[i]<<endl;
	}
	
	
	return 0;
}
