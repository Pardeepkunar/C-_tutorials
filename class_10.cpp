// Function Overloading
#include<iostream>
using namespace std;

void add(int a,int b)
{
	cout<<"Total sum is = "<<(a+b)<<endl;
}

void add(float a,float b)
{
	cout<<"Total sum is = "<<(a+b)<<endl;
}

int main()
{
	int num1=10,num2=20;
	add(num1,num2);
 	float num3=1.9,num4=2.4;
 	add(num3,num4);
}

