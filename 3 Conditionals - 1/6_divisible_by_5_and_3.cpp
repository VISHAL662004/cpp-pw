// check weather a number is divisible by 5 and 3
#include <iostream>
using namespace std;
int main(){
    int n; cout<<"entter a number : "; cin>>n;
    if(n%5==0 && n%3==0){//or write n%15==0
        cout<<"the number is divisible by 5 and 3.";
    }
    else if(n%5==0 && n%3!=0){
        cout<<"the number is divisible by 5 but not by 3.";
    }
    else if(n%5!=0 && n%3==0){
        cout<<"the number is divisible by 3 but not by 5.";
    }
    else{
        cout<<"the number is neither divisible by 5 nor by 3.";
    }
}