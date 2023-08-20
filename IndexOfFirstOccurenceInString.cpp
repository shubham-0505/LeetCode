class Solution {
public:
    int strStr(string haystack, string needle) {
        int l1 = haystack.length();
        int l2 = needle.length();

        if(l1<l2){
            return -1;
        }

        int j=0;

        for(int i=0;i<l1-l2+1;i++){
            if(haystack[i]==needle[j]){
                int temp = i;

                while(j<l2 && haystack[temp]==needle[j]){
                    temp++;
                    j++;
                }

                if(j==l2){
                    return i;
                }
            }
            
            j=0;
        }

        return -1;
    }
};
