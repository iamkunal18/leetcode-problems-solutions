class Solution
{
    public:
        void moveZeroes(vector<int> &nums)
        {
            int i = 0;
            int j = 0;

            while (j <= nums.size() - 1)
            {
                if (nums[j] != 0)
                {
                    nums[i++] = nums[j];
                    if ((i - 1) != j) nums[j] = 0;
                }
                j++;
            }
        }
};