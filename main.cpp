#include <iostream>
#include "MaxMap.hpp"

int main(){
    std::map<std::string, std::vector<float>> map;
    std::vector<float> vector = {1,2,3};
    map.emplace("beavus", vector);
    
   std::cout << consultMax("beavus" , map) << std::endl;
   
   std::cout << returnMaxMap( map)["beavus"] << std::endl;
    
    
    
    return 0;
}