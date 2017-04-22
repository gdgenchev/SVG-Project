//
// Created by georg on 4/22/2017.
//

#ifndef SVG_PROJECT_FMI_RECTANGULAR_H
#define SVG_PROJECT_FMI_RECTANGULAR_H
#include<string>
#include "Figure.h"
class Rectangle : public Figure {
    double x,y,width,height;
public:
    void setInfo(std::string line);
    void print() const;
};


#endif //SVG_PROJECT_FMI_RECTANGULAR_H