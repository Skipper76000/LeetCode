class Solution {
public:
    int minDeletions(string s) {
        int mi = 0;
        vector<int> f(26, 0);
        unordered_set<int> st;
        for(auto &i : s){
            f[i - 'a']++;
        }
        for(auto &i : f){
            if(i == 0) continue;   
            if(st.find(i) != st.end()){
                while(st.find(i) != st.end() && i > 0){
                    i--;
                    mi++;
                }
                if(i!=0) st.insert(i);
            }else{
                st.insert(i);
            } 
        }
        return mi;
    }
};