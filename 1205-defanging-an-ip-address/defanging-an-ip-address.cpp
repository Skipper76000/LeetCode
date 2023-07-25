class Solution {
public:
    string defangIPaddr(string s) {
        string v;
        for(auto &i : s) {
            if( i == '.'){
                v.push_back('[');
                v.push_back('.');
                v.push_back(']');
            }
            else
                v.push_back(i);
        }
        return v;
    }
};