#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        vector<int> digits;
        bool minus = x < 0;
        while(x != 0)   {
            digits.push_back(x % 10);
            x /= 10;
        }
        long long answer = 0, cnt = 1;
        for(int i = digits.size() - 1; i >= 0; i--)
        {
            answer += digits[i] * cnt;
            cnt *= 10;
        }
        
        if(-2147483648 <= answer && answer <= 2147483647)
            return answer;
        return 0;
    }
};