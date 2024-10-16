class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<long long> pq;
        for (long long i = 0; i < nums.size(); i++) {
            pq.push(nums[i]);
        }
        long long sum = 0;
        while (k > 0) {
            long long p = pq.top();
            sum += p;

            pq.pop();

            pq.push(ceil(p / 3.0));
            k--;
        }
        return sum;
    }
};