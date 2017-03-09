#include <iostream>
using namespace std;
int main()
{

double pi , radius , area ,circ ;

pi = 3.14159;

cout<< " Enter the radius:"<<endl;

cin>> radius ;

area = pi*radius*radius;
circ = 2*pi*radius ;
cout<< "Area of the circle is "<<area<<"and the circ is"<<circ<<endl ;

return 0;

}
