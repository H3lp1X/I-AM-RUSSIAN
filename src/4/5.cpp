#include <iostream>
#include <string>

std::string toUp(std::string s) {
    std::string out = "";
    for (int i = 0; i < (int) s.length(); ++i) {
        out += toupper(s.at(i)); 
    }
    return out;
}

int main() {
    using namespace std;

    string s1, s2;

    // Ввод двух строк
    cout << "Введите первую строку: ";
    getline(cin, s1);
    cout << "Введите вторую строку: ";
    getline(cin, s2);

    cout << ((toUp(s1) == toUp(s2)) ? "same\n" : "different\n");
}