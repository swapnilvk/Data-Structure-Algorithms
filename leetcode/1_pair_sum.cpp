/*
https://leetcode.com/problems/3sum/
Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.

Example 1:
Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]

Example 2:
Input: nums = []
Output: []

Example 3:
Input: nums = [0]
Output: []


Constraints:
    0 <= nums.length <= 3000
    -105 <= nums[i] <= 105
*/
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
         vector<vector<int>> triplets;
        for(int i=0;i<=nums.size()-3; i++){
            int j = i+1;
            int k = nums.size() - 1;
            while(j < k){
                int sum = nums[i] + nums[j] + nums[k];
                if(sum == 0){
                    triplets.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                } else if(sum>0) {
                    k--;
                } else {
                    j++;
                }
            }
            while(i+1<nums.size()-1 && nums[i+1]==nums[i])
                i++;
        }
        
        return triplets;
    }
};

int main() {
   Solution obj;
    vector<int> nums= {-1,0,1,2,-1,-4};
    for(auto it :obj.threeSum(nums)){   
        cout<<"[";
        for(auto iter: it){
            cout<<iter<<",";
        }
        cout<<"],";
    }
}
