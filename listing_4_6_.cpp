// listing 4.6, numstr.cpp
//following number input with line input 

#include <iostream>
int main()
{
    using namespace std;
    cout << "what year was your house built?\n"; 
    int year;
    cin >> year;
    cin.get(); // or cin.get(ch);
    
    cout << "what is its street addresss? \n";
    char address[80];
    cin.getline(address, 80); //this is where you use getline
    cout << "year built:" << year << endl;
    cout << "Address:" << address << endl;
 
   cout << "Done!\n";

   return 0;

}