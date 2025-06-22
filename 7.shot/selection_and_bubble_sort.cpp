#include <iostream>
#include <vector>

class SortingAlgorithms {
public:
    // Selection Sort
    void selectionSort(std::vector<int>& arr) {
        int n = arr.size();
        for (int i = 0; i < n - 1; ++i) {
            int minIndex = i;
            for (int j = i + 1; j < n; ++j) {
                if (arr[j] < arr[minIndex]) {
                    minIndex = j;
                }
            }
            std::swap(arr[i], arr[minIndex]);
        }
    }

    // Bubble Sort
    void bubbleSort(std::vector<int>& arr) {
        int n = arr.size();
        for (int i = 0; i < n - 1; ++i) {
            bool swapped = false;
            for (int j = 0; j < n - i - 1; ++j) {
                if (arr[j] > arr[j + 1]) {
                    std::swap(arr[j], arr[j + 1]);
                    swapped = true;
                }
            }
            if (!swapped) break; // Optimization: stop if array is already sorted
        }
    }

    // Utility to print array
    void printArray(const std::vector<int>& arr) {
        for (int num : arr) {
            std::cout << num << " ";
        }
        std::cout << "\n";
    }
};

int main() {
    SortingAlgorithms sa;

    std::vector<int> arr1 = {64, 25, 12, 22, 11};
    std::vector<int> arr2 = arr1;  // Copy for second sort

    std::cout << "Original Array: ";
    sa.printArray(arr1);

    sa.selectionSort(arr1);
    std::cout << "After Selection Sort: ";
    sa.printArray(arr1);

    sa.bubbleSort(arr2);
    std::cout << "After Bubble Sort: ";
    sa.printArray(arr2);

    return 0;
}
