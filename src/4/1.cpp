#include <iostream>

int main() {
    using namespace std;

    short int hightemps[31];
    
    cout << "Памяти выделено на " << sizeof(hightemps) / sizeof(short int) << " элементов.\n";

}