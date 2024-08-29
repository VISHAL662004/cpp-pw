// Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line.
#include <iostream>
using namespace std;
int main(){
    int x1,y1,x2,y2,x3,y3;
    cout<<"enter x1,y1 : ";    cin>>x1;    cin>>y1; // enter space while giving input to 
    cout<<"enter x2,y2 : ";    cin>>x2;    cin>>y2; // make difference between 1 point
    cout<<"enter x3,y3 : ";    cin>>x3;    cin>>y3; // and then press enter to add next point
    if(x1*(y2-y3)-y1*(x2-x3)+(x2*y3-x3*y2)==0)  cout<<"all points lie on same line.";
    else    cout<<"they do not lie on smae line.";
}