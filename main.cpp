#include <iostream>
#include "ReverseList.hpp"

int main(){
    LinkedList list;

    
    list.addHead(1);
    list.addHead(2);
    list.addHead(3);

    LinkedList newlist = list.reverseList();

    Node* temp = newlist.head;

    while (temp != nullptr){
        std::cout << temp->data << std::endl;
        temp = temp->next;
    }
    
    
    return 0;
}