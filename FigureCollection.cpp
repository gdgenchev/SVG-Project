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
    if(id > currentEntries){
        std::cout << "There is no figure number " << id << std::endl;
        return;
    }
    currentEntries--;
    std::cout << "Erased (" << id <<")\n";
    delete collection[id-1];
    for(int i = id; i <= currentEntries; i++)
        collection[i-1] = collection[i];

}

void FigureCollection::translate(std::string line) {
    int id;
    if(line[1] < '0' || line[1] > '9') {
        std::cout << "Translated all figures\n";
        for (int i = 0; i < currentEntries; i++)
            collection[i]->translate(line);
    }else{
       unsigned int numberOfDigits = 0;
        std::istringstream is(line);
        is >> id;
        int id_copy = id;
        while(id != 0){
            id /=10;
            numberOfDigits++;
        }
        if(id_copy > currentEntries) {
            std::cout << "No such figure.\n";
            return;
        }
        line.erase(line.begin(),line.begin() + numberOfDigits + 2);
        std::cout << "Translated (" << id_copy << ")\n";
        collection[id_copy - 1]->translate(line);
    }
}

void FigureCollection::printToFile(std::ofstream& newFile) const {
    for (unsigned int i = 0; i < currentEntries; ++i) {
        collection[i]->printToFile(newFile);
    }
}

void FigureCollection::printWithin(std::string line) {
    std::istringstream is(line);
    std::string type;
    double cx, cy, r;
    double x, y, width, height;
    is >> type;
    if (type == "circle") {
        bool flag = 0;
        while (is >> cx >> cy >> r);
        for (unsigned int i = 0; i < currentEntries; i++) {
            if (collection[i]->isInsideCirc(cx, cy, r)) {
                std::cout << i + 1;
                collection[i]->print();
                flag = 1;
            }
        }
        if(!flag)
            std::cout << "No figures are located within circle " << cx << ' ' << cy << ' ' << r << std::endl;
    }
    if (type == "rectangle") {
        bool flag = 0;
        while (is >> x >> y >> width >> height);
        for (unsigned int i = 0; i < currentEntries; i++) {
            if (collection[i]->isInsideRect(x, y, width, height)) {
                std::cout << i + 1;
                collection[i]->print();
                flag = 1;
            }
        }
        if(!flag)
            std::cout << "No figures are located within rectangle " << x << ' ' << y << ' ' << width << ' ' << height << std::endl;
    }
}
