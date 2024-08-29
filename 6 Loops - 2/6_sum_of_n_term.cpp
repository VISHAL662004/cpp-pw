// WAP to print sum of series upto n term -> 1 - 2 + 3 - 4 + 5 .....
#include <iostream>
using namespace std;
int main(){
    int n;  cout<<"enter the n : "; cin>>n; 
    // Method 1
    int x = 1;
    int sum = 0;
    for(int i = 1;i<=n;i++){
        sum = sum + x;
        x++;
        x *= (-1);
    }
    cout<<sum<<endl;
    // method 2
    int sum1 = 0;
    for(int i = 1;i<=n;i++){
        if(i%2!=0) sum1 += i;
        else    sum1 -= i;
    }
    cout<<sum1<<endl;
    // Method 3 use maths as for big n loop will run many number of time
    if(n%2==0)  cout<<(-1)*(n/2);
    else    cout<<(-1)*((n-1)/2) + n;
}