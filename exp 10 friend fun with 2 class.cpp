#include<iostream>
using namespace std;
class B;
class A
{
	
    int x;  
    public:  
    void setdata(int i)  
    {  
        x=i;  
    }  
    friend void min(A &,B &); 
};
class B
{
	int y;
	public:
		void setdata(int i)
		{
		y=i;	
		}
		friend void min(A &,B &);
};
void min(A & p,B &q)  
{  
    if(p.x < q.y)  
      cout << p.x << endl;  
    else if(p.x>q.y)
		cout << q.y << endl;  
	else
		cout<<p.x<<" & "<<q.y<< " are same";	
}  
   int main()  
{  
   A a;  
   B b;  
   a.setdata(1110);  
   b.setdata(1110);  
   min(a,b);  
    return 0;  
 }
