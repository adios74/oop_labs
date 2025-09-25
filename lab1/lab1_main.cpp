#include <iostream>
#include <string>
#include "lab1_func.cpp" 

using namespace std;

int main() {
    string stroka;
    getline(cin, stroka);
    char* nov_stroka = (char*)malloc(stroka.size());
    if (!change_bukv(stroka, nov_stroka)) {
        cout << stroka << endl;
        cout << nov_stroka << endl;
    } else {
        cerr << "Неправильный ввoд." << endl;
    }
    free(nov_stroka);
    return 0;
}
