function reverseAnArray(arr: number[], start: number, end: number): void {
  while (start < end) {
      let temp: number = arr[start];
      arr[start] = arr[end];
      arr[end] = temp;
      start++;
      end--;
  }
}
//Rotate an array left hand side or anti clock wise direction.
function rotateAnArray(arr: number[], k: number): number[] {
  //when k is greeter then arr.length
  k = k % arr.length;

  if (k == 0) {
    return arr;
  }

  // Convert negative rotation to positive
  if (k < 0) {
      k = k + arr.length;  
  }

  // Step 1: Reverse first k elements
  reverseAnArray(arr, 0, k - 1);

  // Step 2: Reverse remaining n-k elements
  reverseAnArray(arr, k, arr.length - 1);

   // Step 3: Reverse the entire array
   reverseAnArray(arr, 0, arr.length - 1);

  return arr;
}

// for clock wise step 3 became step 1;

// Test case
console.log(rotateAnArray([1,2,3,4,5,6,7], 3));
 
