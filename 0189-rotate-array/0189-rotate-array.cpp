class Solution
{
    public:
        void reverses(vector<int> &nums, int st, int en){
            while(st<en){
                swap(nums[st], nums[en]);
                st++;
                en--;
            }
        }    
        void rotate(vector<int> &nums, int k)
        {
            if(nums.size() == 1) return;
            k = k % nums.size();
           reverses(nums, 0, nums.size()-k-1);
           reverses(nums, nums.size()-k, nums.size()-1);
           reverses(nums, 0, nums.size()-1);
        }
};