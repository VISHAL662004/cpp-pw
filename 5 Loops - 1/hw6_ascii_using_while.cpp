// WAP to print aascii values of alphabet using while loop
#include <iostream>
using namespace std;
int main(){
    int n = 97;
    while(n<=123){
        char ch = char(n);
        cout<<ch<<" -> "<<n<<endl;
        n++;
    }

}