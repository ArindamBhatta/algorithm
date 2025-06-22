//Q: - Check Array is palandrom or not
function checkPalandrom(arr: number[]):boolean {
    let left: number = 0;
    let right: number = arr.length - 1;
    const mid: number = Math.floor((left + right) / 2);

    while (left <= mid) {
        if (arr[left] !== arr[right]) {
            return false;
        } else {
            left++;
            right--;
        }
    }
    return true;
}
//console.log(checkPalandrom([1, 1, 2, 2, 1, 1]));

//Q: - Reverse a array
function reverseArray(arr: number[]) {
    let start: number = 0;
    let end: number = arr.length - 1;
//for even no index mid is same mid position is not changed
    while (start < end) { 
        let temp: number = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }  
 console.log(arr);
    
}
//reverseArray([10, 8, 11, 13, 3]);


//Q: - we have a sorted array and want to find a pair of elements that sum up to a specific target.
function findTarget(arr: number[], target: number): void {
    let start: number = 0;
    let end: number = arr.length - 1;
  
    while (start <= end) {
        let total: number = arr[start] + arr[end];
        if (total == target) {
            console.log(arr[start], arr[end]);
            break;
        }
        if (total < target) {
            start = start + 1;
        } else {
            end = end - 1;
        }
    }
    console.log(-1);
    
}
//findTarget([2, 4, 6, 8, 10], 17);
 

//Q: - Move all Trailing Zeros
function moveZerosRightHandSide(arr:number[]) {
    let i: number = 0;
    for (let j:number = 0; j < arr.length; j++) {
        if (arr[j] != 0) {
            if (i !== j) {
                let temp: number = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            console.log(arr[i]); //if i want non zero number
            i++;
        }
    }
    console.log(arr); 
}
 moveZerosRightHandSide([2, 0, 3, 0, 5, 0, 4, 9,]);

//Q: - Container With Most Water
function maxArea(arr: number[]) {
    let start: number = 0;
    let end: number = arr.length - 1;
    let maxArea: number = 0;
    
    while (start < end) {
        //minheight and width store the actual water
        let width: number = end - start;
        let minHeight: number = Math.min(arr[start], arr[end]);
        let currentArea: number = width * minHeight;
        maxArea = Math.max(maxArea, currentArea);
        if (arr[start] < arr[end]) {
            start++;
        } else {
            end--;
        } 
    }
    console.log(maxArea);
}
//maxArea([1, 8, 6, 2, 5, 4, 8, 3, 7]);





