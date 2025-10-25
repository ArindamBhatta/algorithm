//approach 1: - merge two array in a single array then use bubble sort
function getMergeShotArr(arrOne: number[], arrTwo: number[]) {
  let mergeShotArr: number[] = [];
  for (let i = 0; i < arrOne.length; i++) {
    mergeShotArr.push(arrOne[i]);
  }
  for (let j = 0; j < arrTwo.length; j++) {
    mergeShotArr.push(arrTwo[j]);
  }

  for (let i = 0; i < mergeShotArr.length - 1; i++) {
    for (let j = i; j < mergeShotArr.length; j++) {
      if (mergeShotArr[i] > mergeShotArr[j]) {
        let temp = mergeShotArr[i];
        mergeShotArr[i] = mergeShotArr[j];
        mergeShotArr[j] = temp;
      }
    }
  }
  console.log(mergeShotArr);
}

//approach 2: - using two pointer to merge two array in a single array
function mergeTwoArray(arrOne: number[], arrTwo: number[]) {
  let i = 0;
  let j = 0;
  let mergeArray: number[] = [];

  //one time one value is push to mergeArray and increase j or i.
  while (i < arrOne.length && j < arrTwo.length) {
    if (arrOne[i] < arrTwo[j]) {
      mergeArray.push(arrOne[i]);
      i = i + 1;
    } else {
      mergeArray.push(arrTwo[j]);
      j = j + 1;
    }
  }

  //add the remaining element
  while (i < arrOne.length) {
    mergeArray.push(arrOne[i]);
    i = i + 1;
  }

  while (j < arrTwo.length) {
    mergeArray.push(arrTwo[j]);
    j = j + 1;
  }

  console.log(mergeArray);
}
//mergeTwoArray([1, 2, 3], [2, 5, 6]); // Time Complexity: - O(n + m)

//From time complexity we got the ans but not from space complexity
// The final sorted array should not be returned by the function, but instead be stored inside the array nums1.
//so we can't use two pointer but we can solve if add another pointer in arrOne.

/*
approach 3: - Steps 
arr1 = [1,2,3,0,0,0]; arr2 = [2,5,6];
if i start with last index check which one is bigger because array is sorted in ascending order.
pointer1 = (m+n) - 1;
pointer2 = m -1;
pointer3 = n-1;
*/

function mergeInExistingArray(
  arr1: number[],
  m: number,
  arr2: number[],
  n: number
) {
  let extendedArr1: number = m + n - 1;
  let arr1idx = m - 1;
  let arr2idx = n - 1;

  while (arr1idx >= 0 && arr2idx >= 0) {
    if (arr1[arr1idx] >= arr2[arr2idx]) {
      arr1[extendedArr1] = arr1[arr1idx];
      arr1idx--;
      extendedArr1--;
    } else {
      arr1[extendedArr1] = arr2[arr2idx];
      arr2idx--;
      extendedArr1--;
    }
  }

  // arr2 element remaining means arr1 elements are already in place.
  while (arr2idx >= 0) {
    arr1[extendedArr1] = arr2[arr2idx];
    arr2idx--;
    extendedArr1--;
  }

  console.log(arr1);
}

mergeInExistingArray([1, 2, 3, 0, 0, 0], 3, [2, 5, 6], 3);
