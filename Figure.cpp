//
// Created by georg on 4/22/2017.
//

#include "Figure.h"
#include <iostream>
#include <sstream>
#include <cstdlib>
Figure::Figure() {
    fill = "unknown";
    stroke = "black";
    strokeWidth = 1;
}

void Figure::setInfo(std::string line) {
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

void Figure::create(std::string line) {
        std::string word1;
        double number1;
        double number2;
        double number3;
        double number4;
        std::string word2;
        std::string word3;
        int number5;
        std::istringstream inputStream(line);
        while (inputStream >> word1 >> number1 >> number2 >> number3 >> number4 >> word2 >> word3 >> number5) {
            fill = word2;
            stroke = word3;
            strokeWidth = number5;
        }
}
void Figure::translate(std::string line) {}

void Figure::printToFile(std::ofstream& os) {
    os << "\t\tfill=\"" << fill << "\" stroke=\"" << stroke << "\" stroke-width=\"" << strokeWidth << "\" />" << std::endl;
    os << std::endl;
}
