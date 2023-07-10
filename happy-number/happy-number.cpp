class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> seen;
        while (n != 1 && seen.find(n) == seen.end()) {
            seen.insert(n);
            int ans = 0;
            while (n != 0) {
                int digit = n % 10;
                ans =ans + (digit * digit) ;
                n =n/10;
            }
            n = ans;
        }
        return n == 1;
    }
};
