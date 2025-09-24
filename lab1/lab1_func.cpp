#include <iostream>
#include <string>
#include "lab1_func.h"

int change(std::string stroka, char* s) {
    if (stroka.size() == 0) {
        return 1;
    }
    for (long unsigned int i = 0; i < stroka.size(); i++) {
        if (stroka[i] == 'a') {
            s[i] = 'b';
        } else if (stroka[i] == 'b') {
            s[i] = 'a';
        } else if (stroka[i] == 'c') {
            s[i] = 'c';
        } else {
            return 1;
        }
    }
    return 0;
}