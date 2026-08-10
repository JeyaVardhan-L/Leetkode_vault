class Solution {
private:
    static constexpr int MAX = 4e6;
    static inline bool primes[MAX + 1] = {false};

    static inline bool init = []() {
        primes[0] = primes[1] = true;
        for (int i = 2; i * i <= MAX; i++) {
            if (!primes[i])
                for (int j = i * i; j <= MAX; j += i) primes[j] = true;
        }
        return 0;
    }();

public:
    int diagonalPrime(vector<vector<int>>& nums) {
        unordered_set<int> diag;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            diag.insert(nums[i][i]);
            diag.insert(nums[i][n - 1 - i]);
        }
        int res = 0;
        for (const auto& key: diag) if (!primes[key]) res = max(res,  key);

        return res;
    }
};
