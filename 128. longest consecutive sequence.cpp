class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.size() == 0) return 0;
        sort(nums.begin(), nums.end());
        int count = 0;
        int maxcount = 0;
        for(int i = 1; i<nums.size(); i++){
            if(nums[i-1] - nums[i] == -1){
                count++;
                maxcount = max(maxcount,count);
            }

            else if(nums[i-1] - nums[i] == 0) continue;

            else{
                count = 0;
            }
        }
        return maxcount + 1;
    }
};
