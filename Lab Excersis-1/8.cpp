#include<iostream>
#include<string>
using namespace std;

// void duplicate(int a, int b, int c, int d){
// void duplicate(int& a, int& b, int& c, int& d){

//     a*=2;
//     b*=2;
//     c*=2;
//     d=a+b+c;  
//    cout<<d<<endl;
// }

// string cocatinate(const string& t, const string& u){
inline string cocatinate(string t, string u){
    return t+u;
}
int main (){
    // int x=1, y=3, z=7, g ;

    string j="Hello";
    string i="World!";

    cocatinate(j,i);

    // duplicate(x,y,z,g);
    // cout<<"x:"<<x<<"y:"<<y<<"z:"<<z<<endl;

    cout<<cocatinate <<endl;
    //  return 0;

}

//thie first one shoud out put x=1, y=3 and z=7

// ths second one should output x=2, y=6 and z=14
