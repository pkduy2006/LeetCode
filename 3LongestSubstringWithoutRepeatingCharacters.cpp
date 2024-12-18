#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() == 1)
            return 1;
        int l = 0, r = 0, res = 0;
        unordered_map<char, int> a;
        a[s[0]]++;
        for(r = 1; r < s.size(); r++)
        {
            while(a[s[r]] > 0)
            {
                a[s[l]]--;
                l++;
            }
            a[s[r]]++;
            res = max(r - l + 1, res);
        }

        return res;
    }
};