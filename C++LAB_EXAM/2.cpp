/* Question -2
Write a program to print the area of two rectangles having sides (4,5) and (5,8) respectively by creating a
class named 'Rectangle' with a function named 'Area' which returns the area. Length
*/

#include<iostream>
using namespace std;
class rectangle
{
private:
      float l,b;
     float area=0;
public:
     void get_data (float l,float      b,float area=0)
{

    this-> l=l;
    this-> b=b;
    area=l*b;
    this -> area=area;
}
     void set()
{
     cout<<"\narea:"<<area;
}
};

main()
{
    rectangle r1,r2;
     r1.get_data(4,5);
    r1.set();
     r1.get_data(5,8);
     r1.set();
 
}
