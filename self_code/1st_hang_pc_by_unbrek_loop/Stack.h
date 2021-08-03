#include"Node.h"
template <typename T>
//#define MAX 1000
class Stack {
public:

    Node<T> *head= NULL;
    Node<T> *temp = NULL;
    Node<T> *newdata= NULL;
   void push(T data){
       newdata = new Node<T>(data);
       if(head==NULL){
           head=newdata;
       } else{
           temp =head;
           head=newdata;
           head->next=temp;
       }
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
       }delete(temp);
   }
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
};