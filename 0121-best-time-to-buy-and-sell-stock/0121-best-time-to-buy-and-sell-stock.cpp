class Solution
{
    public:
        int maxProfit(vector<int> &prices)
        {
            if (prices.size() == 1) return 0;

           	//Two pointer approach
            int left = 0;
            int right = 1;

            int maxProfit = 0;
            while (right <= prices.size() - 1)
            {
                if (prices[right] > prices[left])
                {
                    if (prices[right] - prices[left] > maxProfit)
                                 maxProfit = prices[right] - prices[left];
                }
                if (prices[right] < prices[left])
                {
                    left = right;
                }
                right++;
            }
            return maxProfit;
        }
};