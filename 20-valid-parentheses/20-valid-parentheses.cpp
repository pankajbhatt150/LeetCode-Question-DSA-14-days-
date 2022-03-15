class Solution {
public:
    bool isValid(string s) {
        // We need a stack
        stack<char> st;
        // iterate over all the character's available in the string
        for(int i = 0; i < s.size(); i++){
            // if we find opening then put in the stack
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                st.push(s[i]);
            }
            // if we find closing then there could be 3 condition's
            else if(s[i] == ')'){
                // if stack is empty return false
                if(st.empty()) return false;
                // if the opening element we want is not equals to that present in stack return false 
                else if(st.top() != '(') return false;
                // if it's the one we want pop it from stack
                else st.pop();
            }
            // similar for these as well
            else if(s[i] == ']'){
                if(st.empty()) return false;
                else if(st.top() != '[') return false;
                else st.pop();
            }
            else if(s[i] == '}'){
                if(st.empty()) return false;
                else if(st.top() != '{') return false;
                else st.pop();
            }
        }
        // once we have pop each and every element it's time to check, wether our stack is empty or not
        if(st.empty()) return true; // if it's return true
        return false; // otherwise return false;
    }
};
