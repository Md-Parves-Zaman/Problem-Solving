class Solution {
public:
    int maxProfit(vector<int>& prices) {

        //{NULL} -> Don't do anything just return 0
        if(prices.empty()){
            return 0;
        }

        //{7,1,5,3,6,4}
        //   i   i         (i+1>i)
        //profit=4+3 -> 7
        int profit=0;
        for(int i=0;i<prices.size()-1;i++){
            if(prices[i+1]>prices[i]){
                profit+=(prices[i+1]-prices[i]);
            }
        }
        return profit;
        //Time Complexity= O(n)
        //Space Complexity= O(1)
    }
};
