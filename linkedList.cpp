#include<iostream>

using namespace std;


struct Node{


    int data;
    struct Node* Next;
};

void push(struct Node** head, int data){
    struct Node* newNode = new Node;
    newNode->data = data; 
    newNode->Next = (*head);
    (*head) = newNode; 

};

void insertAfter(struct Node* prev, int data) {
    if (prev == NULL) {
        cout << "The given previous node cannot be NULL";
        return;
    }
    struct Node* newNode = new Node;
    newNode->data = data;
    newNode->Next = prev->Next;
    prev->Next = newNode;
};

void append(struct Node** head , int data ) {
    struct Node* newNode = new Node; 
    newNode->data = data; 
    newNode->Next = NULL;
    if(*head == NULL){
        (*head) = newNode;
        return ;
    }
    struct Node* last = (*head); 
    while(last->Next != NULL){
        last = last->Next;
    }
    last->Next = newNode;
};
void display(struct Node* node){
    while(node != NULL){
        cout<<node->data<<" ";
        node = node->Next;
    }
}



int main(){
   struct Node* head = NULL; 
   push (&head, 3);
   push (&head, 2);
   push (&head, 1);
   insertAfter
   (head->Next, 4);

   display(head);
   cout<<endl;












    return 0; 
}