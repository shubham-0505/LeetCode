class Solution {
public:
    bool isValid(string s) {
        int length = s.length();
        stack<char> myStack;
        bool answer = true;

        for(int i=0;i<length;i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                myStack.push(s[i]);
            }
            else if(!myStack.empty() && s[i]==')'){
                if(myStack.top() == '('){
                    myStack.pop();
                }
                else{
                    answer = false;
                    break;
                }
            }
            else if(!myStack.empty() && s[i]==']'){
                if(myStack.top() == '['){
                    myStack.pop();
                }
                else{
                    answer = false;
                    break;
                }
            }
            else if(!myStack.empty() && s[i]=='}'){
                if(myStack.top()=='{'){
                    myStack.pop();
                }
                else{
                    answer = false;
                    break;
                }
            }
            else if(myStack.empty()){
                answer = false;
                break;
            }
        }

        if(!myStack.empty()){
            return false;
        }
        else{
            return answer;
        }
    }
};
