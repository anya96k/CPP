#include <iostream>
using namespace std;

int main(){
    float ftemp, ctemp;
    cout<<"Enter the Temperature in Fahrenheit :";
    cin>>ftemp;
    ctemp = (ftemp - 32.0) * 5/9;
    cout<<"Temperature in Celsius = "<<ctemp;
    return 0;
}
