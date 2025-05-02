#pragma once

struct Node {
    int data;
    Node* next;
};

class LinkedList {
public:
    void addHead(const int data) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = head;
        head = newNode;
    }
    
    LinkedList reverseList() const {
        LinkedList reversedList;
        Node* temp = head;
        int size = 0;
        while(temp != nullptr){
            size ++;
            temp = temp->next;
        }
        temp = head;
        for (int i = size-1 ; i >= 0 ; i --){
            for (int j = 0 ; j < i ; j ++){
                temp=temp->next;
            }
            reversedList.addHead(temp->data);
            temp =head;
        }
        return reversedList;
    }

    Node* head = nullptr;
};
