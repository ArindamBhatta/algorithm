#include <iostream>
#include <vector>
using namespace std;

void SubArray(const vector<int>& arr) {
    for (size_t i = 0; i < arr.size(); ++i) {
        for (size_t j = i; j < arr.size(); ++j) {
            for (size_t k = i; k <= j; ++k) {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
}

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};
    SubArray(numbers);
    return 0;
}
