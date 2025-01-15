#include <iostream>

int current = 0;

int byThrees() {
    int result = current;
    current += 3; 
    return result;
}

void reset() {
    current = 0; 
}

int main() {
    // Демонстрация работы функций
    std::cout << "Последовательность byThrees(): ";
    for (int i = 0; i < 5; ++i) {
        std::cout << byThrees() << " ";
    }
    std::cout << std::endl;

    // Сброс последовательности
    reset();
    std::cout << "После сброса: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << byThrees() << " ";
    }
    std::cout << std::endl;

    return 0;
}
