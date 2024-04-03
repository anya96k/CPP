#include<iostream>
using namespace std;
class Box{
	int height;
	float width;
	int length;
	
	public: Box(){
		
		height= 2;
		width= 2;
		length= 2;
		
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
	b1.display();
	return 0;
}

