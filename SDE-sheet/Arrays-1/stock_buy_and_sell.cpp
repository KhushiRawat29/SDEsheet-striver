

// You are given an array prices where prices[i] is the price of a given stock on the ith day.
// Input: prices = [7,1,5,3,6,4]
// Output: 5

// 1) To solve this problem, I employed a straightforward approach that iterates through the array of stock prices.
// 2) At each step, I kept track of the minimum stock price seen so far (min_price) and calculated the potential profit 
// that could be obtained by selling at the current price (prices[i] - min_price). 
// 3) I updated the maxprof (maximum profit) variable with the maximum of its current value and the calculated profit.
// 4) Additionally, I updated the min_price to be the minimum of the current stock price and the previously seen minimum.
// Time complexity: O(n)
// space complexity: O(1);
// leetcode solution:
// link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

#include<bits/stdc++.h>
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=prices[0];
        int maxprofit=0;
        int n=prices.size();
        for(int i=0; i<n; i++)
        {
            int cost= prices[i]- mini;
            maxprofit= max(maxprofit, cost);
            mini= min(mini, prices[i]);
        }
        return maxprofit;
        
    }
};