class Solution {
  public:
    int maximumSubarray(vector<int>& nums) {
        // code here
        if(nums.empty()) return 0;

        int plain = nums[0];
        int squared = nums[0]*nums[0];
        int answer = max(plain,squared);

        for(int i=1;i<nums.size();i++){
            int x = nums[i];
            int nextPlain = max(x,plain + x);
            int nextSquared = max({x*x, squared + x, plain + x*x});

            plain = nextPlain;
            squared = nextSquared;
            answer = max({answer,plain,squared});
        }

        return answer;
    }
};