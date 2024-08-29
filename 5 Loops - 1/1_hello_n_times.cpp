// WAP to print hello world n times where n is a input from user
#include <iostream>
using namespace std;
int main(){
    int n,x=1;  cout<<"enter a number : ";  cin>>n;
    for(int i = 1; i<=n; i++){                  // 1) assign i = 1
        cout<<x<<". ";                          // 2) check the condition
        cout<<"hello world !"<<endl;            // 3) if true then reun the program inside loop
        x++;                                    // 4) at end increase the value of i
    }                                           // 5) repeat step 2 and so on
                                                // 6) if condition fail loop stops
}