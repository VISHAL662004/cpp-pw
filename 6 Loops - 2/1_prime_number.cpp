// WAP to check if a number is prime or not
#include <iostream>
using namespace std;
int main(){
    int n;  cout<<"enter a number : ";  cin>>n;
    if(n==1)    cout<<"1 is neither prime nor composite."; // special case of 1
    else{
        bool x = true; // use of extra variable
        for(int i = 2;i<=n-1;i++){
            if(n%i==0){
                x = false; // changing value of extra variable
                break; // to come out of loop as if we fine one number then also the number will be composite
                        // so we do not need to check again and again
            }
        }
        if(x == true)    cout<<n<<" is prime.";
        else    cout<<n<<" is composite.";
    }
}