// there are 3 ways the ques related to pascal triangle can be asked.
// 1) for a given row and col , return the element present in the pascal triangle.

// (r-1) C (c-1) return the value present at rth row and cth column.
// for(int i=0; i<r; i++)
// {
// res=res*(n-i);
// res=res/(i+1);
// } return res;

// time: O(r)
// space: O(1)

// 2) print any given row.
// going by the above method (r-1) C (c-1)  takes the time of O(n*r) which is not preferrable.

// so we'll go for a better option.
// for a given row we can say that the first and last element will be always be 1. and rest follow the formula " ans= ans*(row-col)/col"
// here time=O(n) and space is O(1);

// 3) print the entire pascal triangle.

// for this problem will again go for the methiod used earlier and take out the solution with time of O(n*n) and space of O(n);

// // leetcode solution for printing the entire pascal triangle:
// link: https://leetcode.com/problems/pascals-triangle/description/
#include<bits/stdc++.h>
class Solution {
public:
    vector<int> generateRow(int row)
{
    long long ans=1;
    vector<int> ansRow;
    ansRow.push_back(1);
    for(int col=1; col<row; col++)
    {
        ans=ans*(row-col);
        ans= ans/(col);
        ansRow.push_back(ans);
    }
    return ansRow;
}
    vector<vector<int>> generate(int N) {
        vector<vector<int>> ans;
    for(int i=1; i<=N; i++)
    {
        ans.push_back(generateRow(i));

    }
    return ans;
    }
};
