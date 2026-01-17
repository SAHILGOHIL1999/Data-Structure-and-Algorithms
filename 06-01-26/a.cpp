#include <iostream>

using namespace std;

class Node{
  public:
  int data;
  Node* next;

  Node(int val){
    data = val;
    next = NULL;
  }
};

// insert at the end


void insert(Node* &head , int val){

  // constructor

  Node* newNode = new Node(val);

  if(head == NULL){
    head = newNode;
    return;
  }

  Node* temp = head;

  while(temp->next != NULL){
    temp = temp->next;
  }

  temp->next = newNode;

}

// display list

void display(Node* head){
  while(head != NULL){
    cout << head->data << "->";
    head = head->next;
  }
}

int main(){
  Node* head = NULL;

  insert(head , 10);
  insert(head , 20);
  insert(head , 30);
  insert(head , 40);
  insert(head , 50);

  display(head);

  return 0;
}