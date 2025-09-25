#include <iostream>
#include <string>
#include "../include/lab1_func.h"

int change_bukv(std::string stroka, char* nov_stroka) {
    if (stroka.size() == 0) {
        return 1;
    }
    for (long unsigned int iter = 0; iter < stroka.size(); iter++) {
        if (stroka[iter] == 'a') {
            nov_stroka[iter] = 'b';
        } else if (stroka[iter] == 'b') {
            nov_stroka[iter] = 'a';
        } else if (stroka[iter] == 'c') {
            nov_stroka[iter] = 'c';
        } else {
            return 1;
        }
    }
    return 0;
}