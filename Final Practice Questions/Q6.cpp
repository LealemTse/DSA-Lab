#include<iostream>

#define TAX 0.15
using namespace std;

int main(){
    const double tax=0.15;

    cout<<"Preprocessed defined Tax Value: " <<TAX<<endl;
    cout<<"Constnat keyword defined Tax Value: " <<tax<<endl;

    return 0;

}