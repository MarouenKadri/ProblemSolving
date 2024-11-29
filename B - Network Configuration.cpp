#include<iostream>  
#include<vector>
#include<algorithm>
#include<numeric>

int main()
{

	int n, k, a;   
	std::vector<int>data; 
	int cnt=0;
	std::cin >> n >> k;
	cnt = n; 
	

	while ( n-- )
	{
		std::cin >> a; 
		data.push_back(a); 
		
	}     

	std::sort( data.begin(), data.end() );

	if ( k == 1 )
	{
		std::cout << data[data.size()-1];
		return 0;
	}

	if ( cnt == k )
	{
		std::cout << data[0]; 
		return 0; 
	}   
	std::cout << data[data.size() - k ]; 

	

	return 0; 

}