#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include "Rectangle.h"
#include "Circle.h"
#include "Line.h"
int count_rect;
int count_circ;
int count_line;
Rectangle* rect;
Circle* circ;
Line* line;
void getInfo(std::fstream& filestr) {
    count_rect = 0;
    count_circ = 0;
    std::string word;
    std::string attributes;
    std::string line1;
    bool flag_rect = 0;
    bool flag_circ = 0;
    int i = 0;
    int p = 0;
    while (std::getline(filestr, line1)) {
        if (line1.find("<rect") != std::string::npos) count_rect++;
        if (line1.find("<circle") != std::string::npos) count_circ++;
        if (line1.find("<line") != std::string::npos) count_line++;
    }
    filestr.clear();
    filestr.seekg(0,filestr.beg);
    rect = new Rectangle[count_rect];
    circ = new Circle[count_circ];
    line = new Line[count_line];
    while (std::getline(filestr, line1)) {
        if (line1.find("<rect") != std::string::npos) {
            attributes = line1;
            flag_rect = 1;

            if (line1.find("<rect") != std::string::npos && line1.find("/>") != std::string::npos) {
                rect[i++].setInfo(line1);
                flag_rect = 0;
            }
        }
        if (flag_rect && line1.find("/>") != std::string::npos) {
            attributes += line1;
            rect[i++].setInfo(attributes);
            flag_rect = 0;
        }




        if (line1.find("<circle") != std::string::npos) {
            attributes = line1;
            flag_circ = 1;

            if (line1.find("<circle") != std::string::npos && line1.find("/>") != std::string::npos) {
                circ[p++].setInfo(line1);
                flag_circ = 0;
            }
        }
        if (flag_circ && line1.find("/>") != std::string::npos) {
            attributes += line1;
            circ[p++].setInfo(attributes);
            flag_circ = 0;
        }
    }
}

int main() {
    bool opened = 0;
    std::cout << "List of available commands:\n";
    std::cout << "1)open *file path*\n2)close\n3)save\n4)saveas \"file path\"\n5)exit\n";
    while(true) {
        char filePath[100];
        char filePath_fixed[100];
        std::fstream filestr;
        char c[10];
        std::cin >> c;
        if (!strcmp(c, "open")) {
            opened = 1;
            std::cin >> filePath;
            int len = strlen(filePath);
            for(int i = len; i > 0; i--) {
                if (filePath[i] == '\\') {
                    filePath_fixed[len - 1] ='\0';
                    int t = i + 1;
                    for (int j = 0; j < len - i; j++)
                        filePath_fixed[j] = filePath[t++];
                    break;
                }else
                    strcpy(filePath_fixed,filePath);
            }
            filestr.open(filePath);
            if (filestr.is_open()) {
                getInfo(filestr);
                std::cout << "Successfully opened " << filePath_fixed << '\n';
                std::cout << "Supported figures: rectangle,circle,line\n";
                std::cout << "Available commands:\n1),2),3),4),5)\n6)print\n7)create\n8)erase\n9)translate\n10)within\n";
            } else {
                if (!strstr(filePath, ".svg")) {
                    std::cerr << "Error opening file: file format not supported!\n";
                    break;
                } else {
                    std::cerr << "File not found!\n";
                    std::clog << "Creating new file " << filePath_fixed << "...\n";
                    std::ofstream createFile(filePath);
                }
            }
        }
        if(!strcmp(c,"print")){
            if(opened) {
                int count = 1;
                std::cout << "Printing...\n";
                for (int i = 0; i < count_rect; i++) {
                    std::cout << count++;
                    rect[i].print();
                }
                for (int i = 0; i < count_circ; i++) {
                    std::cout << count++;
                    circ[i].print();
                }
                /*
                for (int i = 0; i < count_line; i++) {
                    std::cout << count++;
                    line[i].print();
                }*/
            } else
                std::cout << "Open a file first!\n";
        }
        if (!strcmp(c, "exit")) {
            std::cout << "Exiting the program...\n";
            break;
        }
        if (!strcmp(c, "save")){
            //TO DO
        }
        if (!strcmp(c, "saveas")){
            if(opened) {
                char filePath[100];
                char filePath_fixed[100];
                std::cin >> filePath;
                int len = strlen(filePath);
                for (int i = 1; i < len - 1; i++)
                    filePath_fixed[i - 1] = filePath[i];
                filePath_fixed[len - 2] = '\0';
                std::cout << filePath_fixed;
                std::ofstream createFile(filePath_fixed);
            }else
                std::cout << "Open a file first!\n";
        }
        if (!strcmp(c, "close")){
            if(opened) {
                filestr.close();
                opened = 0;
                std::cout << "Successfully closed " << filePath_fixed << std::endl;
            }else
                std::cout << "You should open a file first!\n";
        }

    }
    delete[]rect;
    delete[]circ;
    return 0;
}