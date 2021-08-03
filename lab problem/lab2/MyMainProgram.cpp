#include <iostream>
#include "SLL.h"
using namespace std;
int main() {
    SLL *s1 = new SLL();
    while (1){
        cout<<"***********\n";
        cout<<"\nEnter 999 to end the loop"
            <<"\n1. Insert at last "<<endl
            <<"2. Insert at begin"<<endl
            <<"3. Insert at any position"<<endl
            <<"4. Bool contains"<<endl
            <<"5. Size"<<endl
            <<"6.Bool is empty"<<endl
            <<"7.return value of one position"<<endl
            <<"8. index of value"<<endl
            <<"9. Delete from beginning"<<endl
            <<"10. Delete from Last"<<endl
            //<<"8. Exit"<<endl
            <<"11.Deleting a particular node"<<endl
            <<"12. Revers "<<endl
            <<"13.sort"<<endl
            <<"77. Display"<<endl;
        int option,data,position,value;
        cout<<"Enter yur option: "<<endl;
        cin>>option;
        switch (option) {
            case 999:
                goto x;
                break;
            case 1://ok
                cout<<"Enter your data"<<endl;
                cin>>data;
                s1->creatAtLast(data);//use for loop might be
                break;
            case 2://ok
                cout<<"Enter your data"<<endl;
                cin>>data;
                s1->createAtFirst(data);
                break;
            case 3://ok
                cout<<"Enter the position(0 - "<<(s1->size()-1)<<" ):"<<endl;
                cin>>position;
                cout<<"Enter your data\n";
                cin >> data;
                s1->creatAtAnyPosition(data,position);
                break;
            case 4://ok
                cout<<"Fined the value on the list ? or not on the list"<<endl;
                cout<<"type your value"<<endl;
                cin>>value;
                if (s1->boolContains(value)){
                    cout<<"yes Data found"<<endl;
                } else{
                    cout<<"Data not found"<<endl;
                }
                break;


            case 5://ok
                cout<<"Show you the size="<<endl;
                cout<<s1->size();
                break;
            case 6://ok
                cout<<"Bool is empty or not"<<endl;
                s1->boolIsEmpty();
                if (s1->boolIsEmpty()){
                    cout<<"Bool is empty"<<endl;
                } else{
                    cout<<"Bool is not empty"<<endl;
                }
                break;
            case 77://ok
                cout<<"Your Data is"<<endl;
                s1->Display();
                break;
            case 7://ok
                cout<<"one position"<<endl;
                cout<<"the position from (0 -"<<s1->size()-1<<")"<<endl;
                cin>>position;
                s1->displyOneNode(position);
                break;
            case 8://ok
                cout<<"value position"<<endl;
                cin>>value;
                s1->valuePosition(value);
                break;

            case 9://ok
                cout<<"Delete from 1st\n";
                s1->deleteFrom1st();
                s1->Display();
                break;
            case 10://ok
                cout<<"Delete from last\n";
                s1->deleteFromLast();
                s1->Display();
                break;
            case 11://ok
                cout<<"Enter the position you want to delete"<<endl;
                cout<<"the position from (0 -"<<s1->size()-1<<")"<<endl;
                cin>>position;
                s1->deleteFromAnyPosition(position);
                s1->Display();
                break;
            case 12://ok
                cout<<"reverse"<<endl;
                s1->reverse();
                break;
            case 13:
                cout<<"sort"<<endl;
                s1->sort();
                break;

        }

    }
    x:
    return 0;
}
