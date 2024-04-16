#include <iostream>
using namespace std;
 
class Integer {
    private:
        int value;
    public:
        Integer(int v) : value(v) { }
        Integer operator++();
        Integer operator++(int);
        int getValue() { 
            return value;
        }
};
 

Integer Integer::operator++()//HERE POST INC 2++
{
    value++;
    return *this; //DIFFERENTIATE LCAL AND MEM VARI WITH SAME NAME
}
 

Integer Integer::operator++(int)//PRE INC //++2
{
    const Integer old(*this);
    ++(*this);
    return old;
}
 
int main()
{
    Integer i(10);
 
    cout << "Post Increment Operator" << endl;
    cout << "Integer++ : " << (i++).getValue() << endl;
    cout << "Pre Increment Operator" << endl;
    cout << "++Integer : " << (++i).getValue() << endl;
}
