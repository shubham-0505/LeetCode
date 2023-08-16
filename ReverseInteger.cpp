class Solution {
public:
    int reverse(int x) {
        int remainder;
        long reverseNum = 0;

        while(x!=0){
            remainder = x % 10;
            x = x / 10;
            reverseNum = (reverseNum * 10) + remainder;
        }
        if(reverseNum > INT_MAX || reverseNum < INT_MIN){
            return 0;
        }
        return reverseNum;
    }
};
