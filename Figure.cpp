//
// Created by georg on 4/22/2017.
//

#include "Figure.h"
#include <iostream>
void Figure::setInfo(std::string line) {

}

void Figure::print() const {
    std::cout << fill << ' ' << stroke << ' ' << strokeWidth << std::endl;
}

