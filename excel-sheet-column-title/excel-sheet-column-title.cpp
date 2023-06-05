class Solution {
public:
    string convertToTitle(int columnNumber) {
        string columnTitle = "";
        
        while (columnNumber > 0) {
            int remainder = columnNumber % 26;
            
            if (remainder == 0) {
                columnTitle += 'Z';
                columnNumber = (columnNumber / 26) - 1;
            } else {
                columnTitle += (char)('A' + remainder - 1);
                columnNumber /= 26;
            }
        }
        
        reverse(columnTitle.begin(), columnTitle.end());
        
        return columnTitle;
    }
};
