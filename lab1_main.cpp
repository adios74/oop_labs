#include <iostream>
#include <string>
#include "lab1_func.cpp" 

int main() {
    std::string stroka;
    std::getline(std::cin, stroka);
    char* s = (char*)malloc(stroka.size());
    if (!change(stroka, s)) {
        std::cout << "Входные данные:" << std::endl;
        std::cout << stroka << std::endl;
        std::cout << "Результат:" << std::endl;
        for (long unsigned int j = 0; j < stroka.size(); j++) {
            std::cout << s[j];
        }
        std::cout << std::endl;
        
    } else {
        std::cerr << "Неправильный ввод." << std::endl;
    }
    free(s);
    return 0;
}