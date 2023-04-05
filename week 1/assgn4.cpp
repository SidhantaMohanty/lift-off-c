#include <iostream>
using namespace std;

int main(){
    int num1,num2;
    char aroperation;
    cout<<"Enter two numbers:";
    cin>>num1>>num2;
    cout<<"choose operation from +,-,*,/ :";
    cin>>aroperation;
    switch(aroperation){
        case '+':
         cout<<"The sum of numbers is "<<num1+num2<<endl;
         break;
        case '-':
         cout<<"The difference of numbers is "<<num1-num2<<endl;
         break;
        case '*':
         cout<<"The product of the numbers is "<<num1*num2<<endl;
         break;
        case '/':
         if (num2==0) {
            cout<<"Cant divide a number by 0."<<endl;
         }
         else{
         cout<<"The divison of the numbers is "<<num1/num2<<endl;
         }
         break;
        default:
         cout<<"Choose valid operation from the given choices.";
         break;
    }



  return 0;
 }






    
 
