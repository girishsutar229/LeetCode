class Solution {
public:
    string addBinary(string a, string b) {
        int n = a.length();
        int m = b.length();
        int i = n - 1, j = m - 1, carry = 0;
        string res = "";

        while (i >= 0 || j >= 0) {
            int sum = carry;
            if (i >= 0) 
            sum += a[i--] - '0';

            if (j >= 0) 
            sum += b[j--] - '0';
            
            res = to_string(sum % 2) + res;
            carry = sum / 2;
        }
        if (carry) res = '1' + res;
        return res;
    }
};
