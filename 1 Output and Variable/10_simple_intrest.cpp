// WAP to find simple intrest
#include <iostream>
using namespace std;
int main(){
    float p, r, t, si, am;
    p = 100;
    r = 2;
    t = 1;
    si = (p * r * t) / 100;
    am = p + si;
    cout << si<<"   "<<am;
}