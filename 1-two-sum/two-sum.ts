function twoSum(nums: number[], target: number): number[] {
    //step 1: create a map to store their number and indices
    const map = new Map<number, number>(); //value, index

    for(let i = 0; i <nums.length; i++){
        //find the complement of the current number
       let complement:number = target - nums[i];

       //check if the complement is already in the map
       if(map.has(complement)){
        return [map.get(complement)!, i];
       }
       // Store current number and index
       map.set(nums[i], i)
    }
    // return an empty array default case
    return[] 
};