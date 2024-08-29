// WAP to find weather a number is 3 digit or not
#include <iostream>
using namespace std;
int main(){
    int n; cout<<"enter a number : "; cin>>n;
    if(n>99 && n<1000){
        cout<<n<<" is a three digit number.";
    }
    else{
        cout<<n<<" is not a three digit number.";
    }
}