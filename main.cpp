#include <iostream>
#include "GetStats.hpp"

int main(){
    LinkedList list;

    list.addHead(10);
    list.addHead(2);
    list.addHead(3);
    list.addHead(3);
    list.addHead(3);
    list.addHead(3);
    list.addHead(3);
    int* arr = list.getStats();

    for ( int i = 0 ; i < 3 ; i++){
        std::cout << arr[i] << std::endl;
    }
    
    
    
    return 0;
}