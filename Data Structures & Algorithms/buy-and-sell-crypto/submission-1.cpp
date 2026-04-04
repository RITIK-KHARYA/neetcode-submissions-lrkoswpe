class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cheap;
        int maxreturn;
        int profit =0;

        for(int i=0;i<prices.size();i++){
          cheap = prices[i];
          for(int j=i+1;j<prices.size();j++){
            if(prices[j]>prices[i]){ 
              maxreturn=prices[j];
  profit = max(profit,maxreturn - cheap);
            }
          }
        
         
        }
         return profit;
    }
};
