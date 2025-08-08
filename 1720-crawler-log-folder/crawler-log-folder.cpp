class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string> st;
        // int cnt=0;
        for(string &s:logs){
            if(s=="../"){
                if(st.empty()){
                    continue;
                }else{
                    st.pop();
                }
            }else if(s=="./"){
                continue;
            }else{
                st.push(s);
            }

        }

        return st.size();
    }
};