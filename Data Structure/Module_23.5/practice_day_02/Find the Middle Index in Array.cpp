class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int s = nums.size();
        int totalSum = 0 , leftSum = 0 , rightSum = 0;

        for(int x : nums) totalSum += x ;

        for(int i=0; i<s; i++)
        {
            rightSum = totalSum - leftSum - nums[i];
            if(leftSum == rightSum) return i;
            leftSum += nums[i];
        }
        return -1;
    }
};