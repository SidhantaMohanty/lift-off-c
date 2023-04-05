#include <iostream>
using namespace std;
int main(){
    int num,sum = 0,remainder;
    cout<<"Enter a number:";
    cin>>num;
    do{
        remainder=num%10;
        sum+=remainder;
        num/=10;
    } while(num!=0);
    cout<<sum<<endl;
 return 0;







}