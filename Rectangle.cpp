//
// Created by georg on 4/22/2017.
//

#include "Rectangle.h"
#include <iostream>
#include <sstream>
#include <cstring>
#include <cstdlib>
void Rectangle::setInfo(std::string line) {
    std::string word;
    std::istringstream inputStream(line);
    //std::cout << line << std::endl;
    while (inputStream >> word) {
        if (word.find("x=") != std::string::npos) {
            std::string number;
            int t = 0;
            for (int i = 3; i < word.size() - 1; i++) {
                number[t++] = word[i];
            }
            x = atof(number.c_str());
        }
        if (word.find("y=") != std::string::npos) {
            std::string number;
            int t = 0;
            for (int i = 3; i < word.size() - 1; i++) {
                number[t++] = word[i];
            }
            y = atof(number.c_str());
        }
        if (word.find("width=") != std::string::npos) {
            if(word.find("-width") == std::string::npos) {
                std::string number;
                int t = 0;
                for (int i = 7; i < word.size() - 1; i++) {
                    number[t++] = word[i];
                }
                width = atof(number.c_str());
            }
        }
        if (word.find("height=") != std::string::npos) {
            std::string number;
            int t = 0;
            for (int i = 8; i < word.size() - 1; i++) {
                number[t++] = word[i];
            }
            height = atof(number.c_str());
        }


    }
    std::cout << x << ' ' << y << ' ' << width << ' ' << height;
}

void Rectangle::print() const {
    std::cout << "rectangle" << x << ' ' << y << ' ' << width << ' ' << height << ' ';
    Figure::print();
}
