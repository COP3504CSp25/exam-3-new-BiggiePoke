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
        for (int i = 0 ; i < size ; i ++){
            
        }

    }

    Node* head = nullptr;
};
