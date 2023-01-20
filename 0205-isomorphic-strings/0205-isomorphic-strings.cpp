class Solution
{
    public:
        bool isIsomorphic(string s, string t)
        {
            bool ans = true;
            unordered_map<int, int> m1, m2;
            for (int i = 0; i < s.size(); i++)
            {
                if (m1[int(s[i])] == 0)
                {
                    if( m2[int(t[i])]==0) {
                        m1[int(s[i])] = int(t[i]);
                   	    m2[int(t[i])] = int(s[i]);
                    }else {
                        ans = false;
                        break;
                    }
                    
                }
                else if (m1[int(s[i])] != int(t[i]))
                {
                    ans = false;
                    break;
                }
            }

            return ans;
        }
};