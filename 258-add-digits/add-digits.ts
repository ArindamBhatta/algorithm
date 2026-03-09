function addDigits(num: number): number {

    while(Math.abs(num) >= 10){
        let quotient  = Math.floor(num / 10);
        let remender = Math.floor(num % 10);
        num = quotient + remender;
    }
    return num
};