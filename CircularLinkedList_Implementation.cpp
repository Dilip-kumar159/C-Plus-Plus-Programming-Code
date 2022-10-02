// Insertion , Deletion and Traversing of a Linked List
#include<iostream>
#include<map>

using namespace std;

class Node{

    public:
    int data;
    Node * next;

    // Consturctor
    Node(int d){
        this->data = d;
        this->next = next;
    }

    // Destructor 
    ~Node(){
        int val = this->data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Memory is free for this node with data : "<<val<<endl;
    }
};

// Insertion in Circular Linked List
void insert(Node * &tail, int element, int d){
    // Case : 1 --> Empty list
    if(tail == NULL){
        Node * newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else{
        // Non-Empty List
        Node* cur = tail;
        while(cur->data != element){
            cur = cur->next;
        }
        // after this while loop will get cur and we need to insert after that node

        Node * temp = new Node(d);
        temp->next = cur->next;
        cur->next = temp;
    }

}
// Deletion in Circular Linked List
void deleteNode(Node * &tail, int val){
    // empty list
    if(tail == NULL){
        cout<<"List is empty!"<<endl;
        return;
    }
    else{
        // Assuming that the value is present in the linked list
        Node * prev = tail;
        Node * cur = prev ->next;

        while(cur->data != val){
            prev = cur;
            cur = cur->next;
        }

        prev->next = cur->next;

        // handling 1 node linked list
        if(cur == prev){
            tail = NULL;
        }
        // the cur value is pointing to tail
        else if(tail == cur){
            tail = prev;
        }
        cur->next = NULL;
        delete cur;
    }
}
// Checking if the given Linked List is present  or Not.
bool isPresent(Node * head){

    if(head == NULL){
        return true;
    }

    if(head->next == NULL){
        return false;
    }

    Node * temp = head->next;

    while(temp != head && temp != NULL){
        temp = temp->next;
    }

    if(temp == head){
        return true;
    }
    else{
        return false;
    }
}
// For traversing the circular Linked List 
void print(Node * tail){
    Node* temp = tail;
    
    if(tail == NULL){
        cout<<"List is Empty"<<endl;
        return;
    }
    do{
        cout<<tail->data<<" ";
        tail = tail->next;
    }while(tail != temp);
    cout<<endl;
}

// for Detecting whether the loop is present or not.
// bool detectLoop(Node * head){ // Here TC -> O(n), SC -> O(n)// map data is structure is used.

//     if(head == NULL)
//     return false;

//     map<Node * , bool> visited;

//     Node * temp = head;

//     while(temp != NULL){
//         // cycle is present

//         if(visited[temp] == true){
//         return true;
//         }

//         visited[temp] = true;
//         temp = temp ->next;
//     }
//     return false;
// }

// Optmizied code where TC -> O(n), SC-> O(1)
// Using Floyd's Detect Algorithm , fast and slow pointer
Node * floydDetect(Node * head){

    if(head == NULL)
    return NULL;

    Node* slow = head;
    Node * fast = head;

    while(slow != NULL && fast != NULL){
        fast = fast -> next;
        if(fast != NULL){
            fast = fast -> next;
        }
        slow = slow-> next;
        if(slow == fast){
            cout<<"Present At "<<slow->data<<endl;
            return slow;
        }
    }
    return NULL;
}
// Get Starting Node where the loop starts
Node* getStartingNode(Node * head){

    if(head == NULL){
        return NULL;
    }

    Node* intersection = floydDetect(head);
    Node * slow = head;

    while(slow != intersection){
        slow = slow -> next;
        intersection = intersection -> next;
    }
    return slow;
}
int main()
{
    Node * tail = NULL;
    
    insert(tail,1,34);
    print(tail);

    insert(tail,34,30);
    print(tail);
 
    insert(tail,30,89);
    print(tail);

    insert(tail,89,100);
    print(tail);

 /*  insert(tail,34,900);
    print(tail);

    insert(tail,100,1);
    print(tail);

    insert(tail,30,8);
    print(tail);

   deleteNode(tail, 34);
   print(tail); */

    bool present = isPresent(tail);
    if(present){
        cout<<"The Linked List is circular "<<endl;
    }
    else{
        cout<<"The Linked List is Not circular "<<endl;   
    }

    // bool loop = detectLoop(tail);
    // if(loop){
    //     cout<<"The Linked list contains Loop "<<endl;
    // }
    // else{
    //     cout<<"The Linked list doesn't contain any Loop "<<endl; 
    // }
    
    if(floydDetect(tail) != NULL){
        cout<<"The Linked list contains Loop "<<endl;
    }
    else{
        cout<<"The Linked list doesn't contain any Loop "<<endl; 
    }

    Node * loop = getStartingNode(tail);
    cout<<"Starting at "<<loop->data<<endl;

    return 0;
}