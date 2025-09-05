class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int currcnt = 0;
        int lastsmaller = INT_MIN;
        int longest = 1;

        for(int i = 0; i<n; i++){
            if(nums[i]-1 == lastsmaller){
                currcnt+=1;
                lastsmaller = nums[i];
            }
            else if(nums[i] != lastsmaller){
                currcnt =1;
                lastsmaller = nums[i];
            }
            longest = max (longest,currcnt);
        }
        return longest;
    }
};