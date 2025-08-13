// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.


//SOLUTION
/*
class Solution {
public:
    int reverse(int x) {
        int reverseNum = 0;
        while(x!=0){
            long long lastDigit = x%10;
            if ((reverseNum > INT_MAX / 10) || (reverseNum < INT_MIN / 10)) 
  return 0 ;
            
            reverseNum = (reverseNum * 10) + lastDigit;
            x = x/10;
        }
        return reverseNum;
    }
};
*/