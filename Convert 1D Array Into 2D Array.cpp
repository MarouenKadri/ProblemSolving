class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {   

    if( m*n!=original.size())     
    {
        std::cerr<<"size of two matrix should be the same !"   ;  
        return { }  ; 
    }
    std::vector<std::vector<int>> _res(m, std::vector<int>(n));
    for (int i = 0; i < original.size(); i++) {
        _res[i / n][i % n] = original[i];
    }
    return _res;  

        
    }
};