#include<iostream>

using namespace std;

int main(){
    int prod_cat;
    cout<<"Enter Product Catagory(1-5): ";
    cin>>prod_cat;

    if(prod_cat==5){
        cout<<"Catagory 5: Miscellaneous" <<endl;
    }
    else if(prod_cat==4){
        cout<<"Catagory 4: Stationary" <<endl;
    }
    else if(prod_cat==3){
        cout<<"Catagory 3: Clothing" <<endl;
    }
    else if(prod_cat==2){
        cout<<"Catagory 2: Groceries" <<endl;
    }
    else if(prod_cat==1){
        cout<<"Catagory 1: Electronics" <<endl;
    }
    else{
        cout<<"You are out of range" <<endl;
    }

    return 0;

}