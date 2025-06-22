#include <iostream>
#include <vector>

class QuickSorter {
public:
    void quickSort(std::vector<int>& arr, int start, int end) {
        if (start < end) {
            int pivotIndex = partition(arr, start, end);
            quickSort(arr, start, pivotIndex - 1);
            quickSort(arr, pivotIndex + 1, end);
        }
    }

private:
    int partition(std::vector<int>& arr, int start, int end) {
        int pivot = arr[end];
        int index = start - 1;

        for (int j = start; j < end; ++j) {
            if (arr[j] <= pivot) {
                ++index;
                swap(arr, index, j);
            }
        }
        ++index;
        swap(arr, index, end);
        return index;
    }

    void swap(std::vector<int>& arr, int i, int j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
};

int main() {
    QuickSorter qs;
    std::vector<int> arr = {8, 4, 7, 3, 1, 9, 5};

    std::cout << "Original array: ";
    for (int num : arr) std::cout << num << " ";
    std::cout << std::endl;

    qs.quickSort(arr, 0, arr.size() - 1);

    std::cout << "Sorted array: ";
    for (int num : arr) std::cout << num << " ";
    std::cout << std::endl;

    return 0;
}

