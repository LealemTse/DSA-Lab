#include<iostream>


using namespace std;

int main(){
    
    int ini_inv, new_inv, item_sold;
    double price, tot_sold;
    

    cout<<"Enter the Initial Inventory:" <<endl;
    cin>>ini_inv;
    cout<<"Enter the Product Price:" <<endl;
    cin>>price;
    cout<<"Enter the Number of Item sold:" <<endl;
    cin>>item_sold;

    new_inv=ini_inv-=item_sold;
    tot_sold=price*item_sold;



    cout<<"New Inventory: "<<new_inv<<endl;
    cout<<"Total Sold: "<<tot_sold<<endl;

    return 0;
}