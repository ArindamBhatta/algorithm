#include <iostream>

class FindFactorial {
public:
    static int bruteForce(int n) {
        if (n == 0) {
            return 1;
        }

        int sum = 1;

        for (int i = 1; i <= n; i++) {
            sum *= i;
        }
        return sum;
    }
};

int main() {
    int answer = FindFactorial::bruteForce(5);
    std::cout << answer << std::endl;

    return 0;
}
