/* 
Problem Requirements:
Remove all instances of val in-place and return the new length.

Do not allocate extra space for another array.

You may change the order of the elements.

Return the number of elements not equal to val.

*/

function removeElement(nums: number[], val: number) {
  let k: number = 0;
  for (let i = 0; i < nums.length; i++) {
    if (nums[i] != val) {
      nums[k] = nums[i];
      k++;
    }
  }
  return k;
}

removeElement([2, 3, 3, 2], 3);
