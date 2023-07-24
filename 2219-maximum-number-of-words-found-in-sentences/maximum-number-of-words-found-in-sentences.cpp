class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int c ,mx= 1;
        for(string &i : sentences) {
            c=1 + count(i.begin() ,i.end() , ' ');
            mx=max(mx ,c );
        }
        return mx;
    }
};