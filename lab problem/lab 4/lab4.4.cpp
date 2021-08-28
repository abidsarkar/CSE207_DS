#include <iostream>
#include "Stack.h"
int oppress(char a){
    if (a=='^'){
        return 3;
    } else if (a== '*'||a=='/'){
        return 2;
    } else if (a=='-'||a=='+'){
        return 1;
    } else{
        return 0;
    };
}
using namespace std;
int main() {
    Stack<char> *s = new Stack<char>;
    string infix;
    cin>>infix;
    for (int i = 0; i < infix.size(); ++i) {
        if ((infix[i]>='A'&& infix[i]<='Z')||(infix[i]>='a'&& infix[i]<='z')){
            cout<<infix[i];
        } else{
            if (s->Flage()==0){
                s->push(infix[i]);
            } else{
                if (infix[i]=='('||infix[i]=='{'||infix[i]=='['){
                    s->push(infix[i]);
                } else if (infix[i]==')'){
                    while( s -> top() != '(' ) {
                         s -> pop();
                    }
                    s->pop();
                } else if (infix[i]=='}'){
                    while (s->top()!='{'){
                        s->pop();
                    }s->pop();
                } else{
                    if (oppress(infix[i])> oppress(s->top())){
                        s->push(infix[i]);
                    } else{
                        while (oppress(infix[i])<= oppress(s->top())&& s->Flage()!=0 && oppress(infix[i])>0){
                            s->pop();
                        }
                        s->push(infix[i]);
                    }
                }
            }
        }
        while (s->Flage()){
            s->pop();
        }
    }
    s->display();
    return 0;
}
