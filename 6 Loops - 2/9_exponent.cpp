//WAP to print a to the power b
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a;  cout<<"enter a : "; cin>>a;
    int b;  cout<<"enter b : "; cin>>b;
    // method 1
    cout<<a<<" to the power "<<b<<" = "<<pow(a,b)<<endl;
    // method 2
    bool flag = true;
    if(b<0){ // if b <0 convert it to positive
        flag = false;  // change the flag variable
        b = -b;
    }
    float power = 1;
    for(int i =1;i<=b;i++){
        power = power*a;
    }
    if(flag == false){ // reciprocal of power
        cout<<a<<" to the power -"<<b<<" = 1/"<<power<<" = "<<1/power;
    }
    else    cout<<a<<" to the power "<<b<<" = "<<power;
    return 0;
}