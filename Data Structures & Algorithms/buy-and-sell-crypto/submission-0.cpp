class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int best = 0 ;
        int minimum = prices[0] ;
        int n = prices.size() ; 
        for ( int i = 1 ; i < n ; i++){
            
            int profit = prices[i] - minimum ;
            best = max(best , profit) ;
            minimum = min(minimum , prices[i]) ;


        }
        return best ; 

        
        
    }
};
