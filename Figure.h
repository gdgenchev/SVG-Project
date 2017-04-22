//
// Created by georg on 4/22/2017.
//

#ifndef SVG_PROJECT_FMI_FIGURE_H
#define SVG_PROJECT_FMI_FIGURE_H
#include <string>

class Figure {
protected:
    std::string fill;
    std::string stroke;
    int strokeWidth;
    virtual void setInfo(std::string line);
public:
    virtual void print() const;
};


#endif //SVG_PROJECT_FMI_FIGURE_H
