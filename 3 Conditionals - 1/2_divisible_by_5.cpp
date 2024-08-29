//WAP to check if a number is divisible by 5 orf not.
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    if(n%5!=0){
        cout<<"the number is not divisible by 5.";
    }
    else{
        cout<<"the number is divisible by 5.";
    }
}