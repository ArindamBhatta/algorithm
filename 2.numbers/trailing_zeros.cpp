#include <iostream>
using namespace std;

class TrailingZero {
public:
    // First method using increasing powers of 5
    static void getTrailingZero(int n) {
        int pow = 5;
        int result = 0;
        while (pow <= n) {
            result += n / pow; // Integer division in C++
            pow *= 5;
        }
        cout << result << endl;
    }

    // Second method using repeated division
    static void getTrailingZeroTwo(int n) {
        int result = 0;
        while (n >= 5) {
            n = n / 5;
            result += n;
        }
        cout << result << endl;
    }
};

int main() {
    TrailingZero::getTrailingZeroTwo(111);
    return 0;
}
