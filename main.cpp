#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
void menu() {
    std::cout << "List of available commands:\n";
    std::cout << "1)open\n2)close\n3)save\n4)saveas \"filepath\"\n5)exit\n";

    bool flag = 1;
    while(true) {
        char c[10];
        std::cin >> c;
        std::cin.ignore();
            if (!strcmp(c, "open")) {
                char filePath[100];
                char filePath_fixed[100];
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
                ;
                std::fstream filestr;
                filestr.open(filePath);
                if (filestr.is_open()) {

                    std::cout << "Successfully opened " << filePath_fixed << '\n';
                } else {
                    if (!strstr(filePath, ".svg")) {
                        std::cerr << "Error opening file: file format not supported!\n";
                        return;
                    } else {
                        std::cerr << "File not found!\n";
                        std::clog << "Creating new file " << filePath << "...\n";
                        std::ofstream createFile(filePath);
                    }

            }


        }
        if (!strcmp(c, "exit"))
            return;
        if (!strcmp(c, "saveas")){
            char filePath[100];
            char filePath_fixed[100];
            std::cin >> filePath;
            int len = strlen(filePath);
            for(int i = 1; i < len - 1; i++)
            filePath_fixed[i-1] = filePath[i];
            filePath_fixed[len - 2] ='\0';
            std::cout << filePath_fixed;
            std::ofstream createFile(filePath_fixed);
        }
    }
}
int main() {
    menu();
    return 0;
}