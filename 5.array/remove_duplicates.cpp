//Remove Duplicate in Sorted Array

#include <iostream>
#include <vector>
using namespace std;

void removeDuplicate(vector<int>& arr) {
    if (arr.empty()) {
        cout << "[]" << endl;
        return;
    }

    int i = 1;

    for (size_t j = 1; j < arr.size(); ++j) {
        if (arr[j] != arr[j - 1]) {
            arr[i] = arr[j];
            ++i;
        }
    }

    arr.resize(i);  // Trim the vector to remove duplicates

    // Print the updated array
    cout << "[";
    for (size_t k = 0; k < arr.size(); ++k) {
        cout << arr[k];
        if (k != arr.size() - 1)
            cout << ", ";
    }
    cout << "]" << endl;
}

//removeDuplicate([1, 2, 2, 2, 3, 4, 5, 5, 5, 6]);

/* 
arr[j] !== arr[j-1]
✅ 2 !== 1 => arr[1] = 2;
❌ 2 === 2 => No change.
❌ 2 === 2 => No change.
✅ 3 !== 2 => arr[2] = 3;
✅ 4 !== 3 => arr[3] = 4;
✅ 5 !== 4 => arr[4] = 5;
❌ 5 === 5 => No Change;
❌ 5 === 5 => No Change;
✅ 6 !== 5 => arr[5] = 6;
[1,2,3,4,5,6]
*/

void RemoveTriplicate(vector<int>& arr) {
    if (arr.empty()) {
        cout << "[]" << endl;
        return;
    }

    int i = 1;
    int count = 1;

    for (size_t j = 1; j < arr.size(); ++j) {
        if (arr[j] == arr[j - 1]) {
            count++;
        } else {
            count = 1;
        }

        if (count <= 2) {
            arr[i] = arr[j];
            ++i;
        }
    }

    arr.resize(i);

    // Print result
    cout << "[";
    for (size_t k = 0; k < arr.size(); ++k) {
        cout << arr[k];
        if (k != arr.size() - 1)
            cout << ", ";
    }
    cout << "]" << endl;
}

int main() {
    vector<int> numbers = {1, 2, 2, 2, 3, 4, 5, 5, 5, 6};
    RemoveTriplicate(numbers);
    return 0;
}



void removeDuplicatesInUnsortedArray(const vector<int>& arr) {
    if (arr.empty()) {
        cout << "[]" << endl;
        return;
    }

    vector<int> uniqueElements;

    for (size_t i = 0; i < arr.size(); ++i) {
        bool isDuplicate = false;

        for (size_t j = 0; j < uniqueElements.size(); ++j) {
            if (arr[i] == uniqueElements[j]) {
                isDuplicate = true;
                break;
            }
        }

        if (!isDuplicate) {
            uniqueElements.push_back(arr[i]);
        }
    }

    // Print the result
    cout << "[";
    for (size_t i = 0; i < uniqueElements.size(); ++i) {
        cout << uniqueElements[i];
        if (i != uniqueElements.size() - 1)
            cout << ", ";
    }
    cout << "]" << endl;
}




