#include<iostream>

using namespace std;
 
int main(){
    
    double price,tot_price;
    int num_sold;
    cout<<"Enter the Price of the Item:";
    cin>>price;
    cout<<"Enter the Items Sold:";
    cin>>num_sold;

    for(int i=1; i!=num_sold; i++){
        tot_price=price*i;
        cout<<"Receipt For "<<i<<" Items is: " <<tot_price<<", " <<endl;
    }

    tot_price=price*num_sold;
    cout <<"Receipt For "<<num_sold<<" Items is: "<<tot_price<<endl;
    return 0;
}