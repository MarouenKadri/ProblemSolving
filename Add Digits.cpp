class Solution {
public:
   
   int helpr_function( int num )
{
	int sum = 0;
	while ( num / 10 )
	{

		sum = sum + (num % 10);
		num = num / 10;


	}
	sum = sum + num;
	return sum;


}
int addDigits( int num ) {   
	

	while ( num / 10 != 0 )
	{
		num = helpr_function( num );
	}

	return num;


}





};