// strype2.cpp .. this assigns, adds, and appends

#include <iostream>
#include <string>   // make string class available
int main ()

{
    using namespace std;
    string s1 = "penguin";
    string s2, s3 ; 
    cout << " you can assign one string object to another: s2 = s1\n";
    s2 = s1;
    cout << "s1:  " << s1 << ", s2: " << s2 << endl;
    cout << "s2 = \"buzzard\"\n";
    cout << "you can concatenate strings: s3 = s1 +s2\n";
    s3 = s1 + s2; 
    cout << "s3: " << s3 << endl;
    cout << "you can append strings.\n";
    s1 += s2;
    cout << "s1 += s2 yields s1 = " << s1 <<endl;
    s2 += "for a day";

    cout << "s2 += \" for a day \" yields s2 = " << s2 << endl;

    return 0;
 
 }