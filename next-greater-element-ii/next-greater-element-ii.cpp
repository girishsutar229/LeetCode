class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
      int n = nums.size();
      vector<int> result(n, -1);  // Initialize the result array with -1

      stack<int> st;  // Stack to store indices of elements
      for (int i = 0; i < 2 * n; i++) {
        int num = nums[i % n];  // Consider the array as circular

        while (!st.empty() && nums[st.top()] < num) {
          result[st.top()] = num;  // Update the next greater element
          st.pop();
        }

        if (i < n)
        st.push(i);  // Store indices up to the end of the array
      }

      return result;
        
    }
};