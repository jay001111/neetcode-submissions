class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_map<char, int> freq;

        int left = 0;
        int best = 0;

        for (int right = 0; right < s.size(); right++) {

            // Expand the window
            freq[s[right]]++;

            // If window becomes invalid, shrink it
            while (freq[s[right]] > 1) {

                freq[s[left]]--;

                if (freq[s[left]] == 0)
                    freq.erase(s[left]);

                left++;
            }

            // Update answer
            best = max(best, right - left + 1);
        }

        return best;
    }
};