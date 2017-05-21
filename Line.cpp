//
// Created by georg on 4/22/2017.
//

#include "Line.h"
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <cstring>

Line::Line(){
    x1 = y1 = 0;
    x2 = y2 = 100;
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
        if(word.find("stroke=") != std::string::npos){
            std::string color;
            for (int i = 8; i < word.size() - 1; i++)
                color += word[i];
            stroke = color;
        }

    }
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

void Line::translate(std::string line) {
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
    x1 += atof(number[0].c_str());
    y1 += atof(number[1].c_str());
    x2 += atof(number[0].c_str());
    y2 += atof(number[1].c_str());
}

void Line::printToFile(std::ofstream &os) {
        os << "  <line x1=\"" << x1 << "\" y1=\"" << y1 << "\" x2=\"" << x2 << "\" y2=\"" << y2 << "\"\n";
        os << "\t\tstroke=\"" << stroke << "\" stroke-width=\"" << strokeWidth << "\" />\n";
        os << std::endl;
}

bool Line::isInsideRect(double x, double y, double width, double height) {
    if((x1 - strokeWidth > x && y1 - strokeWidth > y)
       && (x2 - strokeWidth > x && y2 - strokeWidth > y)) {
            if ((x1 + strokeWidth < x + width && y1 + strokeWidth < y + height
                 && (x2 + strokeWidth < x + width && y2 + strokeWidth < y + height))
                        return true;
    }
    return false;
}

bool Line::isInsideCirc(double cx, double cy, double r){
        //TO DO
    return ((x1 - cx) * (x1 - cx)) + ((y1 - cy) * (y1 - cy)) < r * r
           && ((x2 - cx) * (x2 - cx)) + ((y2 - cy) * (y2 - cy)) < r * r;
}
