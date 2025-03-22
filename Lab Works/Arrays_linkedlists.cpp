#include<iostream>
#include<vector>

using namespace std;
//  linked list
class Node{
    public:
        int data;
        Node* next;

    public:
    Node(int data1, Node* next1){ //we use different variabls
        data=data1;
        next=next1;

}
//node creations
Node(int data1){
    data=data1;
    next=nullptr;
}

};
Node* convetArr2LL(vector<int> &arr){
    Node* head =new Node{arr[0]};
    
}

int main(){
    //linked list creation
    vector<int> arr ={1,2,3,4,5};

}