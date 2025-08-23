class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int mx = 0;
        for(int i = 0; i<nums.size()-1; i++)
        {
            for(int j = i+1; j<= nums.size()-1; j++)
            {
                int sum = (nums[i]-1)*(nums[j]-1);
                if(mx < sum)
                {
                    mx = sum;
                }
            }
        }
        return mx;
    }
};