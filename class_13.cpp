// pass Structure to function
#include<iostream>
using namespace std;

struct book
{
	int roll;
};

void deep(struct book a)
{
	cout<<"Your roll number is = "<<a.roll;
}

int  main()
{
	book a;
	a.roll = 20;
	deep(a);
	return 0;
}

