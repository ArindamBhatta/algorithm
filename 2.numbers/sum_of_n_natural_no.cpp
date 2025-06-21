#include <iostream>
using namespace std;

class SumOfNaturalNo {
public:
    // Brute-force approach
    static int broutForce(int n) {
        int sum = 0;
        for (int i = 1; i <= n; ++i) {
            sum += i;
        }
        return sum;
    }

    // Using formula approach
    static int formula(int n) {
        int sum = n * (n - 1) / 2;
        return sum;
    }
};

int main() {
    int ans = SumOfNaturalNo::formula(9);
    cout << ans << endl;
    return 0;
}
