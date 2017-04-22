//
// Created by georg on 4/22/2017.
//

#ifndef SVG_PROJECT_FMI_CIRCLE_H
#define SVG_PROJECT_FMI_CIRCLE_H
#include "Figure.h"

class Circle : public Figure {
    double cx,cy,r;
public:
    void setInfo(std::string line);
    void print() const;
};


#endif //SVG_PROJECT_FMI_CIRCLE_H
