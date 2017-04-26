//
// Created by georg on 4/24/2017.
//

#include "FigureCollection.h"
#include <iostream>
FigureCollection::FigureCollection() {
    numberOfEntries = 0;
    maxEntries = 4;
    collection = new Figure*[maxEntries];
}


FigureCollection::~FigureCollection() {
    for (unsigned int i = 0; i < numberOfEntries; ++i)
        delete collection[i];
    delete[] collection;
}

void FigureCollection::addEntry(Figure *figure)
{
    figure->print();
    if (numberOfEntries == maxEntries)
    {
        Figure** temp = new Figure*[maxEntries * 2];
        for (unsigned int i = 0; i < numberOfEntries; ++i)
        {
            temp[i] = collection[i];
        }
        temp[numberOfEntries] = figure;
        delete[] collection;
        collection = temp;
        numberOfEntries++;
        maxEntries *= 2;
        return;
    }
    collection[numberOfEntries++] = figure;
    //Rosti slab si.
}
void FigureCollection::printToConsole() const{
    for (unsigned int i = 0; i < numberOfEntries; ++i)
    {
        std::cout << i + 1;
        collection[i]->print();
    }
}