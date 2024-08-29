//Given the radius of the circle predict whether numerically area of this circle is larger than the circumference or not.
#include <iostream>
using namespace std;
int main(){
    int r; cout<<"enter 1st radius : ";   cin>>r;
    float a = 3.1415*r*r;
    float c = 2*3.1415*r;
    if(a>c) cout<<"area is more than circumference";
    else if(a==c)   cout<<"both are equal";
    else    cout<<"circumference is more than area";
}