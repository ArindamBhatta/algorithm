#include <iostream>
#include <vector>

class MergeSorter {
public:
    std::vector<int> mergeSort(const std::vector<int>& arr) {
        if (arr.size() <= 1) {
            return arr;
        }

        int mid = arr.size() / 2;
        std::vector<int> left(arr.begin(), arr.begin() + mid);
        std::vector<int> right(arr.begin() + mid, arr.end());

        return mergeUsingTwoPointer(mergeSort(left), mergeSort(right));
    }

private:
    std::vector<int> mergeUsingTwoPointer(const std::vector<int>& left, const std::vector<int>& right) {
        int i = 0, j = 0;
        std::vector<int> sorted;

        while (i < left.size() && j < right.size()) {
            if (left[i] < right[j]) {
                sorted.push_back(left[i++]);
            } else {
                sorted.push_back(right[j++]);
            }
        }

        while (i < left.size()) {
            sorted.push_back(left[i++]);
        }

        while (j < right.size()) {
            sorted.push_back(right[j++]);
        }

        return sorted;
    }
};

int main() {
    MergeSorter ms;
    std::vector<int> arr = {10, 7, 9, 8, 3, 2, 1, 6, 5, 4};

    std::cout << "Original array: ";
    for (int num : arr) std::cout << num << " ";
    std::cout << "\n";

    std::vector<int> sorted = ms.mergeSort(arr);

    std::cout << "Sorted array: ";
    for (int num : sorted) std::cout << num << " ";
    std::cout << "\n";

    return 0;
}

