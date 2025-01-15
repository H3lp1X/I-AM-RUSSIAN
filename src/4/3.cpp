#include "iostream"

int main() {

    using namespace std;

    int arr[10] = {1, 1, 2, 3, 2, 3, 7, 8, 9, 9};

    int cnt = 0;
    for (int i = 0; i < 10; ++i) {
        for (int j = i + 1; j < 10; ++j) {
            if (arr[i] == arr[j]) {
                cout << "Пара " << cnt << ": " << arr[i] << ", " << arr[j] << endl;
                cnt += 1;
            }
        }
    }

}