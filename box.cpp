#include<iostream>
using namespace std;
class Box
{
	int height;
	float width;
	int length;
	public: Box()
	{
	height=2;
	width=4;
	length=10;
	}
	 Box(int a)
	{
	height=width=length=a;
	}
void display()
{
	cout<<"HEIGHT:"<<height<<endl;
	cout<<"WIDTH:"<<width<<endl;
	cout<<"LENGTH:"<<length<<endl;
}
};
int main()
{
	Box b1;
	Box b2(4);
	b2.display();
	b1.display();
	return 0;
}
