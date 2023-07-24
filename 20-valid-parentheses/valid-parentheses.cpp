class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,int> mp={{'{',-1},{'[',-2},{'(',-3},{')',3},{']',2},{'}',1}};
        stack<char> st;
        for(auto &i : s) {
            if(mp[i] < 0 ) {
                st.push(i);
            }else{
                if(st.size() == 0) return false;
                char ans = st.top();
                st.pop();
                if(mp[ans] + mp[i] != 0) {
                    return false;
                }
            }
        }
        if(st.size() == 0) return true;
        else return false;
    }
};