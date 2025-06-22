#include <iostream>
#include <vector>
using namespace std;

// Recursive function to compute nth Fibonacci number
int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Function to print the Fibonacci series
void printFibonacciSeries(int terms) {
    vector<int> series;
    for (int i = 1; i <= terms; i++) {
        series.push_back(fibonacci(i));
    }

    cout << "[";
    for (size_t i = 0; i < series.size(); i++) {
        cout << series[i];
        if (i < series.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}

int main() {
    printFibonacciSeries(8);
    return 0;
}

/* 
                                f(4)                                          ----- 1

                f(3)                               f(2)                        -----2
                                                 
        f(2)          f(1)                 f(1)         f(0)                    ----4  

    f(1)    f(0)                                                                  --8

    gp series => (2^n) time complexity
*/


