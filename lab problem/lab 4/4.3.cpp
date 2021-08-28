#include "Stack.h"
#include <bits/stdc++.h>

using namespace std;

int main() {
    auto *sourceStack = new Stack <int>;
    auto *ReversStack = new Stack <int>;
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
        if (sourceStack->peek()==NULL|| sourceStack->peek()!=NULL){
            ReversStack->push(sourceStack->peek());
            sourceStack->pop();
        }
    }
    ReversStack->display();
    return 0;
}
