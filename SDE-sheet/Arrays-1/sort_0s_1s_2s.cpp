

// first approach is the brute force approach:
// use merge sort and the array will be sorted. time=O{nlogn)

// second approach :
// count the occurence of all distinct digits in the array.
// and overwrite them in the given array.
// time: O{2n) space= O(1)

// third approach:
// dutch national flag algoritm:

// make an imag array with 0 to low-1 as a sorted zeros and low to mid-1 ad sorted ones, mid to high as unsorted array(given) and high+1 to n-1 as sorted twos.

// if mid[i] ==0; swap it with low; low++ mid++;
// if mid[i]==1 mid++;
// if mid==2 swap with high; high--;

// // time: O{n} space=O{1}
// // leetcode solution:
// link: https://leetcode.com/problems/sort-colors/description/
 #include<bits/stdc++.h>
 class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low=0; 
        int mid=0; 
        int high=nums.size()-1;
        while(mid<=high)
        {
            if(nums[mid]==0)
            {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[mid], nums[high]);
                high--;
            }
        }

    }
};
