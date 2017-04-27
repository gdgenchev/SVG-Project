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
	unsigned int numberOfEntries;
	unsigned int maxEntries;
public:
	FigureCollection();
	~FigureCollection();
    void defaultConstructor();
	void addEntry(Figure*);
    void printToConsole() const;
    int getID() const;
};


#endif //SVG_PROJECT_FMI_FIGURECOLLECTION_H
