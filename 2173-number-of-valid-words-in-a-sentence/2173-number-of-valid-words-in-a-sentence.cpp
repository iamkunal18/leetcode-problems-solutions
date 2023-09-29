class Solution
{
    public:
        int countValidWords(string sentence)
        {
            int ans = 0;
            vector<string> s;
            string temp = "";

            for (int i = 0; i < sentence.size(); i++)
            {
                if (sentence[i] == ' ')
                {
                    if (temp != "") s.push_back(temp);
                    temp = "";
                }
                else
                {
                    temp += sentence[i];
                }
            }
            if (temp != "") s.push_back(temp);
            for (auto ss: s)
            {
                cout<<ss<<" ";
                bool check = true;
                int countHyp = 0l;
                int countPunc = 0;
                for (int i = 0; i < ss.size(); i++)
                {
                    if(ss[i]=='-') countHyp++;
                    if(ss[i] == '.' || ss[i] == '!' || ss[i] == ',') countPunc++;
                    if (ss[i] >= '0' && ss[i] <= '9')
                    {
                        check = false;
                    }
                    if(i!=ss.size()-1 && (ss[i]=='-' && (ss[i+1]<'a' || ss[i+1]>'z'))) check = false;
                    if (((i == 0 || i == ss.size() - 1) && ss[i] == '-') || (i < ss.size() - 1 &&
                            (ss[i] == '.' || ss[i] == '!' || ss[i] == ',')))
                        check = false;
                }
                if(countHyp>1 || countPunc>1) check = false;
                
                if (check) ans++;
                cout<<ans<<endl;
            }
            return ans;
        }
};