#include <iostream>
using namespace std;

int main(){
    float r,diameter,circumference,area;
    const float pi = 3.14;
    cout<<"Enter the radiius of the circle:";
    cin>>r;
    diameter = 2*r;
    circumference = 2*pi*r;
    area = pi*r*r;
    cout<<"The diameter of the circle is "<<diameter<<endl;
    cout<<"The circumference of the circle is "<<circumference<<endl;
    cout<<"The area of the circle is "<<area<<endl;
  return 0;






}   