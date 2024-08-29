#include <iostream>
using namespace std;
int main(){
    int x = 7;
    int *p = &x;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<*p + 1<<endl;
    cout<<*p - 1<<endl;
    cout<<1 + *p<<endl;
    cout<<1 - *p<<endl;
    *p = 10;
    cout<<*p<<" "<<x;
}