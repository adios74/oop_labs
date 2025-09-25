#include <iostream>
#include <string>
#include "lab1_func.cpp" 

int main() {
    std::string stroka;
    std::getline(std::cin, stroka);
    char* nov_stroka = (char*)malloc(stroka.size());
    if (!change_bukv(stroka, nov_stroka)) {
        std::cout << "Введенные данные:" << std::endl;
        std::cout << stroka << std::endl;
        std::cout << "Результат замены букв:" << std::endl;
        std::cout << nov_stroka << std::endl;
        
    } else {
        std::cerr << "Неправильный ввод." << std::endl;
    }
    free(nov_stroka);
    return 0;
}
