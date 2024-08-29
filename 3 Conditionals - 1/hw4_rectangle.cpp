//Given the length and breadth of a rectangle, write a program to find whether numerically the area of the rectangle is greater
// than its perimeter.
#include <iostream>
using namespace std;
int main(){
    int l; cout<<"enter length : ";   cin>>l;
    int b; cout<<"enter breadth : ";   cin>>b;
    int a = l*b;
    int p = 2*(l+b);
    if(a>p) cout<<"area is more than perimeter";
    else if(a==p)   cout<<"both are equal";
    else    cout<<"perimeter is more than area";
}