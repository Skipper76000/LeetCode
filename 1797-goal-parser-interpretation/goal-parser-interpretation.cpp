class Solution {
public:
    string interpret(string s) {
        string str;
        for(int i =0 ;i < s.size() ; i++) {
            if(s[i] == 'G') str.push_back('G');
            else if(s[i] == '(' && s[i+1] == ')') {str.push_back('o');i++;}
            else if(s[i] == '(' && s[i+1] == 'a' && s[i+2] == 'l' && s[i+3] == ')'){str.push_back('a');str.push_back('l');i+=3;}
        }
        return str;
    }
};