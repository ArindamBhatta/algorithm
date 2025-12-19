function isAnagram(s: string, t: string): boolean {

    //step1: check the length of the string is equal
    if(s.length !== t.length){
        return false;
    }

    //step2: create a number array char26 for count frequency
    const charCounts:number[] = new Array(26).fill(0);

    //step3: increment count for each character in s string. and decrement count for each character for t
    for(let i:number = 0; i<s.length; i++){
        //substract form a (122 - 97)
     const sIndex:number = (s.charCodeAt(i) - 'a'.charCodeAt(0));
     const tIndex:number = (t.charCodeAt(i) - 'a'.charCodeAt(0));

     charCounts[sIndex]++;
     charCounts[tIndex]--;
    }

    //step4: check all element store zero then anagram
    for(const count of charCounts){
        if(count !== 0){
            return false;
        };
    }
    return true;
};