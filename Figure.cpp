//
// Created by georg on 4/22/2017.
//

#include "Figure.h"
#include <iostream>
#include <sstream>
#include <cstdlib>
void Figure::setInfo(std::string line) {
   // std::cout << line;
    std::string word;
    std::istringstream inputStream(line);
    while (inputStream >> word) {
        if(word.find("fill=") != std::string::npos) {
            std::string color;
            for (int i = 6; i < word.size() - 1; i++)
                color += word[i];
            fill = color;
        }
        if(word.find("stroke=") != std::string::npos) {
            std::string color;
            for (int i = 8; i < word.size() - 1; i++) {
                color += word[i];
            }
            stroke = color;
        }
    if(word.find("stroke-width=") != std::string::npos){
            std::string number;
            for (int i = 14; i < word.size() - 1; i++)
                number += word[i];
            strokeWidth = atoi(number.c_str());
        }
    }
}

void Figure::print() const {
    std::cout << fill << ' ' << stroke << ' ' << strokeWidth << std::endl;
}

