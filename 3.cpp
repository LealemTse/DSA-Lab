// Write a C++ program that demonstrates type deduction using the 
// auto keyword and the decltype specifier. Explain how the compiler 
// determines variable types

#include<iostream>
using namespace std;
int main(){
    float x=10.5f; //this is the main intilaizer 
    auto y=x; //while the auto type give the variable type and the value whchi is 
    // assigend for "x" to "y" 
    decltype(x)z; //this one using decltype have the same variable type as 'x' but 
    // no assigend value so buy default the compiler assigens the maximum value of
    // of the datatype for this case a float so 4.59163e-41
    decltype(x)c=30.5f;// the diffrec between this and the previuse one is that this 
    // one hava an assigen value of 30.5 so outputs this float value.
    cout<<y<<endl;
    cout<<z<<endl;
    cout<<c<<endl;


    return 0;
}