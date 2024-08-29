// WAP to print the fractional part of a number
#include <iostream>
using namespace std;
int main(){
    float f;    cout<<"enter a number : ";  cin>>f;
    int x = (int)f;
    if(f>0){
        cout<<"the fractional part is : "<<f-x;
    }
    else{
        f++;
        cout<<"the fractional part is : "<<f-x;
    }
}