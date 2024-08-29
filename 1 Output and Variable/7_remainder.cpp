// Take 2 integers a and b;a>b , and find the remainder when a is divided by b;
#include <iostream>
using namespace std;
int main(){ 
    int a = 5; // a is divident
    int b = 2; // b is divisor
    // Method 1
    int q = a / b;      // q os quotient
    int r1 = a - b * q; // r1 is method 1 remainder
    cout << "The remainder is : " << r1;
    cout << "\n";
    // Method 2
    int r2 = a % b; // r2 is method 2 remainder
    cout << "The remainder is : " << r2;
    cout << endl;
    //important
    cout<<3%4<<endl;// if a<b then a%b is a.
    cout<<10%(-3)<<endl;// a%-b = a%b
    cout<<(-99)%4<<endl;// -a%b gives negative number
    cout<<(-99)%(-4);// -a%-b gives negative number
}