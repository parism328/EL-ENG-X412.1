// instr2.cpp -- reading more than one word with getline 

#include <iostream>
int main ()
{
    using namespace std;
    const int ArSize = 20; //const means that the interger is a constant and 
    //tells the compiler not to let the programmer modify it

    char name[ArSize]; 
    char dessert[ArSize];

    cout << "Enter your name: \n";
    cin.getline(name, ArSize); //reads through newline . but umlike 4.3 this
    // getline function makes it so the user can now actually read
    // the dessert output 
    cout << "Enter your fave dessert:\n";
    cin.getline(dessert, ArSize);
    cout << "I have some delicious  " << dessert;
    cout << " for you,  " << name << ".\n";
    return 0;

}