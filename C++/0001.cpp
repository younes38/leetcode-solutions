class Solution {
public:
    vector<int> twoSum(vector<int>& A, int t) {
        int n = int(A.size());
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            if (mp[t - A[i]]) {
                return {mp[t - A[i]] - 1, i};
            }
            mp[A[i]] = i + 1;
        }
        return {-1, -1};
    }
};