//WAP to count the number of digits of a given number
#include <iostream>
using namespace std;
int main(){
    //method 1
    int n;  cout<<"enter a number : ";  cin>>n;
    int count = 0;
    int a = n;
    for(int i = 1;n>=1;i++){
        n = n/10;
        count++;
    }
    if(a==0) cout<<"the number of digits are : 1";
    else cout<<"the number of digits are : "<<count;
    cout<<endl;
    //method 2
    int z;  cout<<"enter a number : ";  cin>>z;
    int c = 0;
    int y = z;
    while(z>0){
        z = z/10;
        c++;
    }
    if(y==0) cout<<"the number of digits are : 1";
    else cout<<"the number of digits are : "<<c;
}