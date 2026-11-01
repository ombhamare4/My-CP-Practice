class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        sort(nums.begin(),nums.end());
        int curr_min = nums[0];

        for(int i=1;i<n;i++){
            if(curr_min!=nums[i]){
                ans += nums[i]-curr_min;
            }
        }

        return ans;
    }
};