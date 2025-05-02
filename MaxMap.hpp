#pragma once

#include <algorithm>
#include <map>
#include <string>
#include <vector>

float consultMax(const std::string& search_term, const std::map<std::string, std::vector<float>>& data) {
    std::vector<float> vector = data.at(search_term);
    float max = 0;
    for (int i = 0; i < vector.size() ; i ++){
        if (vector[i] > max){
            max = vector[i];
        }
    }
    return max;
}

std::map<std::string, float> returnMaxMap(const std::map<std::string, std::vector<float>>& in_map) {
    std::map<std::string , float> newMap;
    for (auto i = in_map.begin() ; i != in_map.end() ; i++){
        newMap[i->first] = consultMax(i -> first , in_map);
    }
    return newMap;
}