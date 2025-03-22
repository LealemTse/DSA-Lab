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
    next=NULL;
}

};
void printList(Node*head){ //to print all the elents of the linked list
    Node* moverHead = head;
    while(moverHead!=NULL){
        cout<<moverHead->data << "->"; 
        moverHead = moverHead-> next;
    }
    cout<<"NULL";
    cout<<'\n';

    
} 
// the conncetion makers
Node* convetArr2LL(vector<int>& arr){
    Node* head =new Node(arr[0]); //creat where the node is in the array
    Node* moverHead=head;
    for(int i=0; i<arr.size();i++){
        Node* tempNode =new Node(arr[i]);
        moverHead-> next=tempNode;
        moverHead=tempNode; 
    }
    return head;
}

//instering at the first 
Node* insertHead(Node*head, int value){
    Node* newNode =new Node(value);
    newNode->next =head;// if we interchang this the next line head 
    //will 0 and ther wont be a link betwen the fist head and the new heads
    head=newNode;
        
    return head;
}

//inster to the tail 
Node* insertTail(Node*head, int value, int k){
   Node* moverHead = head;
   while(moverHead->next != NULL){
    moverHead=moverHead ->next;
   }
}
//inserting at the k places
Node*insertAtK(Node*head, int value){
    Node*moverHead= head;
    int count=0;
    while (moverHead)
    {
        count++;
        if(count==k-1){
            Node*tempo=moverHead->next;
            Node* newNode =new Node(value);
            moverHead->next=newNode;
            newNode->next=temp;

        }
    }
    
}


int main(){
    //linked list creation
    vector<int> arr ={1,2,3,4,5};
    Node* head=convetArr2LL(arr);
    Node*head2 = insertHead(head, 0);
    Node*head3 = insertTail(head,6);
    Node*head4 = insertAtK(head4,9,3);

//  cout<<head<<endl //this will print the memory address of the data
    // cout<<head->data<<endl; //this will print "1" the head or the fist data in the list only
    // printList(head);
    // printList(head2);
    printList(head4);





}