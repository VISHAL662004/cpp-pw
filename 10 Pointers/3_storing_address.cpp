#include <iostream>
using namespace std;
int main(){
    int x = 7;
    int *p = &x;
    cout<<x<<endl; // value of x
    cout<<&x<<endl; // address of x
    cout<<p<<endl; // address p is pointing to
    cout<<&p<<endl; // address of p
}