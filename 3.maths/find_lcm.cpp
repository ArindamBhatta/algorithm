#include <iostream>
using namespace std;

class FindLcm {
public:
    static void bruteForce(int a, int b) {
        int max = (a > b) ? a : b;
        int multiple = max;

        while (true) {
            if (multiple % a == 0 && multiple % b == 0) {
                cout << multiple << endl;
                break;
            }
            multiple += max;
        }
    }

    static int optEuclidGcd(int a, int b) {
        while (a != 0 && b != 0) {
            if (a > b) {
                a = a % b;
            } else {
                b = b % a;
            }
        }
        return (a != 0) ? a : b;
    }

    static int findLcm(int a, int b) {
        return (a * b) / optEuclidGcd(a, b);
    }
};

int main() {
    cout << FindLcm::findLcm(24, 36) << endl;
    return 0;
}
