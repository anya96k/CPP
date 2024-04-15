#include <iostream>
using namespace std;
int main(){
    int counter;
    char letter;
    cout<<"Enter any letter : ";
    cin>>letter;
    counter = letter;
    if (counter >= 65 && counter <=90)//here we use ascii value for uppercase
	{
        counter = counter + 32;//+32 use for upercase
        letter = counter;
        cout<<letter;
    }
    else if (counter >= 96 && counter <= 122)//here we use ascii value for lowercase
	{
        counter = counter - 32;//-32 use for upercase
        letter = counter;
        cout<<letter;
    }
    return 0;
}
