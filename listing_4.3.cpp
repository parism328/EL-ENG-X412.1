// instrl.cpp -- reading more than one string 
#include <iostream>

//the intent of this program is to read the user's name and fave dessert and display the 
// fave dessert and name togehter as information
int main ()
{
    using namespace std;
    const int ArSize = 20; 
    char name[ArSize];
    char dessert [ArSize];

    cout << "Enter your name:\n";
    cin >> name;
    cout << "Enter your favorite dessert: \n";
    cin >> dessert;
    cout << "I have some delicious  " << dessert; //the program showed the
    //dessert prompt then immediately moved on to display final line. 
    // this is because cin determines when you're done typing
    //a string at a weird time. 
    cout << "  for you, " << name << ".\n";
    return 0;
    
    }