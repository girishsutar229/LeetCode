class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> freq(26, 0);  // Frequency array to store the count of each character
        
        for (char ch : s) {       // Count character frequencies in string s
            freq[ch - 'a']++;
        }
        
        for (char ch : t) {       // Subtract character frequencies in string t
            freq[ch - 'a']--;
        }
        
        for (int i = 0; i < 26; i++) { // Find the character with non-zero frequency
            if (freq[i] != 0) {
                return 'a' + i;        // Convert the index back to the corresponding character
            }
        }
        
        return ' ';  // Handle invalid input case
    }
};
