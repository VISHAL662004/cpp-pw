#include <iostream>
using namespace std;
int product(int &p1, int &p2){
    return p1*p2;
}
int main(){
    // int x;  cout<<"enter 1st number : ";    cin>>x;
    // int y;  cout<<"enter 2nd number : ";    cin>>y;
    // cout<<"the product is : "<<product(x,y);
    int a = 10, b = 20;
int *ptr = &a;
b = *ptr + 1;
ptr = &b;
cout << *ptr << ' ' << a << ' ' << b;
}