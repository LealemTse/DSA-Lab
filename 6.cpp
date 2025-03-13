// Write a C++ program that defines the value of pi using both a preprocessor definition
// and a const variable, then prints both values. Explain the difference between these
// two approaches.

#include<iostream>
#define PI 3.14159 //This value of Pi is Preprocessor constant

using namespace std;

int main(){
const double pi=3.14159; //This is a typed constant value for Pi 

    cout<<"PI Using Define " <<PI<<endl;
    cout<<"PI Using Const " <<pi<<endl;

}
