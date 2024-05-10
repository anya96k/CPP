#include <iostream>
using namespace std;

class Base
{
	public:
		int base_var;
		virtual void display()
		{
			cout<<"This is base class"<<endl;
		}
};
class Derived : public Base
{
	public:
		int deived_var;
		void display()
		{
			cout<<"This is derived class"<<endl;	
		}
	
};
int main()
{
	Base b;
	Derived d;
	
	Base *ptr_b;
	ptr_b=&d;
	
	ptr_b->display();
	return 0;
}
