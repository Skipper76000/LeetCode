class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int c ,mx= 1;
        for(string &i : sentences) {
            c=1;
            for(char &j: i) {
                if(j == ' ') c++;
            }
            mx=max(mx ,c );
        }
        return mx;
    }
};