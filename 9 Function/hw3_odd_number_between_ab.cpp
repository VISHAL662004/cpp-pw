//Given two numbers a and b, write a function to print all odd numbers between them.
#include <iostream>
using namespace std;
void odd(int a, int b){
    for(int i = min(a,b);i>=a && i<=b;i++){
        if(i%2 != 0)    cout<<i<<endl;
        else continue;
    }
}
int main(){
    int a;  cout<<"enter a : "; cin>>a;
    int b;  cout<<"enter b : "; cin>>b;
    cout<<"the odd number between "<<a<<" & "<<b<<" are : "<<endl;
    odd(a,b);
}