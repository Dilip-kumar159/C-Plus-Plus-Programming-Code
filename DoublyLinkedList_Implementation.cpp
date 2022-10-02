// Doubly Linked List Implementation in Insertion and Deletion
#include<iostream>

using namespace std;

class Node{
    public : 
    int data;
    Node * next;
    Node * prev;

    // Constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }

    // Destructor
    ~Node(){
        int val = this->data;

        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Memory free for the node with value : "<<val<<endl;
    }
};

// Insert in Head
void insertAtHead(Node * &head, Node * &tail, int data){

    if(head == NULL){
        Node * temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else{
        Node * temp = new Node(data);
        temp->next = head;
        head-> prev = temp;
        head = temp;
    }
    
}

// Insertion at End
void insertAtTail(Node * &tail,Node * &head, int d){

    if(tail == NULL){
        Node * temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else{
        Node * temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }    
}

// Insertion at any of the middle position
void insertMiddle(Node * &head, Node* &tail, int pos, int d){

    // if position is at first
    if(pos == 1){
        insertAtHead(head,tail,d);
        return;
    }

    Node * temp = head;
    int count = 1;
    
    while(count < pos-1){
        temp = temp->next;
        count++;
    }

    // if position is at last
    if(temp->next == NULL){
        insertAtTail(tail,head,d);
        return;
    }

    // Insertion at middle in any position
    Node * newNode = new Node(d);
    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;
}

// Deletion in Doubly Linked list
void deleteNode(Node * &head, Node * &tail, int pos){

    // deleting in first Node
    if(pos == 1){
        Node * temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }

    // Deleting in Middle
    else{

        Node * cur = head;
        Node * prev = NULL;

        int cnt = 1;
        while(cnt < pos){
            prev = cur;
            cur = cur->next;
            cnt++;
        }
        // Deleting in Last node
        if(cur->next == NULL){
            cur->prev = NULL;
            tail = prev;
        }
        cur->prev = NULL;
        prev->next = cur->next;
        cur->next = NULL;
        delete cur;

    }

}
void print(Node * &head){

    Node * temp = head;

    while(temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int getLength(Node * &head){

    Node * temp = head;
    int len = 0;

    if(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;
}
int main(){
    
    Node * head = NULL;
    Node * tail = NULL;
    
    print(head);
    cout<<"length : "<<getLength(head)<<endl;

    insertAtHead(head,tail, 19);
    print(head);

    insertAtTail(tail,head,299);
    print(head);

    insertAtTail(tail,head, 17);
    print(head);

    insertAtHead(head, tail, 100);
    print(head);

    insertMiddle(head,tail,3,599);
    print(head);

    insertMiddle(head,tail,1,901);
    print(head);

    insertMiddle(head,tail,7,434);
    print(head);

    cout<<"Head : "<<head->data<<endl;    
    cout<<"Tail : "<<tail->data<<endl;    

    deleteNode(head,tail,7);
    print(head);
    cout<<"Head : "<<head->data<<endl;    
    cout<<"Tail : "<<tail->data<<endl;   

    return 0;
}