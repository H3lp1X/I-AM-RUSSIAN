#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
    // Проверяем, передан ли аргумент командной строки
    if (argc != 2) {
        cerr << "Использование: " << argv[0] << " <пароль>" << endl;
        return 1;
    }

    const string correctPassword = "VolkNeTotKtoVoitAuf";
    string enteredPassword = argv[1];           

    if (enteredPassword == correctPassword) {
        cout << "Пароль верный." << endl;
    } else {
        cout << "Неверный пароль." << endl;
    }

    return 0;
}
