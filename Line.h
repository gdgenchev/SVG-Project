//
// Created by georg on 4/22/2017.
//

#ifndef SVG_PROJECT_FMI_LINE_H
#define SVG_PROJECT_FMI_LINE_H
#include "Figure.h"

class Line : public Figure {
    double x1,y1,x2,y2;
    int strokeWidth;
public:
    Line();
    void setInfo(std::string line);
    void print() const;
    void create(std::string line);
    void translate(std::string line);
};


#endif //SVG_PROJECT_FMI_LINE_H
