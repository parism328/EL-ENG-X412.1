// strtype1.cpp -- using the C++ string class 
#include <iostream>
#include <string> //make string class available 
int main ()
{
    using namespace std;
    char charr1 [20];  //creates an empty array 
    char charr2 [20] = "jaguar"; //creates an initizlied array 
    string str1;    //makes empty string object
    string str2 = "panther"; //creates initialized string

    cout << "ENter a kind of feline: ";
    cin >> charr1;  // you enter this 
    cout << "Enter another kind of feline: ";
    cin >> str1;  // use cin for input 
    cout << "HEre are some felines:\n";
    cout << charr1 << " " << charr2 << " "
        << str1 << "  " << str2 // use cout for output 
        << endl;

    cout << "the third letter in "<< charr2 << "is"
    << charr2 [2] << endl;

    cout << "the third letter in " << str2 << " is "
    << str2[2] << endl;  //use array notation
    // cout can be used to display a string object 

    // you can use cin to store keyboard input in a string objet
    // you can initialize a string object to a c-style string
    // you can use array notion to access individual characters stored in a string object

    return 0; 
}