#include<iostream>

using namespace std;

int main(){
    float sales=169.83;
    int inv=6;
    auto tot_sales=sales;
    decltype(inv)ini_inv=23;

    cout<<"Total Sales: "<<tot_sales<<endl;
    cout<<"Intial Inventory: "<<ini_inv<<endl;

    return 0;
}