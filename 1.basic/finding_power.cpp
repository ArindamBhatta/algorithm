
#include <iostream>
using namespace std;

class FindPowerOfNumber {
public:
    static int getPowerofNumber(int base, int power) {
        if (power == 0) {
            return 1;
        }

        int answer = 1;
        for (int i = 1; i <= power; i++) {
            answer *= base;
        }
        return answer;
    }

    static int powerFast(int base, int power){
       if (power == 1)
       {
           return base;
       }

       if (power == 0)
       {
           return 1;
       }

       if (base == 1)
       {
           return 1;
       }

       if (base == -1)
       {
           return power % 2 == 0 ? 1: -1;
       }

       bool isNegative = power < 0;
       
       if(isNegative){
       power = -power;
       }

       int answer = 1;

       while (power > 0)
       {
           if(power % 2  == 1){
               answer = answer * base;
           }

           base = base * answer;

           power = power/2;
       }

       return isNegative ? 1/answer : answer;
    }
}; 

int main(int argc, char const *argv[]) {
    int answer = FindPowerOfNumber::getPowerofNumber(7, 3);
    cout << answer << endl;
    return 0;
}

   