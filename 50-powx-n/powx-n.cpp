class Solution {
public:
double power(double a , int b ) {

	//Base Case 

	if( b == 0 ) {
		return 1;
	}
	if( b == 1 ) { //Not Much Effect Can Skip this Condition 
		return a;
	}
	double ans= power(a , b/2);
	if(b&1) return  a * ans * ans;
	else return ans * ans;

}
    double myPow(double x, int n) {

        double sol= power( x, n);

        if(n < 0 ) sol = 1/sol;

        return sol;
    }
};