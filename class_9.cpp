// Return value in Function
#include<iostream>
using namespace std;

int add(int a,int b)
{
	int c;
	c = a+b;
	return c;
}

int main()
{
	int num1,num2;
	cout<<"enter 1 number = ";
	cin>>num1;
	cout<<"enter 2 number = ";
	cin>>num2;
	int result = add(num1,num2);
	cout<<result;
}

