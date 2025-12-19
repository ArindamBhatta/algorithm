function containsDuplicate(nums: number[]): boolean {
    //step1: create a set to store unique value.
    const seenNumbers:Set<number> = new Set();

    //Iterate through each element in the array
    for(let i:number = 0; i<nums.length; i++){
        //check if the element is already present in set
        if(seenNumbers.has(nums[i])){
            return true; //Duplicate found
        }
        seenNumbers.add(nums[i]);
    }
    return false;//no duplicate
};