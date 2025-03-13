#include<iostream>
#include<string>

using namespace std;

int main(){
    
    int invt =23, sold=17, left;
    float price=9.99f, tot_sal;
    string low_level="Low Inentory", suf_level="Sufficent Inventroy", level;

    left=invt-sold;
    tot_sal=price*sold;

    level=(left<10)? low_level:suf_level;
    cout<<"Total Invintory left:" <<left<<endl;
    cout<<"Total Sales: "<<tot_sal<<endl;
    cout<<"Inventory Status: "<<level<<endl;

    return 0;
    
}