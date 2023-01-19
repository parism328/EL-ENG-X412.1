// Listing 4.2 strings.cpp

//storing strings in an array 
#include <iostream>
#include <cstring> //for the strlen() function 
int main ()

{
    using namespace std;
    const int Size = 15;
    char name1[Size];               //empty array
    char name2[Size] = "C++owbody"; //initialized array..if you wanted to limit the array to only 3 elements 
    //you could do name2[3] = '\

    //NOTE: some implementations may require the static keyword
    //tp initialize the array name2

    cout << "Howdy! I am " << name2;
    cout << " What is your name? \n";
    cin >> name1;
    cout << "Well  " << name1 << " , your name has ";
    cout << strlen(name1) << "  letters and is stored \n";
    cout << "  in an array of  " << sizeof(name1) << " bytes.\n"; //the sizeof operator gives the size of the ENTIRE array, 15 bytes
    
    // the strlen() function gives only the variable characters, not the null character, so it 
    //returns a value of one less than total array length 
    cout << "YOur initial is " << name1[0] << ".\n";
    name2 [3] = '\0';        // set to null character 
    cout << "Here are the first 3 characters of my name: ";
    cout << name2 << endl;
    return 0;

}