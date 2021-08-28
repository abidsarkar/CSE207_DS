#include "Stack.h"
#include <bits//stdc++.h>

using namespace std;
int main() {
    auto *sourceStack = new Stack<int>;
    auto *tempStack = new Stack<int>;
    auto *copyStack = new Stack<int>;
    int data;
    cin>>data;
    while(data>0){

        sourceStack->push(data%2);
        data = data /2;

    }
    sourceStack->display();


}