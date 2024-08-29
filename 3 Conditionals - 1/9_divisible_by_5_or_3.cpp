// WAP to takee positive integer input and tell if it is divisible by 5 or 3 but not divisible by 15
#include <iostream>
using namespace std;
int main(){
    int n; cout<<"enter a number : "; cin>>n;
    if(n%3==0 || n%5==0){
        if(n%15==0){
            cout<<"the number is divisible by 5 and 3 and 15";
        }
        else{
            cout<<"the number is divisible by 5 or 3 but not by 15";
        }
    }
    else{
        cout<<"the number is neither divisible by 5 nor 3";
    }
}