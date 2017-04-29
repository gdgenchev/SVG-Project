//
// Created by georg on 4/24/2017.
//

#include "FigureCollection.h"
#include <iostream>
#include <sstream>
FigureCollection::FigureCollection() {
    defaultConstructor();
}
void FigureCollection::defaultConstructor() {
    numberOfEntries = 0;
    maxEntries = 4;
    collection = new Figure *[maxEntries];
}

FigureCollection::~FigureCollection() {
    for (unsigned int i = 0; i < numberOfEntries; ++i)
        delete collection[i];
    delete[] collection;
}

void FigureCollection::addEntry(Figure *figure)
{
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
}
void FigureCollection::printToConsole() const{
    for (unsigned int i = 0; i < numberOfEntries; ++i) {
        std::cout << i + 1;
        collection[i]->print();
    }
}

int FigureCollection::getID() const{
    return numberOfEntries;
}

void FigureCollection::erase(unsigned int id) {
    numberOfEntries--;
    for(int i = id; i <= numberOfEntries; i++)
        collection[i-1] = collection[i];
}

void FigureCollection::translate(std::string line) {
        for(int i = 0; i < numberOfEntries; i++)
            collection[i]->translate(line);
}
