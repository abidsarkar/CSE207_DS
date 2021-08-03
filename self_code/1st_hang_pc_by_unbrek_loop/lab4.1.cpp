#include "Stack.h"
int main(){
    Stack <int> *sourceStack = new Stack <int>;
    Stack <int> *tempStack = new Stack <int>;
    Stack <int> *copyStack = new Stack <int>;
    int data,number;
    cout << "How many data you want to push"<<endl;
    cin>>number;
    cout<<"Enter data" << endl;
    for (int i = 0; i < number; ++i) {
        cin>>data;
        sourceStack->push(data);
    }
    sourceStack->display();
    cout<<"---------**---------"<<endl;
   // copyStack->copystakinAdt(sourceStack->peek());
    /*for (int i = 0; i < number; ++i) {

    } */
   while (sourceStack->peek()!=NULL){
        tempStack->push(sourceStack->peek());

    }
    while (tempStack->peek()!=NULL){
        copyStack->push(tempStack->peek());
        tempStack->pop();
    }
    delete tempStack;
    //tempStack->display();
    copyStack->display();
}