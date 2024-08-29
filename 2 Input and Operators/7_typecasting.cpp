// int, float, bool, char -> typecasting
#include <iostream>
using namespace std;
int main(){
    float x = 7.22;
    int y = (int)x;  // int value of x
    cout << y << endl;
    int z = 65;
    char ch = (int)z;   
    cout << ch << endl;
    int p = true;   // true means 1 and false means 0
    cout << p + 9;
}