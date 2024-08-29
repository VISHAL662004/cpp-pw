//Write a function that takes the radius of a circle as an argument and returns its area.
#include <iostream>
using namespace std;
int area(int r){
    return 3.1415*r*r;
}
int circumference(int r){
    return 2*3.1415*r;
}
int main(){
    int r;  cout<<"enter r : "; cin>>r;
    cout<<"Area  = "<<area(r)<<endl;
    cout<<"Circumference  = "<<circumference(r);
}