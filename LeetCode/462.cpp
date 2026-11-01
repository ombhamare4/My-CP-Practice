class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int ans = 0;
        int mid = n/2;
        int mid_element = nums[mid];

        for(int i=0;i<n;i++){
            if(i<mid){
                ans+= mid_element - nums[i];
            }else{
                ans+= nums[i]-mid_element;
            }
        }


        return ans;
    }
};