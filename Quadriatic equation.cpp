#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;

        cout << "Enter coefficients a, b, c: ";
    cin >> a >> b >> c;

        if (a == 0) {
        cout << "This is not a quadratic equation.\n";
        return 0;
    }

        double D = (b * b) - (4 * a * c);

        if (D > 0) {
        
        double x1 = (-b + sqrt(D)) / (2 * a);
        double x2 = (-b - sqrt(D)) / (2 * a);

        cout << "Two real solutions:\n";
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else if (D == 0) {
        
        double x = -b / (2 * a);
        cout << "One real solution:\n";
        cout << "x = " << x << endl;
    }
    else {
        
        cout << "No real solutions.\n";
    }

    return 0;
}