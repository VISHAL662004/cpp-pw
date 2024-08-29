// Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or isosceles triangle.
#include <iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"enter 1st side : ";  cin>>x;
    cout<<"enter 2nd side : ";  cin>>y;
    cout<<"enter 3rd side : ";  cin>>z;
    if(x+y>z && y+z>x && z+x>y){
        //method 1
        if(x==y && y==z && z==x) cout<<"it is an equilateral triangle.";
        else if(x==y || y==z || z==x)   cout<<"it is an isosceles triangle.";
        else    cout<<"it is a scalen triangle.";
        //method 2
        /*if(x==y && y==z && z==x) cout<<"it is an equilateral triangle.";
        else if(x!=y && y!=z && z!=x)    cout<<"it is a scalen triangle.";
        else    cout<<"it is an isosceles triangle.";*/
    }
    else    cout<<"it is not a triangle.";
}