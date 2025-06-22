#include <iostream>
#include <vector>
using namespace std;

void checkSecondLargest(const vector<int>& arr) {
    if (arr.size() < 2) {
        cout << "Array must have at least two elements." << endl;
        return;
    }

    int maxOne, maxTwo;

    if (arr[0] > arr[1]) {
        maxOne = arr[0];
        maxTwo = arr[1];
    } else {
        maxOne = arr[1];
        maxTwo = arr[0];
    }

    for (size_t i = 2; i < arr.size(); ++i) {
        if (arr[i] > maxOne) {
            maxTwo = maxOne;
            maxOne = arr[i];
        } else if (arr[i] > maxTwo) {
            maxTwo = arr[i];
        }
    }

    cout << "Second largest element: " << maxTwo << endl;
}

int main() {
    vector<int> numbers = {10, 20, 5, 8, 25, 18};
    checkSecondLargest(numbers);
    return 0;
}
