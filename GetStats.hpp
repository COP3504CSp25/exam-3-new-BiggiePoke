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

    int* getStats() const{
        if(head == nullptr){
            int* arr = new int[3];
            arr[0] = 0;
            arr[1] = 0;
            arr[2] = 0;
            return arr;
        }
        
        int* arr = new int[3];
        Node* temp = head;
        int min = temp->data;
        int max = temp->data;
        int mean = 0;
        int sum = 0;
        int numNodes = 0;
        while (temp != nullptr){
            if (temp->data < min){
                min = temp->data;
            }
            if (temp->data > max){
                max = temp->data;
            }
            sum += temp->data;
            numNodes++;
            temp = temp->next;
        }
        mean = sum/numNodes;
        arr[0] = min;
        arr[1] = max;
        arr[2] = mean;
        return arr;

    }
    

private:
    Node* head = nullptr;
};
