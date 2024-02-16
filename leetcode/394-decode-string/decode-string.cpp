class Solution {
public:
    string decodeString(string s) {
        stack<string> st;
        stack<int> nms;
        string res = "";
        int n = 0;
        
        for(char c : s){
            if(c >= '0' && c <= '9'){
                n = n * 10 + (c - '0');
            }
            else if(c == '['){
                st.push(res);
                nms.push(n);
                res = "";
                n = 0;
            }
            else if(c == ']'){
                string pr = st.top();
                int count = nms.top();
                st.pop();
                nms.pop();

                while(count --){
                    pr = pr + res;
                }
                res = pr;
            }
            else
                res = res + c;
        }
        return res;
    }
};