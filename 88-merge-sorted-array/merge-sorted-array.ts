/**
 Do not return anything, modify nums1 in-place instead.
 */
function merge(nums1: number[], m: number, nums2: number[], n: number): void {
    let extendedArr = m + n - 1;
    let num1Idx = m - 1;
    let num2Idx = n - 1;

    while (num1Idx >= 0 && num2Idx >= 0) {
        if (nums1[num1Idx] >= nums2[num2Idx]) {
            nums1[extendedArr] = nums1[num1Idx];
            num1Idx--;
            extendedArr--;
        } else {
            nums1[extendedArr] = nums2[num2Idx];
            num2Idx--;
            extendedArr--;
        }
    };
    // //we print element 1 so collect remaining element from only 2nd array

    while (num2Idx >= 0) {
        nums1[extendedArr] = nums2[num2Idx];
        num2Idx--;
        extendedArr--;
    }

    console.log(nums1);

};