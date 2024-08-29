#include <iostream>
using namespace std;
// Method 1
    int hcf1(int x, int y){
        int z;
        for(int i = 1;i<=min(x,y);i++){
            if(x%i==0 && y%i==0){
                z = i;
            }
            else    continue;
        }   
        return z;
    }
// Method 2
    int hcf2(int x, int y){
        int z;
        for(int i = min(x,y);i>=1;i--){
            if(x%i==0 && y%i==0){
                z = i;
                break;
            }
            else    continue;
        }   
        return z;
    }
// Method 3 - Euclid - recurssion
int main(){
    int x;  cout<<"enter first number : ";  cin>>x;
    int y;  cout<<"enter second number : ";  cin>>y;
    cout<<"the hcf of "<<x<<" & "<<y<<" is "<<hcf1(x,y)<<endl;
    cout<<"the hcf of "<<x<<" & "<<y<<" is "<<hcf2(x,y);
    
    return 0;
}