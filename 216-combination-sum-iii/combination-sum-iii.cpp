class Solution {
public:
    vector<int> v = {1 ,2 ,3 ,4 ,5 ,6 ,7 ,8 ,9 } ;
    vector<vector<int > > w ;

    void rec(int k , int i , int n, vector<int >& s) {

        if(i == 9 ) {

            if(s.size() == k){
                int sum = 0 ;
                for(auto &i: s) {sum+=i;}
                if(n == sum) {
                    w.push_back(s) ;
                }
            }
            return ;
        }
        s.push_back(v[i]);
        rec(k, i+1 , n , s) ;
        s.pop_back() ;
        rec(k, i+1 , n , s ) ;
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int > s ;
        rec(k , 0 , n , s ) ;
        return w ;
    }
};