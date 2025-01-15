#include <iostream>

using namespace std;

size_t custom_strlen(const char* str) {
    size_t length = 0;
    while (str[length] != '\0') {
        ++length;
    }
    return length;
}

int main() {
    const char* myString = "Hello, world!";
    size_t length = custom_strlen(myString);
    cout << "Длина строки \"" << myString << "\": " << length << endl;

    return 0;
}
