#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include "Rectangle.h"
void getInfo(std::fstream& filestr) {
    Rectangle rect[2];
    std::string word;
    std::string attributes;
    std::string line;
    bool flag = 0;
    int i = 0;
    while (!filestr.eof()) {
        std::getline(filestr, line);

        if (line.find("<rect") != std::string::npos) {
            attributes = line;
            //std::cout << attributes << std::endl;
            flag = 1;
        }
        if(line.find("<rect") != std::string::npos && line.find("/>") != std::string::npos) {
            rect[0].setInfo(line);
            flag = 0;
        }
        if (flag && line.find("/>") != std::string::npos) {
            attributes += line;
            rect[i++].setInfo(attributes);
        }
    }
}

int main() {
    bool opened = 0;
    std::cout << "List of available commands:\n";
    std::cout << "1)open *file path*\n2)close\n3)save\n4)saveas \"file path\"\n5)exit\n";
    while(true) {
        bool flag = 1;
        char filePath[100];
        char filePath_fixed[100];
        std::fstream filestr;
        char c[10];
        std::cin >> c;
        std::cin.ignore();
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
            if(opened)
           //TO DO figure[i].print();
                std::cout << "Printing...\n";
            else
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
            filestr.close();
            opened = 0;
            std::cout << "Successfully closed " << filePath_fixed << std::endl;
        }
    }
    return 0;
}