#include <iostream>
using namespace std;

class FindGcd {
public:
    static void bruteForce(int a, int b) {
        int min = (a < b) ? a : b;

        for (int i = min / 2; i >= 1; i--) {
            if (a % i == 0 && b % i == 0) {
                cout << i << endl;
                break; // Return the first (largest) common divisor
            }
        }
    }

    static void euclidGcd(int a, int b) {
        while (a != b) {
            if (a > b) {
                a = a - b;
            } else {
                b = b - a;
            }
        }
        cout << a << endl;
    }

    static void optEuclidGcd(int a, int b) {
        while (a != 0 && b != 0) {
            if (a > b) {
                a = a % b;
            } else {
                b = b % a;
            }
        }
        cout << (a != 0 ? a : b) << endl;
    }
};

int main() {
    FindGcd::optEuclidGcd(1113, 1117);
    return 0;
}
