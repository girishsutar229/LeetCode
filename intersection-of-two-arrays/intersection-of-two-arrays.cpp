class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
   
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

        int i=0;
        int j=0;
        while( i<nums1.size() && j<nums2.size() ){
            
            if(i > 0 && nums1[i]==nums1[i-1]){ //this will help to remove the duplicate entries
                i++;
                continue;
            }
            if(nums1[i]==nums2[j]){            //helps to push the elements in the array
                ans.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i]>nums2[j]){   //increments if element of the other array is smaller
                j++;
            }
            else if(nums1[i]<nums2[j]){
                i++;
            }
        }
        return ans;
    }
};