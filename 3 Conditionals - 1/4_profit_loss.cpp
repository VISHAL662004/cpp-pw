//find profit or loss made by seller
#include <iostream>
using namespace std;
int main(){
    int sp,cp;
    cout<<"enter the cost price : ";
    cin>>cp;
    cout<<"enter the selling price : ";
    cin>>sp;
    if(cp<sp){
        cout<<"the seller has made a profit of "<<sp - cp;
    }
    else if(cp>sp){
        cout<<"the seller has made a loss of "<<cp-sp;
    }
    else{
        cout<<"there is no profit no loss.";
    }
}