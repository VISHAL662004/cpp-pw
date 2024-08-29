//Write a program to print out all Armstrong numbers between 1 and 500. If the sum of cubes of 
//each digit of the number is equal to the number itself, then the number is called an Armstrong 
//number.
#include <iostream>
using namespace std;
int main(){
    for(int i=1;i<=500;i++){
        int x = 0, t = i;
        while(t>0){
            int m = t%10;
            x += m*m*m;
            t /=10;
        }
        if(i==x)    cout<<i<<endl;
    }
}