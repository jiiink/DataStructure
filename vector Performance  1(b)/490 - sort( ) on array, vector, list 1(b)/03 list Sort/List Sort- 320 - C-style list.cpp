#include <bits/stdc++.h>
#define Outlist(msg,lx)  cout<< "\n " << msg<<" : " ; for(auto w : lx ) cout<< " " << w ;
using namespace std;


// 실제 원소에 pointer를 달아서 low-level로 만들어 봄. C-style list

struct Node {
   int data;
   struct Node *prev;
   struct Node *next;
};

struct Node* head = NULL;

void insert(int newdata) {
   struct Node* newnode = (struct Node*) malloc(sizeof(struct Node));
   newnode->data  = newdata;
   newnode->prev = NULL;
   newnode->next = head;
   if(head !=  NULL)
      head->prev = newnode ;
   head = newnode;
}

void display() {
   struct Node* ptr;
   ptr = head;
   while(ptr != NULL) {
      cout<< ptr->data <<" ";
      ptr = ptr->next;
  }
}

int main() {
   insert(3);
   insert(1);
   insert(7);
   insert(2);
   insert(9);
   cout<<"The doubly linked list is: ";
   display();
   return 0;
}
