function topKFrequent(nums: number[], k: number): number[] {
    // Step 1: Count frequencies
    const freqMap  = new Map<number, number>();
   
    for(let i = 0; i<nums.length; i++){
        freqMap.set(nums[i], (freqMap.get((nums[i])) ?? 0) + 1);
    }

    const sorted:number[][] = [...freqMap].sort((a,b)=>b[1] -a[1]);

    // Take top k keys
     const result: number[] = [];

      for (let i = 0; i < k; i++) {
        result.push(sorted[i][0]);
    }

     return result; 
};