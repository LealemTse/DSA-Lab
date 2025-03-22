//factorial making
#include<iostream>

using namespace std;
 int main(){
    int n;
    long f=1L;
    cout<<"Enter Numebr: ";
    cin>>n;

    
    for (int i = 1; i <= n; i)
    {
       f=f*i;

    }
    cout <<f<<endl;
    return 0;
    

 }