#include <iostream>
#include <string>
#include <cctype> // Для функции isupper

using namespace std;

int main() {
    string input;
    int uppercaseCount = 0;

    // Ввод строки
    cout << "Введите строку: ";
    getline(cin, input);

    // Подсчет заглавных букв
    for (char c : input) {
        if (isupper(static_cast<unsigned char>(c))) {
            ++uppercaseCount;
        }
    }

    // Вывод результата
    cout << "Количество прописных букв (больших): " << uppercaseCount << endl;

    return 0;
}
