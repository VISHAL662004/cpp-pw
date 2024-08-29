// WAP to print the sum of all the even digits of a given number.
#include <iostream>
using namespace std;
int main(){
    int n;  cout<<"enter a number : ";  cin>>n;
    int lastdigit,sum = 0;
    while(n>0){
        lastdigit = (n%10);
        if(lastdigit%2==0)  sum = sum + lastdigit;
        else    sum += 0;
        n = n/10;
    }
    cout<<"sum of even digits = "<<sum;
}