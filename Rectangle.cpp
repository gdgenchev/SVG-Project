//
// Created by georg on 4/22/2017.
//

#include "Rectangle.h"
#include <iostream>
#include <sstream>
#include <cstring>
void Rectangle::setInfo(std::string line) {
    std::string word;
    std::istringstream inputStream(line);
    int number;
    std::cout << line << std::endl;
    while(inputStream >> word ){
        if(word.find("x=") != std::string::npos)
            std::cout << "X";
      //  std::cout << number << std::endl;
    }
   // std::cout << x;
}

void Rectangle::print() const {
    std::cout << "rectangle";
    Figure::print();
}
