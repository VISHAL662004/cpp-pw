#include <iostream>
using namespace std;
int main(){
    int n;  cout<<"enter a number : ";   cin>>n;
    int lastdigit = 0;
    int reverse = 0;
    while(n>0){
        lastdigit = n%10;
        reverse = (reverse*10)+lastdigit;
        n/=10;
    }
    cout<<"the reverse number is : "<<reverse;
}