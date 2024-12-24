#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> ans;
        for (int x : nums)  
            ans.insert(x);
        nums.clear();
        for(auto it = ans.begin(); it != ans.end(); it++)
            nums.push_back(*it);
        
        return nums.size();
    }
};