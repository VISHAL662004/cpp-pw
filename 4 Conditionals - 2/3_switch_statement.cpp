// WAP to input day number and print day of it.
#include <iostream>
using namespace std;
int main(){
    int n;  cout<<"Enter a number : ";  cin>>n;
    switch(n){
        case 1: // if n = 1
            cout<<"sunday";
            break; // to end the switch block
        case 2: // if n = 2
            cout<<"monday";
            break;
        case 3: // if n = 3
            cout<<"tuesday";
            break;
        case 4: // if n = 4
            cout<<"wednesday";
            break;
        case 5: // if n = 5
            cout<<"thursday";
            break;
        case 6: // if n = 6
            cout<<"friday";
            break;
        case 7: // if n = 7
            cout<<"saturday";
            break;
        default : // in all rest cases
            cout<<"invalid number";
            break;
    }
}