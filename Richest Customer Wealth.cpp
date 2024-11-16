class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) 
    {  int maxVal=0 ; 
        
       for(int i=0;i<accounts.size() ;i++) 
       {   int wealth=0; 
           for(int j=0;j<accounts[i].size();j++)  
                  wealth =wealth+accounts[i][j]  ;     
           maxVal=max(maxVal,wealth) ;
           
       }
    return maxVal ;
    }
};