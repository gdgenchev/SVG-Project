//
// Created by georg on 4/22/2017.
//

#include "Circle.h"
#include <cstdlib>
#include <sstream>
#include <iostream>
#include <cmath>
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

void Circle::create(std::string line) {
    std::string word1;
    double number1;
    double number2;
    double number3;
    int number4;
    std::string word2;
    std::string word3;
    std::string line_copy = line;
    std::istringstream inputStream(line);
    while (inputStream >> word1 >> number1 >> number2 >> number3 >> word2 >> word3 >> number4) {
        cx = number1;
        cy = number2;
        r = number3;
        fill = word2;
        stroke = word3;
        strokeWidth = number4;


    }
}

void Circle::translate(std::string line) {
    std::string number[100];
    int t = 0;
    for (int i = 0; i < line.size(); i++) {
        if (line[i] >= '0' && line[i] <= '9') {
            int p = i;
            while (line[p] >= '0' && line[p] <= '9') {
                number[t] += line[p++];
            }
            i = p;
            t++;
        }
    }
     cx += atof(number[0].c_str());
     cy += atof(number[1].c_str());
}
