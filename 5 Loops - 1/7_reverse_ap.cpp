// WAP to print ap 100,97,94... upto all positive term;
#include <iostream>
using namespace std;
int main(){
    // method 1 -> use maths
    int x = 100;
    for(int i =1;i<=34;i++){
        cout<<x<<" ";
        x -= 3;
    }
    cout<<endl;
    // method 2 -> without maths
    for(int i = 100;i>0;i -= 3){
        cout<<i<<" ";
    }