// Inheritance
#include<iostream>
using namespace std;
class book
{
	public:
		int num1 = 12;
		int num2 = 20;
};
class pen:book
{
	public:
		int result = num1+num2;
		void sum()
			{
				cout<<"Total sum is = "<<result;
			}
};
int main()
{
	pen p;
	p.sum();
	return 0;
}
