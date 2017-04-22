//
// Created by georg on 4/22/2017.
//

#include "Line.h"
#include <cstdlib>
#include <iostream>
#include <sstream>
void Line::setInfo(std::string line) {
    std::string word;
    std::string line_copy = line;
    std::istringstream inputStream(line);
    while (inputStream >> word) {
        if (word.find("x1=") != std::string::npos) {
            std::string number;
            for (int i = 4; i < word.size() - 1; i++) {
                number += word[i];
            }
            x1 = atof(number.c_str());
        }
        if (word.find("y1=") != std::string::npos) {
            std::string number;
            for (int i = 4; i < word.size() - 1; i++) {
                number += word[i];
            }
            y1 = atof(number.c_str());
        }
        if (word.find("x2=") != std::string::npos) {
            std::string number;
            for (int i = 4; i < word.size() - 1; i++) {
                number += word[i];
            }
            x2 = atof(number.c_str());
        }
        if (word.find("y2=") != std::string::npos) {
            std::string number;
            for (int i = 4; i < word.size() - 1; i++) {
                number += word[i];
            }
            y2 = atof(number.c_str());
        }
        if (word.find("stroke=") != std::string::npos) {
            std::string color;
            for (int i = 8; i < word.size() - 1; i++) {
                color += word[i];
            }
            stroke = color;
        }
        if (word.find("stroke-width=") != std::string::npos) {
            std::string number;
            for (int i = 14; i < word.size() - 1; i++)
                number += word[i];
            strokeWidth = atoi(number.c_str());
        }
    }
}

void Line::print() const {
    std::cout << ". line (" << x1 << ',' << y1 << ") (" << x2 << ',' << y2 << ") " << stroke << ' ' << strokeWidth <<std::endl;
}