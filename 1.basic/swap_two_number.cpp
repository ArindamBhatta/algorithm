#include <iostream>

class SwapTwoNumber {
public:
    // Swap using extra variable
    static void swapWithExtraVar(int a, int b) {
        int temp;
        temp = a;
        a = b;
        b = temp;

        std::cout << "a is " << a << " and b is " << b << std::endl;
    }

    // Swap without using extra variable
    static void swapWithoutAnyVar(int a, int b) {
        a = a + b;
        b = a - b;
        a = a - b;

        std::cout << "a is " << a << " and b is " << b << std::endl;
    }
};

int main() {
    SwapTwoNumber::swapWithExtraVar(5, 4);
    SwapTwoNumber::swapWithoutAnyVar(5, 4);
    return 0;
}

