#include<iostream>
#include<string>

#define TAX 0.09
using namespace std;
int main(){
    
    const double tax=0.15;
    double price;
    string prod_name, low_level="(Warning!) Low Inventory", suf_level="Sufficent Inventory";
    int prod_catg, item_sold, new_inv;
    decltype(prod_catg)ini_inv;
    decltype(price)tot_sales;
    decltype(price)with_tax;
    decltype(prod_name)level;

    cout<<"Enter the Product Name: ";
    cin>>prod_name;
    cout<<"Enter the Product Catagory(1-5): ";
    cin>>prod_catg;
    cout<<"Enter the Initial Inventory: ";
    cin>>ini_inv;
    cout<<"Enter the Price of an Item: ";
    cin>>price;
    cout<<"Enter the Items sold: ";
    cin>>item_sold;

    cout<<"Summary"<<endl;
    cout<<"Product Name: "<<prod_name<<endl;

    if(prod_catg==5){
        cout<<"Catagory 5: Miscellaneous" <<endl;
    }
    else if(prod_catg==4){
        cout<<"Catagory 4: Stationary" <<endl;
    }
    else if(prod_catg==3){
        cout<<"Catagory 3: Clothing" <<endl;
    }
    else if(prod_catg==2){
        cout<<"Catagory 2: Groceries" <<endl;
    }
    else if(prod_catg==1){
        cout<<"Catagory 1: Electronics" <<endl;
    }
    else{
        cout<<"You are out of range" <<endl;
    }

    new_inv=ini_inv-=item_sold;
    cout<<"New Inventory: "<<new_inv<<endl;
    level=(new_inv<10)? low_level:suf_level;
    cout<<"Ineventory Level: "<<level<<endl;

    tot_sales=price*item_sold;
    cout<<"Total Sales With out Tax (9%) or (15%):"<<tot_sales<<endl;
    
    if(prod_catg==1){
        with_tax=price*tax;
        tot_sales+=with_tax;
        cout<<"Total price with tax of 15%: "<<tot_sales<<endl;
    }
    else{
        with_tax=price*TAX;
        tot_sales+=with_tax;
        cout<<"Total price with tax of 9%: "<<tot_sales<<endl;
    }


    return 0;


    

}