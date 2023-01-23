class Solution
{
    public:
        int longestPalindrome(string s)
        {
            int ans = 1;
            unordered_map<char, int> m;

            for (int i = 0; i < s.size(); i++)
            {
                m[s[i]]++;
            }

            int flag = 0;

            for (auto a: m)
            {
                if (a.second % 2 == 0) ans += a.second;
                else
                {
                    ans += a.second - 1;
                    flag = 1;
                }
            }
            if (m.size() == 1) return s.size();
            if (!flag) ans--;
            return ans;
        }
};