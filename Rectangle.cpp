//
// Created by georg on 4/22/2017.
//

#include "Rectangle.h"
#include <iostream>
#include <sstream>
#include <cstring>
#include <cstdlib>

Rectangle::Rectangle() {
   x = y = width = height = 0;
}

void Rectangle::setInfo(std::string line) {
    std::string word;
    std::istringstream inputStream(line);
    while (inputStream >> word) {
        if (word.find("x=") != std::string::npos) {
            std::string number;
            for (int i = 3; i < word.size() - 1; i++) {
                number += word[i];
            }
            x = atof(number.c_str());
        }
        if (word.find("y=") != std::string::npos) {
            std::string number;
            for (int i = 3; i < word.size() - 1; i++) {
                number += word[i];
            }
            y = atof(number.c_str());
        }
        if (word.find("width=") != std::string::npos) {
            if(word.find("-width") == std::string::npos) {
                std::string number;
                for (int i = 7; i < word.size() - 1; i++) {
                    number += word[i];
                }
                width = atof(number.c_str());
            }
        }
        if (word.find("height=") != std::string::npos) {
            std::string number;
            for (int i = 8; i < word.size() - 1; i++) {
                number += word[i];
            }
            height = atof(number.c_str());
        }
    }
    Figure::setInfo(line);
}

void Rectangle::print() const {
    std::cout << ". rectangle " << x << ' ' << y << ' ' << width << ' ' << height << ' ';
    Figure::print();
}

void Rectangle::create(std::string line) {
    std::string word1;
    double number1;
    double number2;
    double number3;
    double number4;
    int number5;
    std::string word2;
    std::string word3;
    std::string line_copy = line;
    std::istringstream inputStream(line);
    while (inputStream >> word1 >> number1 >> number2 >> number3 >> number4 >> word2 >> word3 >> number5) {
        x = number1;
        y = number2;
        width = number3;
        height = number4;
        fill = word2;
        stroke = word3;
        strokeWidth = number5;
    }
}

void Rectangle::translate(std::string line) {
    std::string number[2];
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
    x += atof(number[0].c_str());
    y += atof(number[1].c_str());
}

void Rectangle::printToFile(std::ofstream &os) {
        os << "  <rect x=\"" << x << "\" y=\"" << y << "\" width=\"" << width << "\" height=\"" << height << "\"\n";
        Figure::printToFile(os);
}


