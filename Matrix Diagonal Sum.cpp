class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {

      int totalSum = 0;  
	int n = mat.size();  
	for ( int i = 0; i < n; i++ )
	{
		for ( int j = 0; j < n; j++ )
		{
			if ( i == j ) 
				totalSum += mat[i][j];  
		}  
		totalSum += mat[i][n - 1 - i];
	}
	if ( n % 2 != 0 )
		totalSum = totalSum - mat[n / 2 ][n / 2 ]; 

	 return totalSum; 

        
    }
};