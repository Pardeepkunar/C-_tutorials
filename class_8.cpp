// passing parameter in Function
#include<iostream>
using namespace std;

void add(int a,int b)
{
	cout<<"Total sum is = "<<a+b<<endl;
}

int main()
{
	int num1,num2;
	cout<<"enter 1 number = ";
	cin>>num1;
	cout<<"enter 2 number = ";
	cin>>num2;
	
	add(num1,num2);
}

