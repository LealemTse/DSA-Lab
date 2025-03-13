#include<iostream>
#include<string>

using namespace std;

int main(){
    string prod_name;
    int prod_cat;
    int ini_inv;
    double price;
    int item_sold;

    cout<<"Enter the Products name:" <<endl;
    cin>>prod_name;
    cout<<"Enter the Products Catagory(1-5):" <<endl;
    cin>>prod_cat;
    cout<<"Enter the Initial Inventory:" <<endl;
    cin>>ini_inv;
    cout<<"Enter the Product Price:" <<endl;
    cin>>price;
    cout<<"Enter the Number of Item sold:" <<endl;
    cin>>item_sold;

    cout<<"Enterd Product Name: " <<prod_name <<endl;
    cout<<"Enterd Product Catagory: " <<prod_cat<<endl;
    cout<<"Enterd Initial Inventory: " <<ini_inv <<endl;
    cout<<"EnterdPrice of Product: "<<price<<endl;
    cout<<"Enterd Number of Items Sold: "<<item_sold<<endl;

    return 0;
}