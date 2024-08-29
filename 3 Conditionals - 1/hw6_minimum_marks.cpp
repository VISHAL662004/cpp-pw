// If the marks of A, B and C are input through the keyboard, write a program to determine the student scoring least marks.
#include <iostream>
using namespace std;
int main(){
    int a; cout<<"enter 1st number : "; cin>>a;
    int b; cout<<"enter 2nd number : "; cin>>b;
    int c; cout<<"enter 3rd number : "; cin>>c;
    if(a<b && a<c)  cout<<a<<" is minimum marks.";
    else if(b<a && b<c)  cout<<b<<" is minimum marks.";
    else    cout<<c<<" is minimum marks.";
}