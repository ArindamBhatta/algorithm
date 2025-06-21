#include <iostream>

class MultiplicationUsingAddition {
public:
    static int getMultiplicationValue(int a, int b) {
        int answer = 0;

        // Step 1: If either value is 0
        if (a == 0 || b == 0) {
            std::cout << "Answer is Zero" << std::endl;
            return 0;
        }

        // Step 2: Use the smaller absolute value for iteration
        bool isNegative = false;

        if (a < 0 && b > 0) {
            isNegative = true;
            a = -a;
        } else if (b < 0 && a > 0) {
            isNegative = true;
            b = -b;
        } else if (a < 0 && b < 0) {
            a = -a;
            b = -b;
        }

        // Swap a and b to use the smaller number for iterations
        if (a > b) {
            int temp = a;
            a = b;
            b = temp;
        }

        // Step 3: Perform addition loop
        for (int i = 0; i < a; ++i) {
            answer += b;
        }

        // Step 4: Apply sign if needed
        if (isNegative) {
            answer = -answer;
        }

        std::cout << "Answer is: " << answer << std::endl;
        return answer;
    }
};

int main() {
    // Example test cases
    MultiplicationUsingAddition::getMultiplicationValue(5, 3);
    MultiplicationUsingAddition::getMultiplicationValue(-4, 2);
    MultiplicationUsingAddition::getMultiplicationValue(0, 7);
    MultiplicationUsingAddition::getMultiplicationValue(-3, -6);
    return 0;
}










/* 
Steps 1: - Check a || b any value is 0 then print Answer is Zero.

Step 2: - take the lowest nuber for iterable.

Step 3: - if a is positive then using for loop last index a;

Step 4: - if it's a nagative number then using first index is a to less then 0

*/