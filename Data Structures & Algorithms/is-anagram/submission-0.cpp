class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map< char , int > freq1  ; 
        unordered_map< char , int > freq2 ;
        for( char s1 : s ){
            freq1[s1]++ ;
        }
        for( char t1 : t ){
            freq2[t1]++ ;
        }
        return freq1 == freq2 ;


        
    }
};
