function canJumpBruteForce(nums: number[]) {

//Every Recursion call index argument call with new value actually index //1 2 3 4;
    function canReach(index: number): boolean {

        if (index >= nums.length - 1) {
            return true;
        }

        let maxJump = nums[index]; // 2 3 1 1;
      
        
       
        
    //iterate every index
        for (let jump = 1; jump <= maxJump; jump++) {    
           console.log(index + jump);
           
            
            if (canReach(index + jump)) { 
                console.log('true');
                
                return true
            }
            
        }

        return false; 
    }
    return canReach(0); // child function call from hear
}

// Example usage
console.log(canJumpBruteForce([2, 3, 1, 1, 4])); // Output: true

