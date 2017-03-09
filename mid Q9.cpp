
#include <iostream>      //input output stream

using namespace std;

int main ()             // the main function
{
    int minute, hours;

    cout<< "Please input hours: "<<endl;      //outputs for number of hours

    cout<< "\n";

    cin>> hours;                                // Takes user  variable


    cout<< "Please input minutes: "<<endl;    //outputs user for number of minutes

    cout<< "\n";

    cin>> minute;                 // Takes user input


    double t_minute;

    t_minute = (hours) * 60 + minute;

   cout<< "Total minutes:\n " <<t_minute<< "\n";  //outputs the result to the user


return 0;               //End of program
}
