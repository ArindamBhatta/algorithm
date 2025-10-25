//Q.1- search a target value in a sorted array
function binarySearch(arr: number[], target: number): number {
  let start: number = 0;
  let end: number = arr.length - 1;

  while (start <= end) {
    let mid: number = Math.floor((start + end) / 2);

    if (arr[mid] < target) {
      //Search in RHS
      start = mid + 1;
    } else if (arr[mid] > target) {
      end = mid - 1;
    } else {
      return mid;
    }
  }
  return -1;
}
// console.log(binarySearch([-1, 0, 1, 2, 3, 4], 0));

//Q.2: - Find the number of rotations in a circularly sorted array

//Q.3:- Search a target element in Rotary sorted Array
function rotarySortedArray(arr: number[], target: number): number {
  let start: number = 0;
  let end: number = arr.length - 1;

  while (start <= end) {
    let mid: number = Math.floor((start + end) / 2);

    if (arr[mid] === target) {
      // Use === for comparison
      return mid;
    }

    // Check which part is sorted
    if (arr[start] <= arr[mid]) {
      // Left part is sorted
      if (arr[start] <= target && target < arr[mid]) {
        // Target is in the left side
        end = mid - 1;
      } else {
        // Target is in the right side
        start = mid + 1;
      }
    } else {
      // Right part is sorted
      if (arr[mid] < target && target <= arr[end]) {
        // Target is in the right side
        start = mid + 1;
      } else {
        // Target is in the left side
        end = mid - 1;
      }
    }
  }
  return -1; // Target not found
}
// console.log(rotarySortedArray([6, 7, 8, 1, 2, 3, 4, 5, 6], 4)); // Output: 6

//Q:4: -Find the first or last occurrence of a given number in a sorted array

//Q:5: - Find the smallest missing element from a sorted array

//Q:6: -Find the peak index in Mountain Array
function peakIndexInMountainArray(arr: number[]): number {
  let start: number = 0;
  let end: number = arr.length - 1;
  while (start <= end) {
    let mid: number = Math.floor((start + end) / 2);
    //Find the Peak element
    if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1]) {
      return arr[mid];
    }
    //array start to mid in a sorted Direction so we can apply binary search
    if (arr[mid - 1] < arr[mid]) {
      //left portion is always increasing start isearching in right
      start = mid + 1;
    } else {
      end = mid - 1;
    }
  }
  return -1;
}
console.log(peakIndexInMountainArray([0, 3, 8, 9, 5, 2]));
