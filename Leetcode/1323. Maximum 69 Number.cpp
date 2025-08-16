/*
class Solution {
public:
    int maximum69Number (int num) {
        int temp = num;
        int placeValue = 0;
        int placeValueSix = -1;

        while(temp > 0){
            int rem = temp % 10;
            if(rem == 6){
                placeValueSix = placeValue;
            }
            temp = temp/10;
            placeValue++;
        }
        if(placeValueSix == -1)
            return num;
        return num + 3*pow(10, placeValueSix);
    }
};
*/