class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string> v;
        for(auto &i :words) {
            stringstream sb(i);
            while(sb.good()) {
                string str;
                getline(sb, str , separator);
                if(str.size())
                    v.push_back(str);
            }
        }
        return v;
    }
};