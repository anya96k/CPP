#include <iostream>
using namespace std;

class Check
{
    private:
       int i;
    public:
       Check(): i(11) {  }
       void operator ++() 
          { ++i; }
       
         
       void operator --() 
          { --i; }
          void Display() 
          { cout << "i=" << i << endl; }
      
};

int main()
{
    Check obj;

 
    obj.Display();

   --obj; 
  
    obj.Display();
    ++obj; 
  
    obj.Display();

    return 0;
}
