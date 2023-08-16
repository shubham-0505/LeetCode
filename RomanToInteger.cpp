class Solution {
public:
    int pattern(char s){
        if(s=='I'){
            return 1;
        }
        else if(s=='V'){
            return 5;
        }
        else if(s=='X'){
            return 10;
        }
        else if(s=='L'){
            return 50;
        }
        else if(s=='C'){
            return 100;
        }
        else if(s=='D'){
            return 500;
        }
        else if(s=='M'){
            return 1000;
        }
        return 0;
    }
    int romanToInt(string s) {
        int length = s.length();
        int output = 0;

        for(int i=0;i<length-1;i++){
            int diff = pattern(s[i]) - pattern(s[i+1]);

            if(diff>=0){
                output = output + pattern(s[i]);
            }
            else{
                output = output - pattern(s[i]);
            }
        }

        output = output + pattern(s[length-1]);
        return output;
    }
};
