//
// Created by georg on 4/22/2017.
//

#include "Line.h"
#include <cstdlib>
#include <iostream>
#include <sstream>

Line::Line() {
    x1 = y1 = x2 = y2 = 0;

}

void Line::setInfo(std::string line) {
    std::string word;
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
        if(word.find("stroke-width=") != std::string::npos){
            std::string number;
            for (int i = 14; i < word.size() - 1; i++)
                number += word[i];
            strokeWidth = atoi(number.c_str());
        }

    }
    Figure::setInfo(line);
}

void Line::print() const {
    std::cout << ". line (" << x1 << ',' << y1 << ") (" << x2 << ',' << y2 << ") " << stroke << ' ' << strokeWidth <<std::endl;
}
void Line::create(std::string line) {
    std::string word1;
    double number1;
    double number2;
    double number3;
    double number4;
    std::string word2;
    int number5;
    std::istringstream inputStream(line);
    while (inputStream >> word1 >> number1 >> number2 >> number3 >> number4 >> word2 >> number5) {
        x1 = number1;
        y1 = number2;
        x2 = number3;
        y2 = number4;
        stroke = word2;
        strokeWidth = number5;
    }
}
