#include"Node.h"
template <typename T>
#define MAX 1000
class Stack {
public:

    Node<T> *head= NULL;
    Node<T> *temp = NULL;
    Node<T> *newdata= NULL;
    int flage = 0;
   void push(T data){
       newdata = new Node<T>(data);
       if(head==NULL){
           head=newdata;
       } else{
           temp =head;
           head=newdata;
           head->next=temp;
       }
       flage++;
   }
   void pop(){
       Node<T> *temp2 = NULL;
       temp = head;
       if (temp ==NULL){
           cout<<"Your list is Null"<<endl;
       } else{
           temp = head;
           temp2 = temp->next;
           head = temp2;
           flage--;
       }delete(temp);
   }
  /* void tevers(){
       temp = head;
       temp = temp->next;
   }*/

   void display(){
       temp = head;
       while (temp != NULL){
           cout<<temp->data<<"->";
           temp= temp->next;
       }
   }
   int peek(){
       if (head !=NULL){
           return head->data;
       }
   }
   int Flage(){
       return flage;
   }
   T top(){
       if (head!=NULL){
           return head->data;
       } else{
           return NULL;
       }
   }
};