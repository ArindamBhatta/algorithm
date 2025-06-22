#include <iostream>
using namespace std;

void printNo(int n) {
    cout << n << endl;  // Pre-order: prints on the way down

    if (n == 1) {
        cout << n << endl;  // Base case, prints again when n == 1
        return;
    }

    printNo(n - 1);  // Recursive call

    cout << n << endl;  // Post-order: prints on the way back up
}

int main() {
    printNo(4);
    return 0;
}


/* 
Step-by-Step Execution:

    => Call: printNo(4)
        1.Current No is: 4
        2.Calls printNo(3)

    => Call: printNo(3)
        1.Current No is: 3
        2.Calls printNo(2)

    => Call: printNo(2)
        1.Current No is: 2
        2.Calls printNo(1)

    => Call: printNo(1) (Base Case)
        1. Prints: 1
        2.Since n == 1, it prints 1 again and returns.

//Backtracking
    => Returning from printNo(1) to printNo(2)
        Prints: 2 (after recursive call)
        Returns to printNo(3)

    => Returning from printNo(2) to printNo(3)

        Prints: 3
        Returns to printNo(4)

    => Returning from printNo(3) to printNo(4)
        Prints: 4
        Ends execution.


PrintNo(3)
├── calls printNo(2)
├── calls printNo(1)
│   │   ├── prints 1
│   │   ├── base case met, prints 1 again, returns
│──printNo(2) Execute print 2;
├── printNo(3) Execute print 3;
*/







