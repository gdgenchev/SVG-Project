//
// Created by georg on 4/22/2017.
//

#ifndef SVG_PROJECT_FMI_FIGURE_H
#define SVG_PROJECT_FMI_FIGURE_H
#include <string>
#include <fstream>
#include <string>
using std::string;
class Figure {
protected:
    std::string fill;
    std::string stroke;
    int strokeWidth;
    virtual void setInfo(std::string line);
public:
    Figure();
    virtual void print() const;
    virtual void translate(std::string line);
    virtual void printToFile(std::ofstream& os);
    virtual bool isInsideRect (double, double, double, double){};
    virtual bool isInsideCirc (double, double, double){};
};


#endif //SVG_PROJECT_FMI_FIGURE_H
