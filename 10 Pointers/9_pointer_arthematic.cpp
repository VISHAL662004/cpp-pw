#include <iostream>
using namespace std;
int main(){
    int x = 7;
    int *p = &x;
    cout<<*p<<endl;
    *p=*p+1;
    (*p)++;
    cout<<*p;
}