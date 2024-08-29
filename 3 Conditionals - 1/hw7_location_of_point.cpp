// Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0).
#include <iostream>
using namespace std;
int main(){
    int x;  cout<<"enter x coordinat : ";   cin>>x;
    int y;  cout<<"enter y coordinat : ";   cin>>y;
    if(x==0 && y==0){   //origin
        cout<<"point is origin.";
    }
    else if(y==0 && x!=0){  // x-axis
        if(x>0) cout<<"point lies on +ve x-axis";
        else    cout<<"point lies on -ve y-axis";
    }
    else if(x==0 && y!=0){  // y-axis
        if(y>0) cout<<"point lies on +ve y-axis.";
        else    cout<<"point lies on -ve y-axis.";
    }
    else{   // quadrants
        if(x>0){
            if(y>0) cout<<"point lies in first quadrant.";  // first
            else    cout<<"point lies in fourth quadrant."; // fourth
        }
        else{
            if(y>0) cout<<"point lies in second quadrant."; // second
            else    cout<<"point lies in third quadrant."; // third
        }
    }
}