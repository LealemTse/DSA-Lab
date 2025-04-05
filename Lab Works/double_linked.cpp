//An array list

#include<iostream>
using namespace std;

//Defining the Node for the DLL
class Node{
    // Dont forget to make it public 
public:
    int data;
    Node* next;
    Node* prev;

    Node(int data1){
        data=data1;
        next=nullptr;
        prev=nullptr;
    }
};

//Converting the array into DLL
Node* conv2DLL(int arr[], int size){
    if(size==0) return nullptr;

    Node*head= new Node(arr[0]);
    Node*mover= head;

    for(int i=1;i<size;i++){
        //single linked list
        // mover->next=new Node(arr[i]);
        // mover=mover->next;
        Node *newNode = new Node(arr[i]);
        mover->next=newNode;
        //main diffrence
        newNode->prev=mover;
        mover=newNode;
    }
    return head;
    


}
//Printing the list forward
void printlist(Node*head){
    while(head!=nullptr){
        cout<<head->data<<"<->";
        head =head->next;
    }
    cout<<"NULL\n";
}

Node*insertHead(Node*head,int value){
    Node*newHead= new Node(value);
    newHead->next=head;
    if(head!=nullptr) head->prev=newHead;
    return newHead;
}
Node*insertTail(Node*head, int value){
    Node* newTail= new Node(value);
    if(head==nullptr) return newTail;
    Node*tempo=head;
    while(tempo->next!=nullptr){
        tempo=tempo->next;
    }
    tempo->next=newTail;
    newTail->prev=tempo;
    return head;
}
Node*insertK(Node*head, int k, int value){
    if(k<=1 ||head==0) return insertHead(head,value);
    Node*newK=new Node(value);
    Node* tempo=head;
    int count =1;
    while(tempo!=nullptr && count<k-1){
        tempo=tempo->next;
        count++;
    } 
    if(tempo==nullptr || tempo->next==nullptr) return insertTail(head, value);
    newK->next=tempo->next;
    newK->prev=tempo;
    tempo->next->prev=newK;
    tempo->next=newK;
    
    return head;
}
Node*deletHead(Node*head){
    if(head==nullptr) return nullptr;
    Node*tempo=head;
    head = head->next;
    if(head!=nullptr) head->prev=nullptr;
    delete tempo;
    return head;
}

Node*deletTail(Node*head){
    if(head->next==nullptr||head==nullptr) return nullptr;
    Node*tempo= head;
    while(tempo->next!=nullptr){
        tempo=tempo->next;
    }
    tempo->prev->next=nullptr;
    delete tempo;
    return head;
}

Node* deletk(Node*head, int k){
    if(k<=1 || head==nullptr) return deletHead(head);
    Node* tempo = head;
    int count =1;
    while (tempo!=nullptr && count<k-1){
     tempo=tempo->next;
     count++;   
    }
    if(tempo==nullptr) return head; //k is out of range;

    if(tempo->prev!=nullptr) tempo->prev->next=tempo->next;
    if(tempo->next!=nullptr) tempo->next->prev=tempo->prev;

    delete tempo;;
    return head;
     
}


int main(){
    int arr[]={10,20,30,40,50};
    // Dyanmic size
    int size= sizeof(arr)/sizeof(arr[0]);

    Node* head=conv2DLL(arr,size);
    printlist(head);
    
    Node*head1=insertHead(head,5);
    printlist(head1);
    
    Node*head2=insertTail(head1,55);
    printlist(head2);

    Node*head3=insertK(head2,4,25);
    printlist(head3);
    
    Node*head4=deletHead(head3);
    printlist(head4);
    
    Node*head5=deletTail(head4);
    printlist(head5);

    Node*head6=deletk(head5,4);
    printlist(head6);
}