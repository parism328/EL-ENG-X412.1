// Listing 3.10 arith cpp
#include <iostream>
int main ()
{
    using namespace std;
    float hats, heads;
    cout.setf (ios_base:: fixed, ios_base :: floatfield); // fixed-point
    cout << "Engter a number: ";
    cin >> hats;  //this lets you enter the number for hats! 
    cout << "Enter another number: ";
    cin >> heads ; // this lets you enter the number for heads! 
    cout << "hats = " << hats << "; heads = " << heads <<endl;
    cout << "hats+heads = " << hats + heads << endl;
    cout << "hats - heads = " << hats - heads <<endl;
    cout << "hats * heads " << hats* heads << endl;
    cout << "hats/heads = " << hats/heads << endl;
    return 0;
}
