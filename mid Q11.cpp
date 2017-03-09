
#include <iostream>         // input output

using namespace std;

int main ()                  // main function
{
    int a,b;                 //  integer variable

    cout<< "Please enter a number: "<<endl;       //outputs the number for user

    cin>> a;                         // Takes user input

    cout<< "\n";

    cout<< "Please enter a number again: "<<endl;   //outputs the second number

    cin>> b;                           // Takes user input

    cout<< "\n";

    if (a==b)                              //  if a and b are equal
    {
        cout<< "\n" <<a<< " is equal to " <<b<< "\n.";
        cout<< "\n";
    }
    else                                           //if a and b  are not equal
    {
        cout<< "" <<a<< " is not equal to " <<b<< "\n.";

    }
return 0;               //End of program
}
