// Any year is input through the keyboard. Write a program to determine whether the year is a leap year or not.
#include <iostream>
using namespace std;
int main(){
    int a; cout<<"enter the year number :";   cin>>a;
    if(a%4==0)  cout<<"it is a leap year.";
    else    cout<<"it is not a leap year.";
}