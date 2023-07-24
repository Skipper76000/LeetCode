class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
    int mx= 0;
        for(string &i : sentences) {
            int c=1 + count(i.begin() ,i.end() , ' ');
            mx=max(mx ,c );
        }
        return mx;
    }
};