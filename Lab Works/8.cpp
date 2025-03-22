#include<iostream>
#include<string>
using namespace std;

// void duplicate(int a, int b, int c, int d){
void duplicate(int& a, int& b, int& c, int& d){
    a*=2;
    b*=2;
    c*=2;
    d=a+b+c;  
   cout<<d<<endl;
}

// string toge(const string& t, const string& u){
string toge(string t, string u, string m){
    m=t+u;
    return m;
}

int main (){
    int x=1, y=3, z=7, g ;

    string j="Hello ";
    string i="World!";
    string k;

    k=toge(j,i,k);
    duplicate(x,y,z,g);
    cout<<"x:"<<x<<"y:"<<y<<"z:"<<z<<endl;

    cout<<k<<endl;
     return 0;

}

//thie first one shoud out put x=1, y=3 and z=7

// ths second one should output x=2, y=6 and z=14
