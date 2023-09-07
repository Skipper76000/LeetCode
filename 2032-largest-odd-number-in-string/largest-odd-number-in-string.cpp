class Solution {
public:
    string largestOddNumber(string s) {
        int j = -1;
        for(int i = s.size()-1 ; i >= 0 ; i--) {
            if((s[i]-'0')&1) {
                j=i;
                break;
            }
        }
        if(j == -1) return "" ;
        else  {
            string str ;
            for(int i =0 ; i<= j ; i++) str.push_back(s[i]) ;
            return str ;
        }
    }
};
