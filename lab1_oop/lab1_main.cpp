#include <iostream>
#include <string>
#include "./include/lab1_func.h" 

using namespace std;

int main() {
    string stroka;
    getline(cin, stroka);
    char* nov_stroka = (char*)malloc(stroka.size());
    if (!change_bukv(stroka, nov_stroka)) {
        cout << "Введенные данные:" << endl;
        cout << stroka << endl;
        cout << "Результат замены букв:" << endl;
        cout << nov_stroka << endl;
    } else {
        cerr << "Неправильный ввод." << endl;
    }
    free(nov_stroka);
    return 0;
}