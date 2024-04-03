#include<iostream>
using namespace std;
class Student
{
	int age;
	int roll_no;
	string name;
	public: Student()
	{
	age=04;
	roll_no=46;
	name="ANIKET";
	}
void printdata()
{
	cout<<"AGE:"<<age<<endl;
	cout<<"ROLL NO:"<<roll_no<<endl;
	cout<<"NAME:"<<name<<endl;}
void getdata()
{
	cout<<"ENTER THE AGE:"<<endl;
	cin>>age;
	cout<<"ENTER THE ROLL NO:"<<endl;
	cin>>roll_no;
	cout<<"ENTER THE NAME:"<<endl;
	cin>>name;	
}
~Student(){cout<<"DESTRUCTOR EXECUTED"<<endl;}
};
int main()
{
	Student s1;
	Student s2;
	s1.printdata();
	s2.getdata();
	return 0;
}
