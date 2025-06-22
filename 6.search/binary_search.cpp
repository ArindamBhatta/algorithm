#include <iostream>
#include <vector>

class BinarySearchProblems {
public:
    // Q1: Standard Binary Search
    int binarySearch(const std::vector<int>& arr, int target) {
        int start = 0, end = arr.size() - 1;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (arr[mid] < target) start = mid + 1;
            else if (arr[mid] > target) end = mid - 1;
            else return mid;
        }
        return -1;
    }

    // Q2: Count Rotations in Circularly Sorted Array
    int countRotations(const std::vector<int>& arr) {
        int start = 0, end = arr.size() - 1;
        while (start <= end) {
            if (arr[start] <= arr[end]) return start;  // already sorted
            int mid = start + (end - start) / 2;
            int next = (mid + 1) % arr.size();
            int prev = (mid + arr.size() - 1) % arr.size();
            if (arr[mid] <= arr[prev] && arr[mid] <= arr[next]) return mid;
            else if (arr[mid] <= arr[end]) end = mid - 1;
            else start = mid + 1;
        }
        return 0;
    }

    // Q3: Search in Rotated Sorted Array
    int searchRotatedArray(const std::vector<int>& arr, int target) {
        int start = 0, end = arr.size() - 1;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (arr[mid] == target) return mid;

            if (arr[start] <= arr[mid]) {
                if (arr[start] <= target && target < arr[mid]) end = mid - 1;
                else start = mid + 1;
            } else {
                if (arr[mid] < target && target <= arr[end]) start = mid + 1;
                else end = mid - 1;
            }
        }
        return -1;
    }

    // Q4: First or Last Occurrence
    int findOccurrence(const std::vector<int>& arr, int target, bool first) {
        int result = -1;
        int start = 0, end = arr.size() - 1;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (arr[mid] == target) {
                result = mid;
                if (first) end = mid - 1;
                else start = mid + 1;
            } else if (arr[mid] < target) start = mid + 1;
            else end = mid - 1;
        }
        return result;
    }

    // Q5: Smallest Missing Element in Sorted Array
    int smallestMissing(const std::vector<int>& arr) {
        int start = 0, end = arr.size() - 1;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (arr[mid] == mid) start = mid + 1;
            else end = mid - 1;
        }
        return start;
    }

    // Q6: Peak Index in Mountain Array
    int peakInMountainArray(const std::vector<int>& arr) {
        int start = 0, end = arr.size() - 1;
        while (start < end) {
            int mid = start + (end - start) / 2;
            if (arr[mid] > arr[mid + 1]) end = mid;
            else start = mid + 1;
        }
        return start; // returns index
    }
};

int main() {
    BinarySearchProblems bs;
    
    std::vector<int> sorted = {-1, 0, 1, 2, 3, 4};
    std::cout << "Binary Search: " << bs.binarySearch(sorted, 0) << std::endl;

    std::vector<int> rotated = {6, 7, 8, 1, 2, 3, 4, 5};
    std::cout << "Count Rotations: " << bs.countRotations(rotated) << std::endl;
    std::cout << "Search Rotated Array: " << bs.searchRotatedArray(rotated, 4) << std::endl;

    std::vector<int> dupSorted = {1, 2, 2, 2, 3, 4, 5};
    std::cout << "First Occurrence of 2: " << bs.findOccurrence(dupSorted, 2, true) << std::endl;
    std::cout << "Last Occurrence of 2: " << bs.findOccurrence(dupSorted, 2, false) << std::endl;

    std::vector<int> missing = {0, 1, 2, 6, 9};
    std::cout << "Smallest Missing: " << bs.smallestMissing(missing) << std::endl;

    std::vector<int> mountain = {0, 3, 8, 9, 5, 2};
    std::cout << "Peak Index in Mountain Array: " << bs.peakInMountainArray(mountain) << std::endl;

    return 0;
}
