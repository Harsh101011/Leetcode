class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int> nums1(nums.size());
        vector<int> nums2 = nums;
        sort(nums.begin(), nums.end());
        int x = 0;
        for(int i = 0; i<nums.size(); i++){
            for(int j = 0; j<nums.size(); j++){
                nums1[j] = nums[(j+i)%nums.size()];
            }
            if(nums1 == nums2){
                return true;
            }
        }
        return false;
    }
};