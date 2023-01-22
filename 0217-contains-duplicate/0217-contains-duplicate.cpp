class Solution
{
    public:
        bool containsDuplicate(vector<int> &nums)
        {
            unordered_set<int> s;
            for (auto a: nums)
            {
                s.insert(a);
            }

            if (s.size() == nums.size()) return false;
            return true;
        }
};