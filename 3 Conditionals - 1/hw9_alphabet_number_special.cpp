// Write a C++ program to input any character and check whether it is the alphabet, digit or special character.
#include <iostream>
using namespace std;
int main(){
    char ch;    cout<<"enter a character : ";   cin>>ch;
    int x = int(ch);
    if((x>=65 && x<=91) || (x>=96 && x <=123))  cout<<"it is a alphabet.";
    else if(x>=47 && x<=57) cout<<"it is a number.";
    else    cout<<"it is a special character.";
}