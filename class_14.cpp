// Class
#include<iostream>
using namespace std;

class book
{
	public:
		int roll = 12;
		
	void deep()
    {
		cout<<roll;
    }
};

int main()
{
	book p;
	p.deep();
}
