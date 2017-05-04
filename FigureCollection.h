//
// Created by georg on 4/24/2017.
//

#ifndef SVG_PROJECT_FMI_FIGURECOLLECTION_H
#define SVG_PROJECT_FMI_FIGURECOLLECTION_H
#include "Figure.h"
class FigureCollection
{
private:
	Figure **collection;
	unsigned int currentEntries;
	unsigned int maxEntries;
public:
	FigureCollection();
	~FigureCollection();
    void defaultConstructor();
	void addEntry(Figure*);
    void printToConsole() const;
    int getID() const;
	void erase(unsigned int id);
    void translate(std::string line);
    void printToFile(std::ofstream& newFile) const;
    void printWithin (std::string line);
};


#endif //SVG_PROJECT_FMI_FIGURECOLLECTION_H
