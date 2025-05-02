#include <iostream>
#include "GetStats.hpp"

int main(){
    LinkedList list;

    
    int* arr = list.getStats();

    for ( int i = 0 ; i < 3 ; i++){
        std::cout << arr[i] << std::endl;
    }
    
    
    
    return 0;
}