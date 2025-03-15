#include<iostream>

using namespace std;

// void duplicate(int a, int b, int c){
void duplicate(int& a, int& b, int& c){

    a*=2;
    b*=2;
    c*=2;
   
}
int main (){
    int x=1, y=3, z=7 ;
    int g;
    duplicate(x,y,z);
    g=x+y+z;
    cout<<"x:"<<x<<"y:"<<y<<"z:"<<z<<"g"<<g<<endl;
    return 0;
}

//thie first one shoud out put x=1, y=3 and z=7

// ths second one should output x=2, y=6 and z=14
