// WAP to swap two numbers
#include <iostream>
using namespace std;
int main(){
    // method 1
    int a;  cout<<"enter a : ";    cin>>a;
    int b;  cout<<"enter b : ";    cin>>b;
    int c;
    c = a;  // store a in c
    a = b;  // give value of b in a
    b = c;  // give value of c in b
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    // Method 2
    int d;  cout<<"enter d : ";    cin>>d;
    int e;  cout<<"enter e : ";    cin>>e;
    d = d + e;
    e = d - e;
    d = d - e;
    cout<<"d = "<<d<<endl;
    cout<<"e = "<<e;
}