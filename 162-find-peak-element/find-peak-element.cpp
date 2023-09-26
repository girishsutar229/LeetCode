class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n =  nums.size();
        int S = 0 , E = n-1;
        
        while(S < E){
            int mid = S + (E - S)/2;
            if(nums[mid+1] > nums[mid]){
                S = mid +1;
            }else{
                E = mid;
            }
        }
        return S;
    }
};