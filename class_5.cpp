// if-else and else-if statement
#include<iostream>
using namespace std;

int main()
{
	int value1,value2;
	while(1)
	{
	 	cout<<"\n\nEnter 1 value = ";
		cin>>value1;
		cout<<"Enter 2 value = ";
		cin>>value2;

		if(value1>value2)
		{
			cout<<"value 1 is greater";
		}
		else if(value1<value2)
		{	
			cout<<"value 2 is greater";
		}
		else
		{
			cout<<"???????????????????";
		}
 }
 return 0;
}



