#include <iostream>
#include <vector>
using namespace std;

class PrintAllPrime {
public:
    // Check if a number is prime
    static bool checkPrimeNo(int n) {
        if (n <= 1) return false;
        if (n == 2 || n == 3) return true;
        if (n % 2 == 0 || n % 3 == 0) return false;

        for (int i = 5; i * i <= n; i += 6) {
            if (n % i == 0 || n % (i + 2) == 0) {
                return false;
            }
        }
        return true;
    }

    // Print all prime numbers up to limit using individual checking
    static void printAllPrimes(int limit) {
        for (int i = 2; i <= limit; ++i) {
            if (checkPrimeNo(i)) {
                cout << i << endl;
            }
        }
    }

    // Print all prime numbers up to n using the Sieve of Eratosthenes
    static void sievePrintPrimes(int n) {
        vector<bool> primes(n + 1, true);
        primes[0] = primes[1] = false;

        for (int i = 2; i * i <= n; ++i) {
            if (primes[i]) {
                for (int j = i * i; j <= n; j += i) {
                    primes[j] = false;
                }
            }
        }

        for (int i = 2; i <= n; ++i) {
            if (primes[i]) {
                cout << i << endl;
            }
        }
    }
};

int main() {
    PrintAllPrime::sievePrintPrimes(50); // Prints all primes up to 50
    return 0;
}
