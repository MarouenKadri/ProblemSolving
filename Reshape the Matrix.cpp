class Solution {
public
   
  vectorvectorint matrixReshape( vectorvectorint& mat, int r, int c ) {

	int m = mat.size();
	if ( m == 0 )
		return {}; 
	int n = mat[0].size(); 
	vectorvectorint  _res ( r, vectorint( c ) ); 
	if ( nm != r  c )
	{
		stdcerr   Impossible la transformation; 
		return mat;
	}     

	for ( int i = 0; i  mn; i++ )
	{   
		_res[i  c][i%c] = mat[i  n][i%n];
	}
	
	

	return _res;


}   


};