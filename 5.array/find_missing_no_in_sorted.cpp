#include <iostream>
#include <vector>
using namespace std;

void findMissingElement(const vector<int>& arr) {
    if (arr.empty()) {
        cout << "Array is empty." << endl;
        return;
    }

    int sum = 0;
    int lastNumber = arr[arr.size() - 1];

    for (int num : arr) {
        sum += num;
    }

    int total = (lastNumber * (lastNumber + 1)) / 2;
    int missingNo = total - sum;

    cout << "Missing number: " << missingNo << endl;
}

int main() {
    vector<int> numbers = {1, 2, 3, 4, 6}; 
    findMissingElement(numbers);
    return 0;
}
