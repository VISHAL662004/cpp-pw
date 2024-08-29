// WAP to find out the first and last digit of a number without returning anything 
#include <iostream>
using namespace std;
// Method 1
    // int last_digit(int n){
    //     int last=n%10; 
    //     return last; 
    // }
    // int first_digit(int n){
    //     int first = n;
    //     while(first>9){
    //         first = first/10;
    //     }
    //     return first;
    // }
    // int main(){
    //     int n;  cout<<"enter the number : ";    cin>>n;
    //     cout<<last_digit(n)<<endl;
    //     cout<<first_digit(n);
    // }

// Method 2
void find(int n, int *p1,int *p2){
    *p1 = n%10;
    while(n>9){
        n = n/10;
    }
    *p2 = n;
}
int main(){
    int n;  cout<<"enter the number : ";    cin>>n;
    int last, first;
    int *p1 = &last;
    int *p2 = &first;
    find(n, p1, p2);
    cout<<*p2<<" "<<*p1;
}