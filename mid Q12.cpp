#include <iostream>     // input output stream

using namespace std;

int main ()             // main function
{

    cout<< "Please enter your age: \n";                  //outputs on prompt

    int age;                                        // Declares integer variable
    cin>> age;                                    // Takes user input a
    cout<< "\n";

    if (age < 20)                                   // Output if age is less than 20
    {
        cout<< "Sorry u r  underaged.\n";
        cout<< "\n";
    }
    else                                            // Output if age is greater than 20
    {
        cout<< " You can vote...\n";
        cout<<"\n" ;

    }

return 0;               //End of program
}
