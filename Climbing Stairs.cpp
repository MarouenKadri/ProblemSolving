class Solution {
public:
    int climbStairs(int n) {

    int prevA = 1, prevB = 2, res = 0;
	if ( n == 1 || n == 2  || n==3)
		return n;
	for(int i=3;i<n+1;i++ )
	{
		res = prevA + prevB;
		prevA = prevB;
		prevB = res;
	}
	return res;
    }

};