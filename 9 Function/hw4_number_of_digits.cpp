//Write a function to count the number of digits in a number and then print the square of this number.
#include <iostream>
using namespace std;
int digits(int n){
    int count = 0;
    int x = n;
    for(int i = 1;x>=1;i++){
        x = x/10;
        count++;
    }
    return count;
}
int square(int n){
    return n*n;
}
int main(){
    int n;  cout<<"Enter n : "; cin>>n;
    cout<<digits(n)<<endl;
    cout<<square(digits(n));
}