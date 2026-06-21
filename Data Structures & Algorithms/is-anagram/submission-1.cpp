class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map< char , int > freq1  ; 
        
        for( char s1 : s ){
            freq1[s1]++ ;
        }
        for( char t1 : t ){
            freq1[t1]-- ;
        }
        for( auto it : freq1 ){
            if( it.second != 0){
                return false ;
            }

        }
        return true ;


        
    }
};
