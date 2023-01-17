// FILENAME:   hello_1.cpp 
// PROGRAMMER: Paris Myers
// DATE:       1 / 17 /2023 
// COMPILER:  Visual Studio COde
// REQUIRED:   hello_1.cpp
// PURPOSE:
// The goal of this program is to demonstrate a simple C++ program that allows the user to display their 
// name as part of the program output. 
// To implement this, use the integer type char, cin and cout, and the << and >> operators.
 
#include <iostream>         // Enables the use of input and output (<< and >>) operators.
#include <cstring>          // Contains definitions for strings 
int main ()
{
   using namespace std;        // Eliminates need for std as in std::cout
   const int Size = 15;        // This creates a 15 byte array
   char name1[Size];            //Empty array 

   cout << "Hi there! What is your name?\n";  //Prints in the terminal.
   cin >> name1; // This allows the user to enter their name in the terminal. 
   cout << "Hello  " << name1 << " ,nice to meet you!\n"; //Prints in the terminal. 
	
    return 0;
} 