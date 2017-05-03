#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include "Rectangle.h"
#include "Circle.h"
#include "Line.h"
#include "FigureCollection.h"
FigureCollection figc;
void getInfo(std::fstream& filestr) {
    figc.defaultConstructor();
    Line* line;
    Rectangle* rect;
    Circle* circ;
    std::string word;
    std::string attributes;
    std::string line1;
    bool flag_rect = 0;
    bool flag_circ = 0;
    bool flag_line = 0;
    while (std::getline(filestr, line1)) {
        rect = new Rectangle;
        line  = new Line;
        circ = new Circle;

        if (line1.find("<rect") != std::string::npos) {
            attributes += line1;
            flag_rect = 1;

            if (line1.find("<rect") != std::string::npos && line1.find("/>") != std::string::npos) {
                rect->setInfo(line1);
                figc.addEntry(rect);
                flag_rect = 0;
            }
        }
        if (flag_rect && line1.find("/>") != std::string::npos) {
            attributes += line1;
            rect->setInfo(attributes);
            figc.addEntry(rect);
            flag_rect = 0;
        }



        if (line1.find("<circle") != std::string::npos) {
            attributes += line1;
            flag_circ = 1;

            if (line1.find("<circle") != std::string::npos && line1.find("/>") != std::string::npos) {
                circ->setInfo(line1);
                figc.addEntry(circ);
                flag_circ = 0;
            }
        }
        if (flag_circ && line1.find("/>") != std::string::npos) {
            attributes += line1;
            circ->setInfo(attributes);
            figc.addEntry(circ);
            flag_circ = 0;
        }

        if(line1.find("<g stroke") != std::string::npos)
            attributes += line1;
        if (line1.find("<line") != std::string::npos) {
            attributes += line1;
            flag_line = 1;

            if (line1.find("<line") != std::string::npos && line1.find("/>") != std::string::npos) {
                line->setInfo(line1);
                figc.addEntry(line);
                flag_line = 0;
            }
        }
        if (flag_line && line1.find("/>") != std::string::npos) {
            attributes += line1;
            line->setInfo(attributes);
            figc.addEntry(line);
            flag_line = 0;
        }
    }
}
void create(Rectangle* rect, Circle* circ, Line* line,std::string s){
    if(s.find("rectangle") != std::string::npos){
        rect = new Rectangle;
        rect->create(s);
        figc.addEntry(rect);
        std::cout << "Successfully created rectangle (" <<figc.getID() << ")\n";
    }

    if(s.find("circle") != std::string::npos){
        circ = new Circle;
        circ->create(s);
        figc.addEntry(circ);
        std::cout << "Successfully created circle (" <<figc.getID() << ")\n";
    }

    if(s.find("line") != std::string::npos){
        line = new Line;
        line->create(s);
        figc.addEntry(line);
        std::cout << "Successfully created line (" <<figc.getID() << ")\n";
    }
}
int main() {
       std::cout << "List of available commands:\n";
   std::cout << "1)open *file path*\n2)close\n3)save\n4)saveas \"file path\"\n"
           "5)exit\n6)create\n7)erase\n8)translate\n9)within\n10)print\n";
    Rectangle *rect = nullptr;
    Line* line = nullptr;
    Circle* circ = nullptr;
    bool opened = 0;
    while(true) {
        char filePath[100];
        char filePath_fixed[100];
        std::fstream filestr;
        char c[10];
        std::cin >> c;

        ///*Open
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

        ///*Print
        if(!strcmp(c,"print")){
            if(opened) {
                std::cout << "Printing...\n";
                figc.printToConsole();
            } else
                std::cout << "Open a file first!\n";
        }

        ///*Exit
        if (!strcmp(c, "exit")) {
            std::cout << "Exiting the program...\n";
            break;
        }

        ///*Save
        if (!strcmp(c, "save")){
            if(opened) {
                std::cout << "Successfully saved " << filePath_fixed << std::endl;
                std::ifstream openedFile(filePath);
                std::string line1;
                std::string info_beg[100];
                int t = 0;
                while (std::getline(openedFile, line1)){
                    if (line1.find("<rect") != std::string::npos
                        || line1.find("<circle") != std::string::npos
                        || line1.find("<line") != std::string::npos)
                        break;
                    info_beg[t++] = line1;
                }
                openedFile.close();
                std::ofstream newFile(filePath);
                for(int i = 0; i < t; i++)
                    newFile << info_beg[i] << std::endl;
                figc.printToFile(newFile);
                newFile << "</svg>\n";
            }else
                std::cout << "Open a file first!\n";
        }

        ///*Save As
        if (!strcmp(c, "saveas")){
            if(opened) {
                char filePath1[100];
                char filePath1_fixed[100];
                char fileName[100];
                std::cin >> filePath1;
                int len = strlen(filePath1);
                for (int i = 1; i < len - 1; i++)
                    filePath1_fixed[i - 1] = filePath1[i];
                filePath1_fixed[len - 2] = '\0';
                        int len1 = strlen(filePath1_fixed);
                        for(int i = len1; i > 0; i--){
                            if (filePath1_fixed[i] == '\\') {
                                int t = i + 1;
                                for (int j = 0; j < len - i; j++) {
                                    if (filePath1_fixed[t] != '\"')
                                        fileName[j] = filePath1_fixed[t++];
                                    else
                                        fileName[j] = '\0';
                                }
                                break;
                            }else
                                strcpy(fileName,filePath1_fixed);
                        }
                        std::cout << "Successfully saved " << fileName << std::endl;
                std::ofstream newFile(filePath1_fixed, std::ios::app);
                std::fstream openedFile(filePath);
                std::string line1;
                while (std::getline(openedFile, line1)){
                    if (line1.find("<rect") != std::string::npos
                        || line1.find("<circle") != std::string::npos
                        || line1.find("<line") != std::string::npos)
                        break;
                    newFile << line1 << std::endl;
                }
                figc.printToFile(newFile);
                newFile << "</svg>\n";
            }else
                std::cout << "Open a file first!\n";
        }

        ///*Close
        if (!strcmp(c, "close")){
            if(opened) {
                filestr.close();
                opened = 0;
                std::cout << "Successfully closed " << filePath_fixed << std::endl;
            }else
                std::cout << "You should open a file first!\n";
        }

        ///*Create
        if(!strcmp(c,"create")){
            if(opened) {
                std::string s;
                std::getline(std::cin, s);
                create(rect, circ, line, s);
            }else
                std::cout << "You should open a file first!\n";
        }

        ///*Erase
        if(!strcmp(c,"erase")){
            if(opened) {
                unsigned int id;
                std::cin >> id;
                figc.erase(id);
            }else
                std::cout << "You should open a file first!\n";
        }

        ///*Translate
        if(!strcmp(c,"translate")){
            std::string s;
            getline(std::cin,s);
            figc.translate(s);
             }
         }

    return 0;
}