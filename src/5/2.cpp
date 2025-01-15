#include <iostream>
#include <cmath>

using namespace std;

double hypot(double x1, double x2) {
    return sqrt(x1 * x1 + x2 * x2);
}

int main() {
    cout << "Египетский треугольник:\n";
    double x1 = 3., x2 = 4.;
    cout << "x1=" << x1 << ", x2=" << x2 << endl;
    cout << "hypot -> " << hypot(x1, x2) << endl;

}