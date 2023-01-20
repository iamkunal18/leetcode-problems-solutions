class Solution
{
    public:
        bool isSubsequence(string s, string t)
        {
            bool ans = false;

            int j = 0;
            if (s.size() <= t.size())
            {

                for (int i = 0; i < t.size(); i++)
                {
                    if (j == s.size())
                    {
                        ans = true;
                        break;
                    }
                    if (s[j] == t[i])
                    {
                        j++;
                    }
                }
            }
            if (j == s.size())
            {
                ans = true;
            }
            return ans;
        }
};