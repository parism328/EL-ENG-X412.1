//arrayone.cpp small arrays of integers 
#include <iostream>
int main ()
{
    using namespace std;
    int yams [3]; //creates array with three elements called yams
    // elements are numbered from 0 through 2 
    // this uses index values of 0 through 2 to assign values to the 3 individual elements 
    // each yam element is an int with all rights / privileges of an int type 
    yams[0] = 7; //assigns value to the first element 

    yams [1] = 8; // yams is the array, but yams[1] is just an int! 
    yams [2] =6;

    int yamcosts[3] = {20,30,5}; //create initialize array 
    // note: if c++ compiler or translator can't initialize this array, use static int yamcosts[3] instead of 
    // int yamcosts[3]
    // also, this line assigns values to the yamcost array 

    cout << "Total yams = ";
    cout << yams[0] + yams[1] + yams[2] << endl; 
    cout << "the package with " << yams[1] << "yams costs" ;
    cout << yamcosts [1] << "cents per yam.\n";
    int total = yams[0] * yamcosts[0] + yams[1] *yamcosts[1];
    total = total +yams[2]* yamcosts[2];
    cout << "the total yam expense is " << total << "cents.\n";

    cout << "\nSize of yams array = " << sizeof yams; // sizeof operator reuturns size in bytes of a type or data object 
    cout << "bytes.\n";
    cout << "size of one element = " << sizeof yams[0]; //NOTE: using sizeof operator with the array name gives the number of bytes in the whole array, but if you use sizeof with an array element you get the size in bytes
    cout << "bytes .\n";
    return 0;
            }

            //the end 
            //adding more stuff here 
            // testing again