#include <iostream>
#include <vector>

using namespace std;

class Node {

    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){

        data = data1;
        next = next1;
    }

    Node(int data1){
        data= data1;
        next = nullptr;
    }
};


Node* convertArr2LL(vector<int> &arr){

    Node* head = new Node(arr[0]);

    Node* moverHead = head;

    for(int i =1 ; i< arr.size(); i++){

        Node* tempNode = new Node(arr[i]);

        moverHead -> next = tempNode;

        moverHead = tempNode;

    }


    return head;


}


void print(Node* head){

    Node* moverHead = head;


    while(moverHead != NULL){

        cout<< moverHead -> data << " -> ";

        moverHead = moverHead -> next;

    }

    cout<<"NULL";

    cout<< '\n';


}

Node* insertHead(Node* head, int value){

    Node* newNode = new Node(value);

    newNode -> next = head;

    head = newNode;

    return head;
}

Node* insertTail(Node* head, int value){

    Node* moverHead = head;

    while(moverHead -> next != NULL){

        moverHead = moverHead -> next;

    }

    Node* newNode = new Node(value);

    moverHead -> next = newNode;


    return head;


}


Node* insertKthNode(Node* head, int value, int k){

    Node* moverHead = head;


    int count  = 0;


    while(moverHead){

        count++;

        if(count == k - 1){

            Node* temp = moverHead -> next;

            Node* newNode = new Node(value);

            moverHead ->next = newNode;

            newNode -> next = temp;

        }

        moverHead = moverHead ->next;
    }


    return head;


}



int main(){


 vector<int> arr ={1,2,3,4,5};


 Node* head = convertArr2LL(arr);

 Node* head2 = insertHead(head, 0);

 Node* head3 = insertTail(head2, 6);

 Node* head4 = insertKthNode(head3, 9, 4);

 print(head4);







}