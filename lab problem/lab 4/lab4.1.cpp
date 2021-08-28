#include "Stack.h"
#include <bits//stdc++.h>

using namespace std;
int main(){
    auto *sourceStack = new Stack <int>;
    auto *tempStack = new Stack <int>;
    auto *copyStack = new Stack <int>;
    int data,number;
    cout << "How many data you want to push"<<endl;
    cin>>number;
    cout<<"Enter data" << endl;
    for (int i = 0; i < number; ++i) {
        cin>>data;
        sourceStack->push(data);
    }
    sourceStack->display();
    cout<<endl<<"---------**---------"<<endl;
    for (int i = 0; i < number; ++i) {
        if (sourceStack->peek() !=NULL || sourceStack->peek() ==NULL)
        //if we did not use || sourceStack->peek() ==NULL than if the value is 0 it did not copy it
            {
            tempStack->push(sourceStack->peek());
           sourceStack->pop();
        }
    }
    for (int i = 0; i < number; ++i) {
        if (tempStack->peek()!=NULL|| tempStack->peek()==NULL){
            copyStack->push(tempStack->peek());\
            tempStack->pop();
        }
    }

    delete tempStack;
    copyStack->display();
   // sourceStack->display();
}