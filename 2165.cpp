class Solution {
public:
    long long smallestNumber(long long num) {
        if (num == 0) return 0;
        string nums = to_string(num);
        long long ans;

        if (num < 0) {
            sort(nums.begin() + 1, nums.end());
            reverse(nums.begin() + 1, nums.end());
            nums.erase(0, 1);

            ans = stoll(nums);
            return -1LL * ans;
        }

        sort(nums.begin(), nums.end());

        int i = 0;
        while (nums[i] == '0') {
            i++;
        }
        swap(nums[0], nums[i]);
        ans = stoll(nums);
        return ans;
    }
};
