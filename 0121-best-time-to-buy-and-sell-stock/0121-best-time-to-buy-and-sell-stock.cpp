class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int l,r;
        int maxprofit=0;
        l=0;r=1;
        while(r<prices.size()){
            if(prices[l]<prices[r]){
                maxprofit=max(maxprofit,prices[r]-prices[l]);
            }
            else{
                l=r;
            }
            r++;
        }
        return maxprofit;


    }
};