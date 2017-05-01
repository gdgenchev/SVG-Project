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
    currentEntries = 0;
    maxEntries = 4;
    collection = new Figure *[maxEntries];
}

FigureCollection::~FigureCollection() {
    for (unsigned int i = 0; i < currentEntries; ++i)
        delete collection[i];
    delete[] collection;
}

void FigureCollection::addEntry(Figure *figure) {
    if (currentEntries == maxEntries) {
        Figure** temp = new Figure*[maxEntries * 2];
        for (unsigned int i = 0; i < currentEntries; ++i) {
            temp[i] = collection[i];
        }
        temp[currentEntries] = figure;
        delete[] collection;
        collection = temp;
        currentEntries++;
        maxEntries *= 2;
        return;
    }
    collection[currentEntries++] = figure;
}
void FigureCollection::printToConsole() const{
    for (unsigned int i = 0; i < currentEntries; ++i) {
        std::cout << i + 1;
        collection[i]->print();
    }
}

int FigureCollection::getID() const{
    return currentEntries;
}

void FigureCollection::erase(unsigned int id) {
    currentEntries--;
    for(int i = id; i <= currentEntries; i++)
        collection[i-1] = collection[i];
}

void FigureCollection::translate(std::string line) {
    if(line[1] < '0' || line[1] > '9') {
        for (int i = 0; i < currentEntries; i++)
            collection[i]->translate(line);
    }
}

void FigureCollection::printToFile(std::ofstream& newFile) const {
    for (unsigned int i = 0; i < currentEntries; ++i) {
        collection[i]->printToFile(newFile);
    }
}
