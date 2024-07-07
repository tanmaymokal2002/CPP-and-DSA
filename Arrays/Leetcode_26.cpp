// Leetcode = 26. Remove Duplicates from Sorted Array

// solution:

#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {

        // Approach 1: using set
        /*
        set<int> s;
        for(auto it: nums){
            s.insert(it);
        }
        int i = 0;
        for(auto it: s){
            nums[i++] = it;
        }
        return s.size();
        */

        // Approach 2:
        int x = 0;
        int n = nums.size();
        for (int i = 1; i < n; ++i)
        {
            if (nums[i] != nums[x])
            {
                ++x;
                nums[x] = nums[i];
            }
        }

        return x + 1;
    }
};

int main(){
    Solution obj;
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &it: v) cin>>it;
    cout << obj.removeDuplicates(v);
}