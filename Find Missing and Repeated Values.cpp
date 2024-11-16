class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) 
    { 
        vector<int>array ; 
        vector<int> res;
        std::map<int,int> mapArr ; 
        for(int i=0;i<grid.size();i++) 
        {
          for(int j=0;j<grid[0].size();j++)  
                 array.push_back(grid[i][j])  ; 
        }   
        sort(array.begin(),array.end() ) ; 
        for(int i=0;i<array.size();i++) 
        { 
          mapArr[array[i]]++ ; 
        }  
        int sum=0;
        for(auto item :mapArr)  
        {
          std::cout<<item.first<<"   "<<item.second<<endl ;
        } 
        sum= std::accumulate(array.begin(),array.end(),sum);
    
         auto Occurs = std::max_element(mapArr.begin(), mapArr.end(), [](const auto &x, const auto &y) {
                    return x.second < y.second;
                });
        int n = array.size() ; 
        int realsum =n * (n + 1) / 2; 
        int missingElement= realsum-sum;
        res.push_back(Occurs->first) ; 
        res.push_back(missingElement+Occurs->first) ;

        return res;
    }
};