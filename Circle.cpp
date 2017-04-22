//
// Created by georg on 4/22/2017.
//

#include "Circle.h"
#include <cstdlib>
#include <sstream>
#include <iostream>
void Circle::setInfo(std::string line) {
    std::string word;
    std::string line_copy = line;
    std::istringstream inputStream(line);
    while (inputStream >> word) {
        if (word.find("cx=") != std::string::npos) {
            std::string number;
            for (int i = 4; i < word.size() - 1; i++) {
                number += word[i];
            }
            cx = atof(number.c_str());
        }
        if (word.find("cy=") != std::string::npos) {
            std::string number;
            for (int i = 4; i < word.size() - 1; i++) {
                number += word[i];
            }
            cy = atof(number.c_str());
        }
        if (word.find("r=") != std::string::npos) {
            std::string number;
            for (int i = 3; i < word.size() - 1; i++) {
                number += word[i];
            }
            r = atof(number.c_str());
        }
    }
    Figure::setInfo(line_copy);
}

void Circle::print() const {
    std::cout << ". circle " << cx << ' ' << cy << ' ' << r <<' ';
    Figure::print();
}
