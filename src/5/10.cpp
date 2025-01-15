#include <iostream>

using namespace std;

void stupid_dupid_print(int n) {
    if (n == 1) {cout << 1 << endl; return;}
    cout << n << endl;
    stupid_dupid_print(n-1);
}

int main() {
    int num = 10;
    stupid_dupid_print(num);
}