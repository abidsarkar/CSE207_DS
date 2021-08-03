#include <iostream>
#include "Node.h"

using namespace std;

class SLL {
public:
    Node *head = NULL;
    Node *newData = NULL;
    Node *tail = NULL;
    //creation a linked list
    //at last node
    void creatAtLast(int data) {
        newData = new Node(data);//memory alloceted
        if (head == NULL) {
            head = newData;
            tail = newData;
        } else {
            tail->next = newData;
            tail = newData;
        }

    }
    void createAtFirst(int data) {
        newData = new Node(data);
        if (head == NULL) {
            head = newData;
            tail = newData;
        } else {
            Node *temp = head;
            head = newData;
            newData->next = temp;

        }
    }
    void creatAtAnyPosition(int data , int position) {
        // newData = new Node(data);
        if (position >= size()) {
            cout << "position is greater then the size of list" << endl;
        } else if (position == 0) {
            createAtFirst(data);
        } else if (position == size() - 1) {
            creatAtLast(data);
        } else {
            newData = new Node(data);
            Node *temp = head;
            for (int i = 0; i < position - 1; ++i) {
                temp = temp->next;
            }
            newData->next = temp->next;
            temp->next = newData;
        }
    }
    void Display() {
        Node *temp = head;
        while (temp != NULL) {
            cout << temp->data << "-> ";
            temp = temp->next;
        }
        cout << endl;
    }
    bool boolContains(int value) {
        Node *temp = head;
        while (temp != NULL) {

            if (temp->data == value) {
                return true;
                // cout << "yes" << endl;
            }
            temp = temp->next;
        }
        return false;
    }
    int size() {
        Node *temp = head;
        int count = 0;
        while (temp != NULL) {
            temp = temp->next;
            count++;
        }
        return count;
    }
    bool boolIsEmpty() const {
        Node *temp = head;
        if (temp == NULL)
            return true;
        else return false;
    }
    void displyOneNode(int position) {
        Node *temp = head;
        for (int i = 0; i < position; ++i) {
            temp = temp->next;
        }
        cout << "your data is = " << temp->data << endl;
    }
    void valuePosition(int value) {
        Node *temp = head;
        int count;
        for (int i = 0; i < size(); ++i) {
            temp = temp->next;
            count = i;
            if (value == temp->data) {
                break;
            }
        }
        cout << "your position is = " << count << endl;
    }
    //delete from last
    void deleteFromLast() {
        Node *temp = head;
        for (int i = 0; i < size() - 2; ++i) {
            temp = temp->next;
            // Display(); //to test
        }
        delete temp->next;
        temp->next = NULL;
    }
    void deleteFrom1st() {
        Node *temp = head->next;
        delete head;
        head = temp;
    }
    void deleteFromAnyPosition(int position) {
        Node *temp = head;
        Node *temp2 = NULL;
        if (position >= size()) {
            cout << "the position did not found" << endl;
        } else if (position == 0) {
            deleteFrom1st();
        } else if (position == size() - 1) {
            deleteFromLast();
        } else {
            for (int i = 0; i < position; ++i) {
                temp2 = temp;
                temp = temp->next;
            }
            temp2->next = temp->next;
            delete temp;

        }
    }
    void reverse() {
        Node *temp = head;
        Node *prev = NULL;
        Node *TempNext = NULL;
        while (temp != NULL) {
            TempNext = temp->next;
            temp->next = prev;
            prev = temp;
            temp = TempNext;
        }
        head = prev;
        Display();
    }
    void sort() {
        //implements from asif{
        Node *firstData = head;
        Node *secondData = head;          //secondData will be compared with firstData
        while (firstData->next != NULL) {           // firstData will travel all the data
            secondData = firstData->next;
            while (secondData != NULL) {     //secondData will travel after FirstData and compare
                if (firstData->data >
                    secondData->data) {     // comparing if data of secondData is greater than firstData
                    int swap = firstData->data;                        // If secondData is greater than firstData, swap between them
                    firstData->data = secondData->data;
                    secondData->data = swap;
                }
                secondData = secondData->next;
            }
            firstData = firstData->next;
        }
    }
};