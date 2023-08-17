class Solution {
public:
    bool isPalindrome(int x) {
        if(x==0){
            return true;
        }

        if(x<0){
            return false;
        }

        int temp = x;
        int remainder;
        long reverseNum = 0;

        while(x!=0){
            remainder = x % 10;
            x = x/10;
            reverseNum = (reverseNum * 10) + remainder;
        }

        if(temp==reverseNum){
            return true;
        }
        else{
            return false;
        }
    }
};
