// Write a program that declares one variable of each type (char, int, float,bool). 
// Then, update each variable (for example, change the character,add 50 to the 
// integer, multiply the float by 2, and toggle the boolean),and print the
//  updated values.

#include<iostream>
using namespace std;

int main(){
    char a='L';
    int b=20;
    float c=3.14f;
    bool isTrue=true;

    // updates
    a='M'; //For the intitialized value of 'a' to be 'L' is amended to be 'M'
    b+=30; //Same as the previous but the int value of 'b' of  20 is ammend to 50 by adding 30
    c*=3;//This one multiplies the float vlaue of 3.14 by 3 and ammend 'c' to there product
    isTrue=false; //This chagnes the value of isTrue from true to flase  giving out '0' 

    cout<<"Upadate Chracter: " <<a <<endl;
    cout<<"Upadate Integer: " <<b <<endl;
    cout<<"Upadate Float: " <<c <<endl;
    cout<<"Upadate Boolean: " <<isTrue <<endl;


}