// WAP to print the sum of a given number and its reverse.
#include <iostream>
using namespace std;
int main(){
    int n;  cout<<"enter a number : ";  cin>>n;
    int number = n;
    int lastdigit = 0;
    int reverse = 0;
    while(n>0){
        lastdigit = (n%10);
        reverse = (reverse*10)+lastdigit;
        n = n/10;
    }
    cout<<"sum of number and its reverse = "<<number + reverse;

}