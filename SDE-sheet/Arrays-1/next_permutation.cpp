// find the next possible permutation for the given array. 
// Input: nums = [1,2,3]
// Output: [1,3,2].


// Given array nums we find a break point. 
// $ We traverse nums starting from i=n-2th index. We compare each nums[i] with nums[i+1]. If at any index i, nums[i]<nums[i+1], we set i as out breakindex variable.
// $ Now after we've found the breakindex, we traverse the right half of the nums array after breakindex, so from i=n-1 till i=breakpint+1, and look for the least greater after the breakpoint.
// $ Now, we swap the breakindex element with this leastgreat index element.
// Now we reverse the array from breakindex+1 to n-1.
// $ Edge case: It may happen that the array in the input is the last possible maximum permutation possible for the elements like: [5,4,3,3,2,0], so the next permutation will be the reverse of it which is the first smallest possible permutation of the elements. So in case we do not find a breakpoint like in this case, we simply reverse the given nums array.

// time= O(n), space= O(1)

// // leetcode solution :
// link: https://leetcode.com/problems/next-permutation/description/
#include<bits/stdc++.h>
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // # breakpoint find out karoo
        int breakpoint=-1;
        int n=nums.size();
        for(int i=n-2;i>=0;i--){
          if(nums[i]<nums[i+1]){
            breakpoint=i;
            break;
          }  
        } 
        // edge case if max possible number is given
        if(breakpoint==-1){reverse(nums.begin(),nums.end());return;}

        //find least greater of element at the breakpoint
        int leastgreater=-1; 
        int leastGvalue=101;
        for(int i=n-1;i>breakpoint;i--){
            if(nums[i]>nums[breakpoint]){
                if(nums[i]<leastGvalue){
                    leastgreater=i;
                    leastGvalue=nums[i];
                }
            }
        }
        //now swap breakpoint with leastgreater
        swap(nums[breakpoint],nums[leastgreater]);
        //reverse everything after the breakpoint
        reverse(nums.begin()+breakpoint+1,nums.end());
        return;
    }
};