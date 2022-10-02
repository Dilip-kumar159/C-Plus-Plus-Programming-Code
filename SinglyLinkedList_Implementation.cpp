// Singly Linked List Insertion At head and Tail
#include<iostream>
#include<map>

using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Memory is free for node with data "<<value<<endl;
    }
};

// Insertion At Starting named as Head
void insertAtHead(Node * &head, Node * &tail, int d){

    if(head == NULL){
        Node * temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
        Node * temp = new Node(d);
        temp -> next = head;
        head = temp;
    }
}

// Insertion at Ending named as Tail
void insertAtTail(Node * &tail, Node * &head, int d){

    if(tail == NULL){
        Node * temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else{
        Node * temp = new Node(d);
        tail -> next = temp;
        tail = temp;
    }
}

// Insertion At Middle of the Linked List
void insertAtMiddle(Node * &head, Node * &tail, int pos, int d){

    // Insertion At Starting
    if(pos == 1){
        insertAtHead(head,tail,d);
        return;
    }
    Node * temp = head;
    int count = 1;
    while(count < pos-1){
        temp = temp -> next;
        count++;
    }

    // Insertion At End
    if(temp-> next == NULL){
        insertAtTail(tail,head,d);
        return;
    }

    Node * newNode = new Node(d);
    newNode->next = temp->next;
    temp->next = newNode;

}

// Traversing through a Linked List
void print(Node * &head){
    Node* temp = head;

    while(temp != NULL){
        cout<< temp->data <<" ";
        temp = temp->next;
    }
    cout<<endl;
}

// Deletion in Linked List
void deleteNode(Node * &head, Node * &tail,  int pos){

    // Deleting a first Node
    if(pos == 1){
        Node * temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        // Deleting any middle node or last node
        Node* cur = head;
        Node* prev = NULL;
        int count = 1;
        while(count < pos-1){
            prev = cur;
            cur = cur -> next;
            count++;
        }

        if(cur->next == NULL){
            prev->next = cur->next;
           tail = prev;
        }
        prev->next = cur->next;
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
// For Checking whether the loop is present or not.
// bool detectLoop(Node * head){ // Here TC -> O(n), SC -> O(n)// map data is structure is used.
//     // Inorder to optmize the code we use Floyd's Cycle Detection Algorithm.
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

// Optimized code where TC -> O(n), SC -> O(1)
// using Floyd's Detect Algorithm , fast and slow pointer 
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

// for removing loop 
void removeLoop(Node * head){

    if(head == NULL){
        return;
    }

    Node* startOfLoop = getStartingNode(head);

    Node * temp = startOfLoop;
    while(temp->next != startOfLoop){
        temp = temp->next;
    }

    temp->next = NULL;
}
int main()
{
    // Starting and Ending Node is Null
    Node * head = NULL;
    Node* tail = NULL;

    // adding one more element in a node
   // print(head);

    //insertAtTail(tail,head,19);

    //print(head);
    
    insertAtTail(tail,head,27);

    print(head);

    insertAtHead(head,tail,48);

    print(head);


    insertAtHead(head,tail,93);

    print(head);

    insertAtHead(head,tail,100);

    print(head);

    tail->next = head->next->next;

   /* insertAtMiddle(head, tail, 4, 100);

    print(head);
    
   insertAtMiddle(head,tail,1,900);
    // deleteNode(head,tail,1);

    // print(head);
    // deleteNode(head,tail,5);
    insertAtMiddle(head,tail,6,599);

    print(head);
*/
    cout<<"Head -> "<<head->data<<endl;
    cout<<"Tail -> "<<tail->data<<endl;

    // bool present = isPresent(head);
    // if(present){
    //     cout<<"The Linked List is Circular "<<endl;
    // }
    // else{
        
    //     cout<<"The Linked List is Not Circular "<<endl;
    // }

    // bool loop = detectLoop(head);
    // if(loop){
    //     cout<<"The Linked list contains Loop "<<endl;
    // }
    // else{
    //     cout<<"The Linked list doesn't contain any Loop "<<endl; 
    // }

    if(floydDetect(head) != NULL){
        cout<<"Loop is present "<<endl;
    }
    else{
        cout<<"Loop is not present "<<endl;
    }

    Node * loop = getStartingNode(head);
    cout<<"Loop Starts at the Node : "<<loop -> data<<endl;

    removeLoop(head);
    print(head);
    
    return 0;
}