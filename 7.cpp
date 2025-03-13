// Write a C++ program that demonstrates arithmetic operations, compound assignment,
// and the conditional (ternary) operator. Explain how the ternary operator works.

#include<iostream>

using namespace std;

int main(){
    float a, b, sum, gre;
    
    cout<<"Enter the fist number:" <<endl;
    cin>>a;
    cout<<"Enter the second number:" <<endl;
    cin>>b;

    sum=a+b;
    a+=3;

    cout<<"Sum: "<< sum <<endl;
    cout<<"The your first number compunded by 3 is: " <<a<<endl;

    gre=(a>b)? a:b;
    cout<<"The Greater number is:" <<gre <<endl;

    return 0; 

}