// 1752. Check if Array Is Sorted and Rotated
#include<bits/stdc++.h>
using namespace std;

class Solution{

public:
    bool check(vector<int> &nums){

        int breaks=0, n=nums.size(); 

        for(int i=1; i<n; ++i){
            if(nums[i-1] > nums[i]){
                breaks++;
            }

        }

        if(nums[n-1] > nums[0]){
            ++breaks;
        }x

        return breaks<=1;

    }

};

int main(){
    Solution obj;
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &it: v) cin>>it;
    cout << obj.check(v);
}
