// WAP to take input and find Simple Intrest
#include <iostream>
using namespace std;
int main(){
    float P,R,T,SI,Total;
    cout<<"Enter the principal amount : ";cin>>P; 
    cout<<"Enter the rate of intrest : ";cin>>R;
    cout<<"Enter the time : ";cin>>T;
    SI = P*R*T/100;
    Total = P + SI;
    cout<<"the simple intrest is : "<<SI<<endl;
    cout<<"The total amount is : "<<Total;
}