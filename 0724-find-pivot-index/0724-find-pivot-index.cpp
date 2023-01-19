class Solution
{
    public:
        int pivotIndex(vector<int> &nums)
        {

            vector<int> v1(nums.size());
            vector<int> v2(nums.size());
            v1[0] = nums[0];
            v2[nums.size() - 1] = nums[nums.size() - 1];

            if(nums.size() == 1) return 0;
            for (int i = 1; i < nums.size(); i++)
            {
                v1[i] = v1[i - 1] + nums[i];
            }

            for (int i = nums.size() - 2; i >= 0; i--)
            {
                v2[i] = v2[i + 1] + nums[i];
            }

            int ans = -1;
            if (v2[1] == 0)
            {
                ans = 0;
            }
            else
            {
                for (int i = 1; i < nums.size() - 1; i++)
                {
                    if (v1[i - 1] == v2[i + 1])
                    {
                        ans = i;
                        break;
                    }
                }
            }

            if (v1[nums.size() - 2] == 0 && ans == -1)
            {
                ans = nums.size() - 1;
            }
            return ans;
        }
};