// WAP to check weather a number is odd or even using ternary operator
#include <iostream>
using namespace std;
int main(){
    int x;  cout<<"enter a number : ";  cin>>x;
    // if(x%2==0)  cout<<"even";
    // else    cout<<"odd";
    // condition ? true : false
    x%2==0 ? cout<<"even" : cout<<"odd";
}