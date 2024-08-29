// take 3 positive integer input and print least of them using nested if-else
#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter number 1 : "; cin>>a;
    cout<<"enter number 2 : "; cin>>b;
    cout<<"enter number 3 : "; cin>>c;
    if(a<b){
        if(a<c){
            cout<<a<<" is least.";
        }
        else{
            cout<<c<<" is least.";
        }
    }
    else{
        if(b<c){
            cout<<b<<" is least.";
        }
        else{
            cout<<c<<" is least.";
        }
    }
}