class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n <= 0) {
            return false; // Negative numbers and zero can't be powers of three.
        }
        
        while (n > 1) {
            if (n % 3 != 0) {
                return false; // If n is not divisible by 3, it's not a power of three.
            }
            n /= 3;
        }
        
        return true; // If n reaches 1, it's a power of three.
    }
};
